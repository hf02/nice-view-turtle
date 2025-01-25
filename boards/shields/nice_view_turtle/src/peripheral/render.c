#include "../../include/peripheral/render.h"

#include <lvgl.h>
#include <zephyr/sys/util.h>
#include "../../include/colors.h"
#include "../../include/main.h"
#include "../../include/peripheral/initialize_listeners.h"
#include "../../include/utils/draw_battery.h"
#include "../../include/utils/draw_background.h"
#include "../../include/utils/draw_bluetooth_logo_outlined.h"
#include "../../include/utils/draw_bluetooth_logo.h"
#include "../../include/utils/rotate_connectivity_canvas.h"

void render_battery() {
    lv_canvas_fill_bg(battery_canvas, BACKGROUND_COLOR, LV_OPA_COVER);

    draw_battery(battery_canvas, 5, 0, states.battery);
}

void render_connectivity() {
    static const unsigned x = CONNECTIVITY_CANVAS_WIDTH - 12;

    lv_canvas_fill_bg(connectivity_canvas, BACKGROUND_COLOR, LV_OPA_COVER);

    if (states.connectivity.connected) {
        draw_bluetooth_logo(connectivity_canvas, x, 0);
    } else {
        draw_bluetooth_logo_outlined(connectivity_canvas, x, 0);
    }

    rotate_connectivity_canvas();
}

void render_main() {
    lv_canvas_fill_bg(main_canvas, BACKGROUND_COLOR, LV_OPA_COVER);
    
#if IS_ENABLED(CONFIG_NICE_VIEW_TURTLE_BACKGROUND)
    draw_background(main_canvas, states.background_index);
#endif
}
