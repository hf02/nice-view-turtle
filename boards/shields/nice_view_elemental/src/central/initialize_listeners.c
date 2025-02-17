#include "../../include/central/initialize_listeners.h"

#include <limits.h>
#include <lvgl.h>
#include <stdint.h>
#include <zephyr/sys/util.h>
#include <zmk/battery.h>
#include <zmk/ble.h>
#include <zmk/display.h>
#include <zmk/endpoints.h>
#include <zmk/event_manager.h>
#include <zmk/events/activity_state_changed.h>
#include <zmk/events/battery_state_changed.h>
#include <zmk/events/ble_active_profile_changed.h>
#include <zmk/events/endpoint_changed.h>
#include <zmk/events/layer_state_changed.h>
#include <zmk/events/usb_conn_state_changed.h>
#include <zmk/keymap.h>
#include <zmk/usb.h>
#include "../../include/central/render.h"

struct states states;

#if IS_ENABLED(CONFIG_NICE_VIEW_ELEMENTAL_ANIMATION)
static void background_update_timer(lv_timer_t *timer)
{
    states.background_index = (states.background_index + 1) % UINT_MAX;

    render_main();
}

lv_timer_t *timer;

static void start_timer()
{
    // Call the `background_update_timer` function every configured interval.
    timer = lv_timer_create(background_update_timer, CONFIG_NICE_VIEW_ELEMENTAL_ANIMATION_FRAME_MS, NULL);
}

// We want to pause the animation when the keyboard is idling.
int activity_update_callback(const zmk_event_t *eh)
{
    struct zmk_activity_state_changed *ev = as_zmk_activity_state_changed(eh);
    if (ev == NULL)
    {
        return -ENOTSUP;
    }

    switch (ev->state)
    {
    case ZMK_ACTIVITY_ACTIVE:
    {
        lv_timer_resume(timer);
        break;
    }
    case ZMK_ACTIVITY_IDLE:
    case ZMK_ACTIVITY_SLEEP:
    {
        lv_timer_pause(timer);
        break;
    }
    default:
    {
        return -EINVAL;
    }
    }

    return 0;
}

// Create a listener named `activity_update`. This name is then used to create a
// subscription. When subscribed, `activity_update_callback` will be called.
ZMK_LISTENER(
    activity_update,
    activity_update_callback);

// Subscribe the `activity_update` listener to the `zmk_activity_state_changed`
// event dispatched by ZMK.
ZMK_SUBSCRIPTION(
    activity_update,
    zmk_activity_state_changed);
#endif

static void battery_state_update_callback(struct battery_state state)
{
    states.battery = state;

    render_battery();
}

static struct battery_state get_battery_state(const zmk_event_t *event)
{
    // `as_zmk_battery_state_changed(event)->state_of_charge` seems to be
    // usually used but the same value can be retrieved from the following.
    const uint8_t level = zmk_battery_state_of_charge();
    const bool is_charging = zmk_usb_is_powered();

    struct battery_state state = {
        .level = level,
        .is_charging = is_charging,
    };

    return state;
}

// Create a listener named `widget_battery_state_update`. This name is then
// used to create a subscription.
ZMK_DISPLAY_WIDGET_LISTENER(
    widget_battery_state_update,
    struct battery_state,
    // Called after `get_battery_state` with the value it returned.
    battery_state_update_callback,
    get_battery_state)

// Subscribe the `widget_battery_state_update` listener to the
// `zmk_battery_state_changed` event dispatched by ZMK.
ZMK_SUBSCRIPTION(
    widget_battery_state_update,
    // Triggered when the computed battery percentage has changed.
    zmk_battery_state_changed);

// Subscribe the `widget_battery_state_update` listener to the
// `zmk_usb_conn_state_changed` event dispatched by ZMK.
ZMK_SUBSCRIPTION(
    widget_battery_state_update,
    // Triggered when connected or disconnected from USB.
    zmk_usb_conn_state_changed);

static void connectivity_state_update_callback(struct connectivity_state state)
{
    states.connectivity = state;

    render_connectivity();
}

static struct connectivity_state get_connectivity_state(const zmk_event_t *event)
{
    const struct zmk_endpoint_instance selected_endpoint = zmk_endpoints_selected();
    const int active_profile_index = zmk_ble_active_profile_index();
    const bool active_profile_connected = zmk_ble_active_profile_is_connected();
    const bool active_profile_bonded = !zmk_ble_active_profile_is_open();

    struct connectivity_state state = {
        .selected_endpoint = selected_endpoint,
        .active_profile_index = active_profile_index,
        .active_profile_connected = active_profile_connected,
        .active_profile_bonded = active_profile_bonded,
    };

    return state;
}

// Create a listener named `widget_connectivity_state_update`. This
// name is then used to create a subscription.
ZMK_DISPLAY_WIDGET_LISTENER(
    widget_connectivity_state_update,
    struct connectivity_state,
    // Called after `get_connectivity_state` with the value it returned.
    connectivity_state_update_callback,
    get_connectivity_state)

// Subscribe the `widget_connectivity_state_update` listener to the
// `zmk_endpoint_changed` event dispatched by ZMK.
ZMK_SUBSCRIPTION(
    widget_connectivity_state_update,
    zmk_endpoint_changed);

// Subscribe the `widget_connectivity_state_update` listener to the
// `zmk_usb_conn_state_changed` event dispatched by ZMK.
ZMK_SUBSCRIPTION(
    widget_connectivity_state_update,
    // Triggered when connected or disconnected from USB.
    zmk_usb_conn_state_changed);

// Subscribe the `widget_connectivity_state_update` listener to the
// `zmk_ble_active_profile_changed` event dispatched by ZMK.
ZMK_SUBSCRIPTION(
    widget_connectivity_state_update,
    // Triggered when the selected profile has changed.
    zmk_ble_active_profile_changed);

bool was_layers_defined = false;

static struct layer_state null_layer_state()
{
    struct layer_state state = {
        .index = -1,
        .name = "(null)",
        .is_null = true,
    };

    return state;
}

static bool is_null_layer_state(struct layer_state state)
{
    return state.is_null;
}

// sets all of the layers in states.layers to null
static void initialize_layers_state()
{
    int array_size = sizeof(states.layers) / sizeof(struct layer_state);
    for (int i = 0; i < array_size; i++)
    {
        states.layers[i] = null_layer_state();
    }
}

static void layer_state_update_callback(struct layer_state state)
{
    states.layer = state;

    if (!was_layers_defined)
    {
        initialize_layers_state();
        was_layers_defined = true;
    }

    int array_size = sizeof(states.layers) / sizeof(struct layer_state);
    bool should_clear_layers = false;
    for (int i = 0; i < array_size; i++)
    {

        if (should_clear_layers)
        {
            states.layers[i] = null_layer_state();
            continue;
        }

        if (is_null_layer_state(states.layers[i]))
        {
            states.layers[i] = state;
            should_clear_layers = true;
            states.layer_depth = i + 1;
            continue;
        }

        if (states.layers[i].index == state.index)
        {
            should_clear_layers = true;
            states.layer_depth = i + 1;
            continue;
        }
    }

    render_main();
}

// Retrieve the data we want from the event
static struct layer_state get_layer_state(const zmk_event_t *event)
{
    const zmk_keymap_layer_index_t index = zmk_keymap_highest_layer_active();
    const char *name = zmk_keymap_layer_name(zmk_keymap_layer_index_to_id(index));

    struct layer_state state = {
        .index = index,
        .name = name,
        .is_null = false};

    return state;
}

// Create a listener named `widget_layer_state_update`. This name is then used
// to create a subscription.
ZMK_DISPLAY_WIDGET_LISTENER(
    widget_layer_state_update,
    struct layer_state,
    // Called after `get_layer_state` with the value it returned.
    layer_state_update_callback,
    get_layer_state)

// Subscribe the `widget_layer_state_update` listener to the
// `zmk_battery_state_changed` event dispatched by ZMK.
ZMK_SUBSCRIPTION(
    widget_layer_state_update,
    // Triggered when the selected layer has changed.
    zmk_layer_state_changed);

void initialize_listeners()
{
    widget_layer_state_update_init();
    widget_connectivity_state_update_init();
    widget_battery_state_update_init();

#if IS_ENABLED(CONFIG_NICE_VIEW_ELEMENTAL_ANIMATION)
    start_timer();
#endif
}
