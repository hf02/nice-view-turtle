/*******************************************************************************
 * Size: 36 px
 * Bpp: 1
 * Opts: --bpp 1 --size 36 --no-compress --font PixelOperatorMono-Bold.ttf --range 32-127 --format lvgl -o pixel_operator_36.c
 ******************************************************************************/

#include "../../include/fonts/pixel_operator_36.h"

#include <lvgl.h>

#ifndef PIXEL_OPERATOR_36
#define PIXEL_OPERATOR_36 1
#endif

#if PIXEL_OPERATOR_36

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0x0, 0x1, 0xff, 0x80,

    /* U+0022 "\"" */
    0xfb, 0xff, 0x7f, 0xef, 0xfd, 0xff, 0xbf, 0xf7,
    0xfe, 0xf8,

    /* U+0023 "#" */
    0x3e, 0x7c, 0x3e, 0x7c, 0x3e, 0x7c, 0x3e, 0x7c,
    0x3e, 0x7c, 0xff, 0xff, 0xff, 0xff, 0x3e, 0x7c,
    0x3e, 0x7c, 0x3e, 0x7c, 0x3e, 0x7c, 0x3e, 0x7c,
    0x3e, 0x7c, 0x3e, 0x7c, 0xff, 0xff, 0xff, 0xff,
    0x3e, 0x7c, 0x3e, 0x7c, 0x3e, 0x7c, 0x3e, 0x7c,
    0x3e, 0x7c,

    /* U+0024 "$" */
    0x1, 0x80, 0x1, 0x80, 0x1, 0x80, 0x3f, 0xf8,
    0x3f, 0xf8, 0x39, 0x98, 0xf9, 0x9f, 0xf9, 0x9f,
    0xf9, 0x80, 0xf9, 0x80, 0xf9, 0x80, 0xf9, 0x80,
    0xf9, 0x80, 0x3f, 0xf8, 0x3f, 0xf8, 0x1, 0x9f,
    0x1, 0x9f, 0x1, 0x9f, 0x1, 0x9f, 0x1, 0x9f,
    0xf9, 0x9f, 0xf9, 0x9f, 0x3f, 0xf8, 0x3f, 0xf8,
    0x1, 0x80, 0x1, 0x80, 0x1, 0x80, 0x1, 0x80,
    0x1, 0x80,

    /* U+0025 "%" */
    0x3e, 0x0, 0xf, 0x80, 0x3, 0x0, 0x3, 0xc6,
    0xc, 0xf1, 0x83, 0x3c, 0x63, 0xcf, 0x18, 0xf0,
    0xc0, 0x30, 0x3e, 0x7c, 0x0, 0x1c, 0x0, 0x1f,
    0x0, 0x7, 0xc0, 0xf, 0x8f, 0x3, 0xe3, 0xc3,
    0xe7, 0xcc, 0xf9, 0xf3, 0x30, 0x7c, 0xcc, 0x1f,
    0x30, 0x0, 0xc0, 0x0, 0x3c, 0x0, 0xf, 0x0,

    /* U+0026 "&" */
    0x3f, 0xe0, 0xff, 0x83, 0x86, 0x3e, 0x1f, 0xf8,
    0x7f, 0xe0, 0xf, 0x80, 0x3e, 0x0, 0xf8, 0x3,
    0xe0, 0x3, 0xfe, 0xf, 0xf8, 0xf8, 0x7f, 0xe1,
    0xff, 0x87, 0xfe, 0x1f, 0xf8, 0x7f, 0xe1, 0xff,
    0x87, 0xcf, 0xff, 0x3f, 0xfc,

    /* U+0027 "'" */
    0xff, 0xff, 0xff, 0xff, 0xe0,

    /* U+0028 "(" */
    0x7, 0x83, 0xc1, 0x87, 0xc3, 0xe7, 0xc3, 0xe1,
    0xf0, 0xf8, 0x7c, 0x3e, 0x1f, 0xf, 0x87, 0xc3,
    0xe1, 0xf0, 0x3e, 0x1f, 0xf, 0x80, 0xf0, 0x78,

    /* U+0029 ")" */
    0xf8, 0x7c, 0xe, 0x7, 0xc3, 0xe0, 0x3c, 0x1e,
    0xf, 0x7, 0x83, 0xc1, 0xe0, 0xf0, 0x78, 0x3c,
    0x1e, 0xf, 0x3e, 0x1f, 0xf, 0x9f, 0xf, 0x80,

    /* U+002A "*" */
    0x6, 0x0, 0xc0, 0x18, 0x63, 0x3c, 0x67, 0xff,
    0xff, 0xf9, 0xfc, 0x3f, 0x9f, 0xff, 0xff, 0xff,
    0xfc, 0x66, 0xc, 0x1, 0x80, 0x30,

    /* U+002B "+" */
    0xf, 0x80, 0x3e, 0x0, 0xf8, 0x3, 0xe0, 0xff,
    0xff, 0xff, 0xf0, 0xf8, 0x3, 0xe0, 0xf, 0x80,
    0x3e, 0x0, 0xf8, 0x0,

    /* U+002C "," */
    0x3e, 0x7c, 0xf9, 0xf3, 0x9f, 0x3e, 0x0,

    /* U+002D "-" */
    0xff, 0xff, 0xc0,

    /* U+002E "." */
    0xff, 0xc0,

    /* U+002F "/" */
    0x7, 0x83, 0xc1, 0xe0, 0xf0, 0x78, 0x3c, 0x1e,
    0x7c, 0x3e, 0x1f, 0xf, 0x87, 0xc3, 0xe1, 0xf3,
    0xe1, 0xf0, 0xf8, 0x7c, 0x3e, 0x1f, 0xf, 0x80,

    /* U+0030 "0" */
    0x3f, 0xe0, 0xff, 0x83, 0x86, 0x3e, 0x1f, 0xf8,
    0x7f, 0xe1, 0xff, 0x87, 0xfe, 0x1f, 0xf9, 0xff,
    0xe7, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x7f, 0xf9,
    0xff, 0x87, 0xfe, 0x1f, 0xf8, 0x7f, 0xe1, 0xff,
    0x87, 0xcf, 0xf8, 0x3f, 0xe0,

    /* U+0031 "1" */
    0xf, 0x80, 0x3e, 0x0, 0xf8, 0xf, 0xe0, 0x3f,
    0x83, 0xfe, 0xf, 0xf8, 0x33, 0xe0, 0xcf, 0x80,
    0x3e, 0x0, 0xf8, 0x3, 0xe0, 0xf, 0x80, 0x3e,
    0x0, 0xf8, 0x3, 0xe0, 0xf, 0x80, 0x3e, 0x0,
    0xf8, 0x3f, 0xff, 0xff, 0xfc,

    /* U+0032 "2" */
    0x3f, 0xe0, 0xff, 0x83, 0x86, 0x3e, 0x1f, 0xf8,
    0x7c, 0x1, 0xf0, 0x7, 0xc0, 0x18, 0x1, 0xe0,
    0x7, 0x80, 0x78, 0x1, 0xe0, 0x3e, 0x0, 0xf8,
    0xf, 0x80, 0x3e, 0x0, 0xf8, 0x3, 0xe0, 0xf,
    0x80, 0x3f, 0xff, 0xff, 0xfc,

    /* U+0033 "3" */
    0x3f, 0xe0, 0xff, 0x83, 0x86, 0x3e, 0x1f, 0xf8,
    0x7c, 0x1, 0xf0, 0x7, 0xc0, 0x1f, 0x0, 0x7c,
    0x1, 0xf0, 0x7e, 0x1, 0xf8, 0x0, 0x7c, 0x1,
    0xf0, 0x7, 0xc0, 0x1f, 0x0, 0x7f, 0xe1, 0xff,
    0x87, 0xcf, 0xf8, 0x3f, 0xe0,

    /* U+0034 "4" */
    0x0, 0x7c, 0x1, 0xf0, 0x7, 0xc0, 0x7f, 0x1,
    0xfc, 0x1f, 0xf0, 0x7f, 0xcf, 0x9f, 0x3e, 0x7f,
    0xe1, 0xff, 0x87, 0xfe, 0x1f, 0xff, 0xff, 0xff,
    0xf0, 0x7, 0xc0, 0x1f, 0x0, 0x7c, 0x1, 0xf0,
    0x7, 0xc0, 0x1f, 0x0, 0x7c,

    /* U+0035 "5" */
    0xff, 0xff, 0xff, 0xff, 0x80, 0x3e, 0x0, 0xf8,
    0x3, 0xe0, 0xf, 0x80, 0x3f, 0xf8, 0xff, 0xe0,
    0x1, 0x80, 0x7, 0xc0, 0x1f, 0x0, 0x7c, 0x1,
    0xf0, 0x7, 0xc0, 0x1f, 0x0, 0x7f, 0xe1, 0xff,
    0x87, 0xcf, 0xf8, 0x3f, 0xe0,

    /* U+0036 "6" */
    0x3f, 0xe0, 0xff, 0x83, 0x86, 0x3e, 0x1f, 0xf8,
    0x7f, 0xe0, 0xf, 0x80, 0x3e, 0x0, 0xf8, 0x3,
    0xe0, 0xf, 0xfe, 0x3f, 0xf8, 0xf8, 0x7f, 0xe1,
    0xff, 0x87, 0xfe, 0x1f, 0xf8, 0x7f, 0xe1, 0xff,
    0x87, 0xcf, 0xf8, 0x3f, 0xe0,

    /* U+0037 "7" */
    0xff, 0xff, 0xff, 0xf0, 0x7, 0xc0, 0x1f, 0x0,
    0x7c, 0x1, 0xf0, 0x7, 0xc0, 0x1f, 0x1, 0xe0,
    0x7, 0x80, 0x78, 0x1, 0xe0, 0x3e, 0x0, 0xf8,
    0xf, 0x80, 0x3e, 0x0, 0xf8, 0x3, 0xe0, 0xf,
    0x80, 0x3e, 0x0, 0xf8, 0x0,

    /* U+0038 "8" */
    0x3f, 0xe0, 0xff, 0x83, 0x86, 0x3e, 0x1f, 0xf8,
    0x7f, 0xe1, 0xff, 0x87, 0xfe, 0x1f, 0xf8, 0x7f,
    0xe1, 0xf3, 0xfe, 0xf, 0xf8, 0xf8, 0x7f, 0xe1,
    0xff, 0x87, 0xfe, 0x1f, 0xf8, 0x7f, 0xe1, 0xff,
    0x87, 0xcf, 0xf8, 0x3f, 0xe0,

    /* U+0039 "9" */
    0x3f, 0xe0, 0xff, 0x83, 0x86, 0x3e, 0x1f, 0xf8,
    0x7f, 0xe1, 0xff, 0x87, 0xfe, 0x1f, 0xf8, 0x7f,
    0xe1, 0xf3, 0xff, 0xcf, 0xff, 0x0, 0x7c, 0x1,
    0xf0, 0x7, 0xc0, 0x1f, 0x0, 0x7f, 0xe1, 0xff,
    0x87, 0xcf, 0xf8, 0x3f, 0xe0,

    /* U+003A ":" */
    0xff, 0xc0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x3, 0xff,

    /* U+003B ";" */
    0x3e, 0x7c, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xf, 0x9f, 0x3e, 0x7c,
    0xe7, 0xcf, 0x80,

    /* U+003C "<" */
    0x7, 0x83, 0xcf, 0x87, 0xcf, 0x87, 0xc0, 0xf8,
    0x7c, 0x3e, 0x3, 0xc1, 0xe0,

    /* U+003D "=" */
    0xff, 0xff, 0xc0, 0x0, 0x0, 0x7, 0xff, 0xfe,

    /* U+003E ">" */
    0xf8, 0x7c, 0xf, 0x87, 0xc0, 0x78, 0x3c, 0xf8,
    0x7c, 0x3e, 0x7c, 0x3e, 0x0,

    /* U+003F "?" */
    0x3f, 0xe0, 0xff, 0x83, 0x86, 0x3e, 0x1f, 0xf8,
    0x7c, 0x1, 0xf0, 0x7, 0xc0, 0xf8, 0x3, 0xe0,
    0xf, 0x80, 0x78, 0x1, 0xe0, 0x7, 0x80, 0x1e,
    0x0, 0x78, 0x1, 0xe0, 0x7, 0x80, 0x0, 0x0,
    0x0, 0x1, 0xe0, 0x7, 0x80,

    /* U+0040 "@" */
    0x3f, 0xf8, 0x3f, 0xf8, 0x0, 0x0, 0xc0, 0x3,
    0xc0, 0x3, 0xc1, 0xe3, 0xc1, 0xe3, 0xc6, 0x63,
    0xc6, 0x63, 0xc6, 0x63, 0xc6, 0x63, 0xc6, 0x63,
    0xc6, 0x63, 0xc6, 0x63, 0xc1, 0xf8, 0xc1, 0xf8,
    0xc0, 0x0, 0xc0, 0x0, 0xc0, 0x0, 0x3f, 0xf8,
    0x3f, 0xf8,

    /* U+0041 "A" */
    0x3f, 0xe0, 0xff, 0x83, 0x86, 0x3e, 0x1f, 0xf8,
    0x7f, 0xe1, 0xff, 0x87, 0xfe, 0x1f, 0xf8, 0x7f,
    0xe1, 0xff, 0x87, 0xfe, 0x1f, 0xff, 0xff, 0xff,
    0xff, 0x87, 0xfe, 0x1f, 0xf8, 0x7f, 0xe1, 0xff,
    0x87, 0xfe, 0x1f, 0xf8, 0x7c,

    /* U+0042 "B" */
    0xff, 0xf3, 0xff, 0xcf, 0x87, 0x3e, 0x1f, 0xf8,
    0x7f, 0xe1, 0xff, 0x87, 0xfe, 0x1f, 0xf8, 0x7f,
    0xe1, 0xff, 0xff, 0x3f, 0xfc, 0xf8, 0x7f, 0xe1,
    0xff, 0x87, 0xfe, 0x1f, 0xf8, 0x7f, 0xe1, 0xff,
    0x87, 0xff, 0xfc, 0xff, 0xf0,

    /* U+0043 "C" */
    0x3f, 0xe0, 0xff, 0x83, 0x86, 0x3e, 0x1f, 0xf8,
    0x7f, 0xe0, 0xf, 0x80, 0x3e, 0x0, 0xf8, 0x3,
    0xe0, 0xf, 0x80, 0x3e, 0x0, 0xf8, 0x3, 0xe0,
    0xf, 0x80, 0x3e, 0x0, 0xf8, 0x3, 0xe1, 0xff,
    0x87, 0xcf, 0xf8, 0x3f, 0xe0,

    /* U+0044 "D" */
    0xff, 0xf3, 0xff, 0xcf, 0x87, 0x3e, 0x1f, 0xf8,
    0x7f, 0xe1, 0xff, 0x87, 0xfe, 0x1f, 0xf8, 0x7f,
    0xe1, 0xff, 0x87, 0xfe, 0x1f, 0xf8, 0x7f, 0xe1,
    0xff, 0x87, 0xfe, 0x1f, 0xf8, 0x7f, 0xe1, 0xff,
    0x87, 0xff, 0xfc, 0xff, 0xf0,

    /* U+0045 "E" */
    0xff, 0xff, 0xff, 0xff, 0x80, 0x3e, 0x0, 0xf8,
    0x3, 0xe0, 0xf, 0x80, 0x3e, 0x0, 0xf8, 0x3,
    0xe0, 0xf, 0xf8, 0x3f, 0xe0, 0xf8, 0x3, 0xe0,
    0xf, 0x80, 0x3e, 0x0, 0xf8, 0x3, 0xe0, 0xf,
    0x80, 0x3f, 0xff, 0xff, 0xfc,

    /* U+0046 "F" */
    0xff, 0xff, 0xff, 0xff, 0x80, 0x3e, 0x0, 0xf8,
    0x3, 0xe0, 0xf, 0x80, 0x3e, 0x0, 0xf8, 0x3,
    0xe0, 0xf, 0xf8, 0x3f, 0xe0, 0xf8, 0x3, 0xe0,
    0xf, 0x80, 0x3e, 0x0, 0xf8, 0x3, 0xe0, 0xf,
    0x80, 0x3e, 0x0, 0xf8, 0x0,

    /* U+0047 "G" */
    0x3f, 0xe0, 0xff, 0x83, 0x86, 0x3e, 0x1f, 0xf8,
    0x7f, 0xe0, 0xf, 0x80, 0x3e, 0x0, 0xf8, 0x3,
    0xe0, 0xf, 0x9f, 0xfe, 0x7f, 0xf8, 0x7f, 0xe1,
    0xff, 0x87, 0xfe, 0x1f, 0xf8, 0x7f, 0xe1, 0xff,
    0x87, 0xcf, 0xff, 0x3f, 0xfc,

    /* U+0048 "H" */
    0xf8, 0x7f, 0xe1, 0xff, 0x87, 0xfe, 0x1f, 0xf8,
    0x7f, 0xe1, 0xff, 0x87, 0xfe, 0x1f, 0xf8, 0x7f,
    0xe1, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x7f, 0xe1,
    0xff, 0x87, 0xfe, 0x1f, 0xf8, 0x7f, 0xe1, 0xff,
    0x87, 0xfe, 0x1f, 0xf8, 0x7c,

    /* U+0049 "I" */
    0xff, 0xff, 0xff, 0xf0, 0xf8, 0x3, 0xe0, 0xf,
    0x80, 0x3e, 0x0, 0xf8, 0x3, 0xe0, 0xf, 0x80,
    0x3e, 0x0, 0xf8, 0x3, 0xe0, 0xf, 0x80, 0x3e,
    0x0, 0xf8, 0x3, 0xe0, 0xf, 0x80, 0x3e, 0x0,
    0xf8, 0x3f, 0xff, 0xff, 0xfc,

    /* U+004A "J" */
    0x7, 0xff, 0x7, 0xff, 0x0, 0x7c, 0x0, 0x7c,
    0x0, 0x7c, 0x0, 0x7c, 0x0, 0x7c, 0x0, 0x7c,
    0x0, 0x7c, 0x0, 0x7c, 0x0, 0x7c, 0x0, 0x7c,
    0x0, 0x7c, 0x0, 0x7c, 0x0, 0x7c, 0x0, 0x7c,
    0x0, 0x7c, 0xf8, 0x7c, 0xf8, 0x7c, 0x3f, 0xe0,
    0x3f, 0xe0,

    /* U+004B "K" */
    0xf8, 0x7f, 0xe1, 0xff, 0x87, 0xfe, 0x1f, 0xf8,
    0x63, 0xe7, 0x8f, 0x9e, 0x3f, 0xe0, 0xff, 0x83,
    0xf8, 0xf, 0xe0, 0x3f, 0x80, 0xff, 0x83, 0xfe,
    0xf, 0x9e, 0x3e, 0x78, 0xf8, 0x63, 0xe1, 0xff,
    0x87, 0xfe, 0x1f, 0xf8, 0x7c,

    /* U+004C "L" */
    0xf8, 0x3, 0xe0, 0xf, 0x80, 0x3e, 0x0, 0xf8,
    0x3, 0xe0, 0xf, 0x80, 0x3e, 0x0, 0xf8, 0x3,
    0xe0, 0xf, 0x80, 0x3e, 0x0, 0xf8, 0x3, 0xe0,
    0xf, 0x80, 0x3e, 0x0, 0xf8, 0x3, 0xe0, 0xf,
    0x80, 0x3f, 0xff, 0xff, 0xfc,

    /* U+004D "M" */
    0xf8, 0x1f, 0xf8, 0x1f, 0xf8, 0x1f, 0xf8, 0x1f,
    0xf8, 0x1f, 0xfe, 0x7f, 0xfe, 0x7f, 0xfe, 0x7f,
    0xff, 0xff, 0xf9, 0x9f, 0xf9, 0x9f, 0xf9, 0x9f,
    0xf8, 0x1f, 0xf8, 0x1f, 0xf8, 0x1f, 0xf8, 0x1f,
    0xf8, 0x1f, 0xf8, 0x1f, 0xf8, 0x1f, 0xf8, 0x1f,
    0xf8, 0x1f,

    /* U+004E "N" */
    0xf8, 0x7f, 0xe1, 0xff, 0x87, 0xfe, 0x1f, 0xf8,
    0x7f, 0xe1, 0xff, 0x87, 0xfe, 0x1f, 0xfe, 0x7f,
    0xf9, 0xff, 0xff, 0xff, 0xff, 0xf9, 0xff, 0xe7,
    0xff, 0x87, 0xfe, 0x1f, 0xf8, 0x7f, 0xe1, 0xff,
    0x87, 0xfe, 0x1f, 0xf8, 0x7c,

    /* U+004F "O" */
    0x3f, 0xe0, 0xff, 0x83, 0x86, 0x3e, 0x1f, 0xf8,
    0x7f, 0xe1, 0xff, 0x87, 0xfe, 0x1f, 0xf8, 0x7f,
    0xe1, 0xff, 0x87, 0xfe, 0x1f, 0xf8, 0x7f, 0xe1,
    0xff, 0x87, 0xfe, 0x1f, 0xf8, 0x7f, 0xe1, 0xff,
    0x87, 0xcf, 0xf8, 0x3f, 0xe0,

    /* U+0050 "P" */
    0xff, 0xf3, 0xff, 0xcf, 0x87, 0x3e, 0x1f, 0xf8,
    0x7f, 0xe1, 0xff, 0x87, 0xfe, 0x1f, 0xf8, 0x7f,
    0xe1, 0xff, 0xff, 0x3f, 0xfc, 0xf8, 0x3, 0xe0,
    0xf, 0x80, 0x3e, 0x0, 0xf8, 0x3, 0xe0, 0xf,
    0x80, 0x3e, 0x0, 0xf8, 0x0,

    /* U+0051 "Q" */
    0x3f, 0xe0, 0xff, 0x83, 0x86, 0x3e, 0x1f, 0xf8,
    0x7f, 0xe1, 0xff, 0x87, 0xfe, 0x1f, 0xf8, 0x7f,
    0xe1, 0xff, 0x87, 0xfe, 0x1f, 0xfe, 0x7f, 0xf9,
    0xff, 0xff, 0xff, 0xff, 0xf9, 0xe3, 0xe7, 0x83,
    0x86, 0xf, 0x9f, 0x3e, 0x7c,

    /* U+0052 "R" */
    0xff, 0xe3, 0xff, 0x8f, 0x86, 0x3e, 0x1f, 0xf8,
    0x7f, 0xe1, 0xff, 0x87, 0xfe, 0x1f, 0xf8, 0x7f,
    0xe1, 0xff, 0xfe, 0x3f, 0xf8, 0xff, 0x83, 0xfe,
    0xf, 0xbe, 0x3e, 0xf8, 0xfb, 0xe3, 0xe1, 0xff,
    0x87, 0xfe, 0x1f, 0xf8, 0x7c,

    /* U+0053 "S" */
    0x3f, 0xe0, 0xff, 0x83, 0x86, 0x3e, 0x1f, 0xf8,
    0x7f, 0xe0, 0xf, 0x80, 0x3e, 0x0, 0xf8, 0x3,
    0xe0, 0x3, 0xfe, 0xf, 0xf8, 0x0, 0x7c, 0x1,
    0xf0, 0x7, 0xc0, 0x1f, 0x0, 0x7f, 0xe1, 0xff,
    0x87, 0xcf, 0xf8, 0x3f, 0xe0,

    /* U+0054 "T" */
    0xff, 0xff, 0xff, 0xf0, 0xf8, 0x3, 0xe0, 0xf,
    0x80, 0x3e, 0x0, 0xf8, 0x3, 0xe0, 0xf, 0x80,
    0x3e, 0x0, 0xf8, 0x3, 0xe0, 0xf, 0x80, 0x3e,
    0x0, 0xf8, 0x3, 0xe0, 0xf, 0x80, 0x3e, 0x0,
    0xf8, 0x3, 0xe0, 0xf, 0x80,

    /* U+0055 "U" */
    0xf8, 0x7f, 0xe1, 0xff, 0x87, 0xfe, 0x1f, 0xf8,
    0x7f, 0xe1, 0xff, 0x87, 0xfe, 0x1f, 0xf8, 0x7f,
    0xe1, 0xff, 0x87, 0xfe, 0x1f, 0xf8, 0x7f, 0xe1,
    0xff, 0x87, 0xfe, 0x1f, 0xf8, 0x7f, 0xe1, 0xf3,
    0x86, 0xf, 0xf8, 0x3f, 0xe0,

    /* U+0056 "V" */
    0xf8, 0x7f, 0xe1, 0xff, 0x87, 0xfe, 0x1f, 0xf8,
    0x7f, 0xe1, 0xff, 0x87, 0xfe, 0x1f, 0xf8, 0x7f,
    0xe1, 0xff, 0x87, 0xfe, 0x1f, 0xf8, 0x7f, 0xe1,
    0xff, 0x87, 0xfe, 0x1f, 0x38, 0x60, 0xff, 0x83,
    0xfe, 0x1, 0xe0, 0x7, 0x80,

    /* U+0057 "W" */
    0xf8, 0x1f, 0xf8, 0x1f, 0xf8, 0x1f, 0xf8, 0x1f,
    0xf8, 0x1f, 0xf9, 0x9f, 0xf9, 0x9f, 0xf9, 0x9f,
    0xf9, 0x9f, 0xf9, 0x9f, 0xf9, 0x9f, 0xf9, 0x9f,
    0xf9, 0x9f, 0xf9, 0x9f, 0xf9, 0x9f, 0xf9, 0x9f,
    0xf9, 0x9f, 0xf9, 0x9f, 0x38, 0x1c, 0x3e, 0x7c,
    0x3e, 0x7c,

    /* U+0058 "X" */
    0xf8, 0x7f, 0xe1, 0xff, 0x87, 0xfe, 0x1f, 0xf8,
    0x7f, 0xe1, 0xff, 0x87, 0xcf, 0xf8, 0x3f, 0xe0,
    0x1e, 0x0, 0x78, 0x1, 0xe0, 0x3f, 0xe0, 0xff,
    0x8f, 0x87, 0xfe, 0x1f, 0xf8, 0x7f, 0xe1, 0xff,
    0x87, 0xfe, 0x1f, 0xf8, 0x7c,

    /* U+0059 "Y" */
    0xf8, 0x7f, 0xe1, 0xff, 0x87, 0xfe, 0x1f, 0xf8,
    0x7f, 0xe1, 0xff, 0x87, 0xce, 0x18, 0x3f, 0xe0,
    0xff, 0x80, 0x78, 0x1, 0xe0, 0x7, 0x80, 0x1e,
    0x0, 0x78, 0x1, 0xe0, 0x7, 0x80, 0x1e, 0x0,
    0x78, 0x1, 0xe0, 0x7, 0x80,

    /* U+005A "Z" */
    0xff, 0xff, 0xff, 0xf0, 0x7, 0xc0, 0x1f, 0x0,
    0x7c, 0x1, 0xf0, 0x7, 0xc0, 0x1f, 0x1, 0xe0,
    0x7, 0x80, 0x78, 0x1, 0xe0, 0x3e, 0x0, 0xf8,
    0xf, 0x80, 0x3e, 0x0, 0xf8, 0x3, 0xe0, 0xf,
    0x80, 0x3f, 0xff, 0xff, 0xfc,

    /* U+005B "[" */
    0xff, 0xff, 0xfe, 0x1f, 0xf, 0x87, 0xc3, 0xe1,
    0xf0, 0xf8, 0x7c, 0x3e, 0x1f, 0xf, 0x87, 0xc3,
    0xe1, 0xf0, 0xf8, 0x7c, 0x3e, 0x1f, 0xff, 0xf8,

    /* U+005C "\\" */
    0xf8, 0x7c, 0x3e, 0x1f, 0xf, 0x87, 0xc3, 0xe0,
    0x7c, 0x3e, 0x1f, 0xf, 0x87, 0xc3, 0xe1, 0xf0,
    0x1e, 0xf, 0x7, 0x83, 0xc1, 0xe0, 0xf0, 0x78,

    /* U+005D "]" */
    0xff, 0xff, 0xf0, 0x7c, 0x1f, 0x7, 0xc1, 0xf0,
    0x7c, 0x1f, 0x7, 0xc1, 0xf0, 0x7c, 0x1f, 0x7,
    0xc1, 0xf0, 0x7c, 0x1f, 0x7, 0xc1, 0xf0, 0x7f,
    0xff, 0xff, 0xc0,

    /* U+005E "^" */
    0x7, 0x80, 0x3c, 0xf, 0xf8, 0x7f, 0xc3, 0x86,
    0x7c, 0x3f, 0x0, 0x78, 0x3, 0xc0, 0x18,

    /* U+005F "_" */
    0xff, 0xff, 0xff, 0xff, 0xf0,

    /* U+0060 "`" */
    0xf9, 0xf0, 0xf9, 0xf0,

    /* U+0061 "a" */
    0x3f, 0xe0, 0xff, 0x8f, 0x87, 0xfe, 0x1f, 0x0,
    0x7c, 0x1, 0xf0, 0x7, 0xcf, 0xff, 0x3f, 0xff,
    0xe1, 0xff, 0x87, 0xfe, 0x1f, 0xf8, 0x7c, 0xe1,
    0xf3, 0xff, 0xcf, 0xff,

    /* U+0062 "b" */
    0xf8, 0x3, 0xe0, 0xf, 0x80, 0x3e, 0x0, 0xf8,
    0x3, 0xff, 0xcf, 0xff, 0x3e, 0x1f, 0xf8, 0x7f,
    0xe1, 0xff, 0x87, 0xfe, 0x1f, 0xf8, 0x7f, 0xe1,
    0xff, 0x87, 0xfe, 0x1f, 0xf8, 0x7f, 0xe1, 0xff,
    0x87, 0x3f, 0xfc, 0xff, 0xf0,

    /* U+0063 "c" */
    0x3f, 0xe0, 0xff, 0x8f, 0x87, 0xfe, 0x1f, 0xf8,
    0x3, 0xe0, 0xf, 0x80, 0x3e, 0x0, 0xf8, 0x3,
    0xe0, 0xf, 0x80, 0x3e, 0x0, 0xf8, 0x7f, 0xe1,
    0xf3, 0xfe, 0xf, 0xf8,

    /* U+0064 "d" */
    0x0, 0x7c, 0x1, 0xf0, 0x7, 0xc0, 0x1f, 0x0,
    0x7c, 0xff, 0xf3, 0xff, 0xfe, 0x1f, 0xf8, 0x7f,
    0xe1, 0xff, 0x87, 0xfe, 0x1f, 0xf8, 0x7f, 0xe1,
    0xff, 0x87, 0xfe, 0x1f, 0xf8, 0x7f, 0xe1, 0xf3,
    0x87, 0xcf, 0xff, 0x3f, 0xfc,

    /* U+0065 "e" */
    0x3f, 0xe0, 0xff, 0x83, 0x86, 0x3e, 0x1f, 0xf8,
    0x7f, 0xe1, 0xff, 0x87, 0xff, 0xff, 0xff, 0xff,
    0xe0, 0xf, 0x80, 0x3e, 0x0, 0xf8, 0x7f, 0xe1,
    0xf3, 0xfe, 0xf, 0xf8,

    /* U+0066 "f" */
    0xf, 0xe1, 0xfc, 0x38, 0x1f, 0x3, 0xe0, 0x7c,
    0xf, 0x87, 0xff, 0xff, 0xe7, 0xc0, 0xf8, 0x1f,
    0x3, 0xe0, 0x7c, 0xf, 0x81, 0xf0, 0x3e, 0x7,
    0xc0, 0xf8, 0x1f, 0x3, 0xe0,

    /* U+0067 "g" */
    0x3f, 0xfc, 0xff, 0xf3, 0x87, 0xfe, 0x1f, 0xf8,
    0x7f, 0xe1, 0xff, 0x87, 0xfe, 0x1f, 0xf8, 0x7f,
    0xe1, 0xff, 0x87, 0xfe, 0x1f, 0x3f, 0xfc, 0xff,
    0xf0, 0x7, 0xc0, 0x1f, 0x0, 0x7f, 0xe1, 0xff,
    0x87, 0xcf, 0xf8, 0x3f, 0xe0,

    /* U+0068 "h" */
    0xf8, 0x3, 0xe0, 0xf, 0x80, 0x3e, 0x0, 0xf8,
    0x3, 0xff, 0xcf, 0xff, 0x3e, 0x1c, 0xf8, 0x7f,
    0xe1, 0xff, 0x87, 0xfe, 0x1f, 0xf8, 0x7f, 0xe1,
    0xff, 0x87, 0xfe, 0x1f, 0xf8, 0x7f, 0xe1, 0xff,
    0x87, 0xfe, 0x1f, 0xf8, 0x7c,

    /* U+0069 "i" */
    0xf, 0x80, 0x3e, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x3, 0xfe, 0xf, 0xf8, 0x3, 0xe0, 0xf, 0x80,
    0x3e, 0x0, 0xf8, 0x3, 0xe0, 0xf, 0x80, 0x3e,
    0x0, 0xf8, 0x3, 0xe0, 0xf, 0x80, 0x3e, 0x0,
    0xf8, 0x3f, 0xff, 0xff, 0xfc,

    /* U+006A "j" */
    0x0, 0x7c, 0x1, 0xf0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x1f, 0xf0, 0x7f, 0xc0, 0x1f, 0x0, 0x7c,
    0x1, 0xf0, 0x7, 0xc0, 0x1f, 0x0, 0x7c, 0x1,
    0xf0, 0x7, 0xc0, 0x1f, 0x0, 0x7c, 0x1, 0xf0,
    0x7, 0xc0, 0x1f, 0x0, 0x7c, 0x1, 0xff, 0x87,
    0xfe, 0x1f, 0x3f, 0xe0, 0xff, 0x80,

    /* U+006B "k" */
    0xf8, 0x3, 0xe0, 0xf, 0x80, 0x3e, 0x0, 0xf8,
    0x3, 0xe1, 0xff, 0x87, 0xfe, 0x18, 0xf9, 0xe3,
    0xe7, 0x8f, 0xf8, 0x3f, 0xe0, 0xfe, 0x3, 0xf8,
    0xf, 0xf8, 0x3f, 0xe0, 0xf9, 0xe3, 0xe7, 0x8f,
    0x86, 0x3e, 0x1f, 0xf8, 0x7c,

    /* U+006C "l" */
    0xff, 0x83, 0xfe, 0x0, 0xf8, 0x3, 0xe0, 0xf,
    0x80, 0x3e, 0x0, 0xf8, 0x3, 0xe0, 0xf, 0x80,
    0x3e, 0x0, 0xf8, 0x3, 0xe0, 0xf, 0x80, 0x3e,
    0x0, 0xf8, 0x3, 0xe0, 0xf, 0x80, 0x3e, 0x0,
    0xf8, 0x3f, 0xff, 0xff, 0xfc,

    /* U+006D "m" */
    0xfe, 0x7c, 0xfe, 0x7c, 0xf8, 0x1c, 0xf9, 0x9f,
    0xf9, 0x9f, 0xf9, 0x9f, 0xf9, 0x9f, 0xf9, 0x9f,
    0xf9, 0x9f, 0xf9, 0x9f, 0xf9, 0x9f, 0xf9, 0x9f,
    0xf8, 0x1f, 0xf8, 0x1f, 0xf8, 0x1f, 0xf8, 0x1f,

    /* U+006E "n" */
    0xff, 0xf3, 0xff, 0xcf, 0x87, 0x3e, 0x1f, 0xf8,
    0x7f, 0xe1, 0xff, 0x87, 0xfe, 0x1f, 0xf8, 0x7f,
    0xe1, 0xff, 0x87, 0xfe, 0x1f, 0xf8, 0x7f, 0xe1,
    0xff, 0x87, 0xfe, 0x1f,

    /* U+006F "o" */
    0x3f, 0xe0, 0xff, 0x8f, 0x87, 0xfe, 0x1f, 0xf8,
    0x7f, 0xe1, 0xff, 0x87, 0xfe, 0x1f, 0xf8, 0x7f,
    0xe1, 0xff, 0x87, 0xfe, 0x1f, 0xf8, 0x7c, 0xe1,
    0x83, 0xfe, 0xf, 0xf8,

    /* U+0070 "p" */
    0xff, 0xf3, 0xff, 0xcf, 0x87, 0x3e, 0x1f, 0xf8,
    0x7f, 0xe1, 0xff, 0x87, 0xfe, 0x1f, 0xf8, 0x7f,
    0xe1, 0xff, 0x87, 0xfe, 0x1f, 0xf8, 0x7f, 0xe1,
    0xff, 0xff, 0x3f, 0xfc, 0xf8, 0x3, 0xe0, 0xf,
    0x80, 0x3e, 0x0, 0xf8, 0x0,

    /* U+0071 "q" */
    0x3f, 0xfc, 0xff, 0xf3, 0x87, 0xfe, 0x1f, 0xf8,
    0x7f, 0xe1, 0xff, 0x87, 0xfe, 0x1f, 0xf8, 0x7f,
    0xe1, 0xff, 0x87, 0xfe, 0x1f, 0xf8, 0x7f, 0xe1,
    0xf3, 0xff, 0xcf, 0xff, 0x0, 0x7c, 0x1, 0xf0,
    0x7, 0xc0, 0x1f, 0x0, 0x7c,

    /* U+0072 "r" */
    0xf8, 0x7f, 0xe1, 0xff, 0x9f, 0xfe, 0x7f, 0xf8,
    0x3, 0xf8, 0xf, 0xe0, 0x3e, 0x0, 0xf8, 0x3,
    0xe0, 0xf, 0x80, 0x3e, 0x0, 0xf8, 0x3, 0xe0,
    0xf, 0x80, 0x3e, 0x0,

    /* U+0073 "s" */
    0x3f, 0xe0, 0xff, 0x83, 0x86, 0x3e, 0x1f, 0xf8,
    0x7f, 0xe0, 0xf, 0x80, 0xf, 0xf8, 0x3f, 0xe0,
    0x1, 0x80, 0x7, 0xc0, 0x1f, 0xf8, 0x7f, 0xe1,
    0xf3, 0xfe, 0xf, 0xf8,

    /* U+0074 "t" */
    0x3e, 0x7, 0xc3, 0xff, 0xff, 0xf3, 0xe0, 0x7c,
    0xf, 0x81, 0xf0, 0x3e, 0x7, 0xc0, 0xf8, 0x1f,
    0x3, 0xe0, 0x7c, 0xf, 0x81, 0xf0, 0xf, 0xe1,
    0xfc,

    /* U+0075 "u" */
    0xf8, 0x7f, 0xe1, 0xff, 0x87, 0xfe, 0x1f, 0xf8,
    0x7f, 0xe1, 0xff, 0x87, 0xfe, 0x1f, 0xf8, 0x7f,
    0xe1, 0xff, 0x87, 0xfe, 0x1f, 0xf8, 0x7c, 0xe1,
    0x83, 0xfe, 0xf, 0xf8,

    /* U+0076 "v" */
    0xf8, 0x7f, 0xe1, 0xff, 0x87, 0xfe, 0x1f, 0xf8,
    0x7f, 0xe1, 0xff, 0x87, 0xfe, 0x1f, 0xf8, 0x7f,
    0xe1, 0xff, 0x87, 0xce, 0x18, 0x3f, 0xe0, 0xff,
    0x80, 0x78, 0x1, 0xe0,

    /* U+0077 "w" */
    0xf8, 0x1f, 0xf8, 0x1f, 0xf8, 0x1f, 0xf8, 0x1f,
    0xf9, 0x9f, 0xf9, 0x9f, 0xf9, 0x9f, 0xf9, 0x9f,
    0xf9, 0x9f, 0xf9, 0x9f, 0xf9, 0x9f, 0xf9, 0x9f,
    0xf9, 0x9f, 0x38, 0x1c, 0x3e, 0x7c, 0x3e, 0x7c,

    /* U+0078 "x" */
    0xf8, 0x7f, 0xe1, 0xff, 0x87, 0xfe, 0x1f, 0x38,
    0x60, 0xff, 0x83, 0xfe, 0x1, 0xe0, 0x7, 0x80,
    0x1e, 0x3, 0xfe, 0xf, 0xf8, 0xf8, 0x7f, 0xe1,
    0xff, 0x87, 0xfe, 0x1f,

    /* U+0079 "y" */
    0xf8, 0x7f, 0xe1, 0xff, 0x87, 0xfe, 0x1f, 0xf8,
    0x7f, 0xe1, 0xff, 0x87, 0xfe, 0x1f, 0xf8, 0x7f,
    0xe1, 0xff, 0x87, 0xce, 0x1f, 0x3f, 0xfc, 0xff,
    0xf0, 0x7, 0xc0, 0x1f, 0x0, 0x7f, 0xe1, 0xff,
    0x87, 0xcf, 0xf8, 0x3f, 0xe0,

    /* U+007A "z" */
    0xff, 0xff, 0xff, 0xf0, 0x7, 0xc0, 0x1f, 0x0,
    0x7c, 0x7, 0x80, 0x1e, 0x1, 0xe0, 0x7, 0x80,
    0xf8, 0x3, 0xe0, 0x3e, 0x0, 0xf8, 0x3, 0xe0,
    0xf, 0xff, 0xff, 0xff,

    /* U+007B "{" */
    0x7, 0xe0, 0xfc, 0x18, 0x1f, 0x3, 0xe0, 0x7c,
    0xf, 0x81, 0xf0, 0x3e, 0x7, 0xc3, 0xe0, 0x7c,
    0x3, 0xe0, 0x7c, 0xf, 0x81, 0xf0, 0x3e, 0x7,
    0xc0, 0xf8, 0x3, 0xf0, 0x7e,

    /* U+007C "|" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0x80,

    /* U+007D "}" */
    0xfe, 0x1f, 0xc0, 0x38, 0x7, 0xc0, 0xf8, 0x1f,
    0x3, 0xe0, 0x7c, 0xf, 0x81, 0xf0, 0x7, 0x80,
    0xf0, 0xf8, 0x1f, 0x3, 0xe0, 0x7c, 0xf, 0x81,
    0xf0, 0x3e, 0x7f, 0xf, 0xe0,

    /* U+007E "~" */
    0x3f, 0x9f, 0x3f, 0x9f, 0xf9, 0xfc, 0xf9, 0xfc
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 288, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 288, .box_w = 5, .box_h = 21, .ofs_x = 7, .ofs_y = 0},
    {.bitmap_index = 15, .adv_w = 288, .box_w = 11, .box_h = 7, .ofs_x = 2, .ofs_y = 14},
    {.bitmap_index = 25, .adv_w = 288, .box_w = 16, .box_h = 21, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 67, .adv_w = 288, .box_w = 16, .box_h = 29, .ofs_x = 0, .ofs_y = -5},
    {.bitmap_index = 125, .adv_w = 288, .box_w = 18, .box_h = 21, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 173, .adv_w = 288, .box_w = 14, .box_h = 21, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 210, .adv_w = 288, .box_w = 5, .box_h = 7, .ofs_x = 7, .ofs_y = 14},
    {.bitmap_index = 215, .adv_w = 288, .box_w = 9, .box_h = 21, .ofs_x = 7, .ofs_y = 0},
    {.bitmap_index = 239, .adv_w = 288, .box_w = 9, .box_h = 21, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 263, .adv_w = 288, .box_w = 11, .box_h = 16, .ofs_x = 2, .ofs_y = 5},
    {.bitmap_index = 285, .adv_w = 288, .box_w = 14, .box_h = 11, .ofs_x = 2, .ofs_y = 5},
    {.bitmap_index = 305, .adv_w = 288, .box_w = 7, .box_h = 7, .ofs_x = 4, .ofs_y = -5},
    {.bitmap_index = 312, .adv_w = 288, .box_w = 9, .box_h = 2, .ofs_x = 4, .ofs_y = 9},
    {.bitmap_index = 315, .adv_w = 288, .box_w = 5, .box_h = 2, .ofs_x = 7, .ofs_y = 0},
    {.bitmap_index = 317, .adv_w = 288, .box_w = 9, .box_h = 21, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 341, .adv_w = 288, .box_w = 14, .box_h = 21, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 378, .adv_w = 288, .box_w = 14, .box_h = 21, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 415, .adv_w = 288, .box_w = 14, .box_h = 21, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 452, .adv_w = 288, .box_w = 14, .box_h = 21, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 489, .adv_w = 288, .box_w = 14, .box_h = 21, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 526, .adv_w = 288, .box_w = 14, .box_h = 21, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 563, .adv_w = 288, .box_w = 14, .box_h = 21, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 600, .adv_w = 288, .box_w = 14, .box_h = 21, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 637, .adv_w = 288, .box_w = 14, .box_h = 21, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 674, .adv_w = 288, .box_w = 14, .box_h = 21, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 711, .adv_w = 288, .box_w = 5, .box_h = 16, .ofs_x = 7, .ofs_y = 0},
    {.bitmap_index = 721, .adv_w = 288, .box_w = 7, .box_h = 21, .ofs_x = 4, .ofs_y = -5},
    {.bitmap_index = 740, .adv_w = 288, .box_w = 9, .box_h = 11, .ofs_x = 4, .ofs_y = 5},
    {.bitmap_index = 753, .adv_w = 288, .box_w = 9, .box_h = 7, .ofs_x = 4, .ofs_y = 7},
    {.bitmap_index = 761, .adv_w = 288, .box_w = 9, .box_h = 11, .ofs_x = 4, .ofs_y = 5},
    {.bitmap_index = 774, .adv_w = 288, .box_w = 14, .box_h = 21, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 811, .adv_w = 288, .box_w = 16, .box_h = 21, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 853, .adv_w = 288, .box_w = 14, .box_h = 21, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 890, .adv_w = 288, .box_w = 14, .box_h = 21, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 927, .adv_w = 288, .box_w = 14, .box_h = 21, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 964, .adv_w = 288, .box_w = 14, .box_h = 21, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1001, .adv_w = 288, .box_w = 14, .box_h = 21, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1038, .adv_w = 288, .box_w = 14, .box_h = 21, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1075, .adv_w = 288, .box_w = 14, .box_h = 21, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1112, .adv_w = 288, .box_w = 14, .box_h = 21, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1149, .adv_w = 288, .box_w = 14, .box_h = 21, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1186, .adv_w = 288, .box_w = 16, .box_h = 21, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1228, .adv_w = 288, .box_w = 14, .box_h = 21, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1265, .adv_w = 288, .box_w = 14, .box_h = 21, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1302, .adv_w = 288, .box_w = 16, .box_h = 21, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1344, .adv_w = 288, .box_w = 14, .box_h = 21, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1381, .adv_w = 288, .box_w = 14, .box_h = 21, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1418, .adv_w = 288, .box_w = 14, .box_h = 21, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1455, .adv_w = 288, .box_w = 14, .box_h = 21, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1492, .adv_w = 288, .box_w = 14, .box_h = 21, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1529, .adv_w = 288, .box_w = 14, .box_h = 21, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1566, .adv_w = 288, .box_w = 14, .box_h = 21, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1603, .adv_w = 288, .box_w = 14, .box_h = 21, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1640, .adv_w = 288, .box_w = 14, .box_h = 21, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1677, .adv_w = 288, .box_w = 16, .box_h = 21, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1719, .adv_w = 288, .box_w = 14, .box_h = 21, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1756, .adv_w = 288, .box_w = 14, .box_h = 21, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1793, .adv_w = 288, .box_w = 14, .box_h = 21, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1830, .adv_w = 288, .box_w = 9, .box_h = 21, .ofs_x = 7, .ofs_y = 0},
    {.bitmap_index = 1854, .adv_w = 288, .box_w = 9, .box_h = 21, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 1878, .adv_w = 288, .box_w = 10, .box_h = 21, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1905, .adv_w = 288, .box_w = 13, .box_h = 9, .ofs_x = 2, .ofs_y = 11},
    {.bitmap_index = 1920, .adv_w = 288, .box_w = 18, .box_h = 2, .ofs_x = 0, .ofs_y = -5},
    {.bitmap_index = 1925, .adv_w = 288, .box_w = 7, .box_h = 4, .ofs_x = 4, .ofs_y = 16},
    {.bitmap_index = 1929, .adv_w = 288, .box_w = 14, .box_h = 16, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1957, .adv_w = 288, .box_w = 14, .box_h = 21, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1994, .adv_w = 288, .box_w = 14, .box_h = 16, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 2022, .adv_w = 288, .box_w = 14, .box_h = 21, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 2059, .adv_w = 288, .box_w = 14, .box_h = 16, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 2087, .adv_w = 288, .box_w = 11, .box_h = 21, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 2116, .adv_w = 288, .box_w = 14, .box_h = 21, .ofs_x = 2, .ofs_y = -5},
    {.bitmap_index = 2153, .adv_w = 288, .box_w = 14, .box_h = 21, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 2190, .adv_w = 288, .box_w = 14, .box_h = 21, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 2227, .adv_w = 288, .box_w = 14, .box_h = 26, .ofs_x = 2, .ofs_y = -5},
    {.bitmap_index = 2273, .adv_w = 288, .box_w = 14, .box_h = 21, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 2310, .adv_w = 288, .box_w = 14, .box_h = 21, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 2347, .adv_w = 288, .box_w = 16, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2379, .adv_w = 288, .box_w = 14, .box_h = 16, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 2407, .adv_w = 288, .box_w = 14, .box_h = 16, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 2435, .adv_w = 288, .box_w = 14, .box_h = 21, .ofs_x = 2, .ofs_y = -5},
    {.bitmap_index = 2472, .adv_w = 288, .box_w = 14, .box_h = 21, .ofs_x = 2, .ofs_y = -5},
    {.bitmap_index = 2509, .adv_w = 288, .box_w = 14, .box_h = 16, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 2537, .adv_w = 288, .box_w = 14, .box_h = 16, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 2565, .adv_w = 288, .box_w = 11, .box_h = 18, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 2590, .adv_w = 288, .box_w = 14, .box_h = 16, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 2618, .adv_w = 288, .box_w = 14, .box_h = 16, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 2646, .adv_w = 288, .box_w = 16, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2678, .adv_w = 288, .box_w = 14, .box_h = 16, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 2706, .adv_w = 288, .box_w = 14, .box_h = 21, .ofs_x = 2, .ofs_y = -5},
    {.bitmap_index = 2743, .adv_w = 288, .box_w = 14, .box_h = 16, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 2771, .adv_w = 288, .box_w = 11, .box_h = 21, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 2800, .adv_w = 288, .box_w = 5, .box_h = 21, .ofs_x = 7, .ofs_y = 0},
    {.bitmap_index = 2814, .adv_w = 288, .box_w = 11, .box_h = 21, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 2843, .adv_w = 288, .box_w = 16, .box_h = 4, .ofs_x = 0, .ofs_y = 16}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 95, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};



/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LVGL_VERSION_MAJOR == 8
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
#endif

#if LVGL_VERSION_MAJOR >= 8
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = NULL,
    .kern_scale = 0,
    .cmap_num = 1,
    .bpp = 1,
    .kern_classes = 0,
    .bitmap_format = 0,
#if LVGL_VERSION_MAJOR == 8
    .cache = &cache
#endif
};



/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LVGL_VERSION_MAJOR >= 8
const lv_font_t pixel_operator_36 = {
#else
lv_font_t pixel_operator_36 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 29,          /*The maximum line height required by the font*/
    .base_line = 5,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -7,
    .underline_thickness = 2,
#endif
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = NULL,
#endif
    .user_data = NULL,
};



#endif /*#if PIXEL_OPERATOR_36*/

