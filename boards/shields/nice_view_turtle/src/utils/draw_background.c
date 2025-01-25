#include "../../include/utils/draw_background.h"

#include <lvgl.h>
#include "../../include/images/background_turtle.h"

void draw_background(lv_obj_t* canvas, unsigned index) {
    lv_draw_img_dsc_t img_dsc;
    lv_draw_img_dsc_init(&img_dsc);
    lv_canvas_draw_img(canvas, 0, 0, &background_turtle, &img_dsc);
}
