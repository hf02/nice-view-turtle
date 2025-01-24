/*
background_turtle.c is under the OFL-1.1 license:


Copyright 2013 Google LLC

This Font Software is licensed under the SIL Open Font License, Version 1.1.
This license is copied below, and is also available with a FAQ at:
https://scripts.sil.org/OFL


-----------------------------------------------------------
SIL OPEN FONT LICENSE Version 1.1 - 26 February 2007
-----------------------------------------------------------

PREAMBLE
The goals of the Open Font License (OFL) are to stimulate worldwide
development of collaborative font projects, to support the font creation
efforts of academic and linguistic communities, and to provide a free and
open framework in which fonts may be shared and improved in partnership
with others.

The OFL allows the licensed fonts to be used, studied, modified and
redistributed freely as long as they are not sold by themselves. The
fonts, including any derivative works, can be bundled, embedded,
redistributed and/or sold with any software provided that any reserved
names are not used by derivative works. The fonts and derivatives,
however, cannot be released under any other type of license. The
requirement for fonts to remain under this license does not apply
to any document created using the fonts or their derivatives.

DEFINITIONS
"Font Software" refers to the set of files released by the Copyright
Holder(s) under this license and clearly marked as such. This may
include source files, build scripts and documentation.

"Reserved Font Name" refers to any names specified as such after the
copyright statement(s).

"Original Version" refers to the collection of Font Software components as
distributed by the Copyright Holder(s).

"Modified Version" refers to any derivative made by adding to, deleting,
or substituting -- in part or in whole -- any of the components of the
Original Version, by changing formats or by porting the Font Software to a
new environment.

"Author" refers to any designer, engineer, programmer, technical
writer or other person who contributed to the Font Software.

PERMISSION & CONDITIONS
Permission is hereby granted, free of charge, to any person obtaining
a copy of the Font Software, to use, study, copy, merge, embed, modify,
redistribute, and sell modified and unmodified copies of the Font
Software, subject to the following conditions:

1) Neither the Font Software nor any of its individual components,
in Original or Modified Versions, may be sold by itself.

2) Original or Modified Versions of the Font Software may be bundled,
redistributed and/or sold with any software, provided that each copy
contains the above copyright notice and this license. These can be
included either as stand-alone text files, human-readable headers or
in the appropriate machine-readable metadata fields within text or
binary files as long as those fields can be easily viewed by the user.

3) No Modified Version of the Font Software may use the Reserved Font
Name(s) unless explicit written permission is granted by the corresponding
Copyright Holder. This restriction only applies to the primary font name as
presented to the users.

4) The name(s) of the Copyright Holder(s) or the Author(s) of the Font
Software shall not be used to promote, endorse or advertise any
Modified Version, except to acknowledge the contribution(s) of the
Copyright Holder(s) and the Author(s) or with their explicit written
permission.

5) The Font Software, modified or unmodified, in part or in whole,
must be distributed entirely under this license, and must not be
distributed under any other license. The requirement for fonts to
remain under this license does not apply to any document created
using the Font Software.

TERMINATION
This license becomes null and void if any of the above conditions are
not met.

DISCLAIMER
THE FONT SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO ANY WARRANTIES OF
MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT
OF COPYRIGHT, PATENT, TRADEMARK, OR OTHER RIGHT. IN NO EVENT SHALL THE
COPYRIGHT HOLDER BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
INCLUDING ANY GENERAL, SPECIAL, INDIRECT, INCIDENTAL, OR CONSEQUENTIAL
DAMAGES, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
FROM, OUT OF THE USE OR INABILITY TO USE THE FONT SOFTWARE OR FROM
OTHER DEALINGS IN THE FONT SOFTWARE.

*/

#include "../../include/images/background_turtle.h"

#include <lvgl.h>

#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_BACKGROUND_TURTLE
#define LV_ATTRIBUTE_IMG_BACKGROUND_TURTLE
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_BACKGROUND_TURTLE uint8_t background_turtle_map[] = {
  0xfe, 0xfe, 0xfe, 0xff, 	/*Color of index 0*/
  0x00, 0x00, 0x00, 0xff, 	/*Color of index 1*/

  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x0f, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x3f, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0xf0, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x01, 0xc0, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x03, 0x00, 0x01, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x06, 0x00, 0x00, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x03, 0xee, 0x00, 0x30, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x07, 0xfc, 0x00, 0x78, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x0e, 0x18, 0x02, 0x78, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x0c, 0x00, 0x06, 0x30, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x0c, 0x00, 0x0e, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x0c, 0x00, 0x0c, 0x00, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x0c, 0x00, 0x0e, 0x00, 0x3e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x0c, 0x00, 0x06, 0x00, 0x37, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x0e, 0x00, 0x02, 0x30, 0x33, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x07, 0xe0, 0x00, 0x78, 0x30, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x03, 0xe0, 0x00, 0x78, 0x38, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x60, 0x00, 0x30, 0x7e, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x60, 0x00, 0x00, 0x6f, 0x98, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x60, 0x00, 0x00, 0xc3, 0x9c, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x60, 0x00, 0x01, 0xc3, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x60, 0x00, 0x03, 0x87, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x60, 0x00, 0x07, 0x06, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x60, 0x00, 0x3e, 0x06, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x60, 0x01, 0xf8, 0x06, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x0f, 0xe0, 0x07, 0xc0, 0x04, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x3f, 0xc0, 0x1f, 0x00, 0x0c, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x70, 0x00, 0x3b, 0x00, 0x0c, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x60, 0x00, 0x33, 0x00, 0x0c, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x60, 0x00, 0x63, 0x00, 0xfc, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x60, 0x00, 0x63, 0x3f, 0xfc, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x60, 0x00, 0x63, 0xff, 0x0c, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x60, 0x00, 0x63, 0xe0, 0x06, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x30, 0x00, 0x63, 0x00, 0x06, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x38, 0x30, 0x63, 0x00, 0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x1f, 0xf0, 0x63, 0x00, 0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x0f, 0x98, 0x63, 0x00, 0x03, 0x86, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x18, 0x31, 0x80, 0x01, 0x86, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x0c, 0x31, 0x80, 0x01, 0xe6, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x0c, 0x31, 0x80, 0x07, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x06, 0x18, 0xc0, 0x0f, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x07, 0x18, 0xe0, 0x1c, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x0e, 0x0c, 0x60, 0x78, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x0c, 0x0c, 0x30, 0xe0, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x18, 0x06, 0x3b, 0xc0, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x18, 0x03, 0x1f, 0x81, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x18, 0x01, 0xce, 0x03, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x18, 0x00, 0xe7, 0x8f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x0c, 0x0f, 0x7f, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x0f, 0xff, 0x9f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x03, 0xe0, 0xe3, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x71, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x39, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x1f, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

const lv_img_dsc_t background_turtle = {
  .header.cf = LV_IMG_CF_INDEXED_1BIT,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 84,
  .header.h = 68,
  .data_size = 756,
  .data = background_turtle_map,
};
