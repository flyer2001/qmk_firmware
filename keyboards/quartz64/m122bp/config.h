/*
Copyright 2020 DmNosachev

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID    0xFEED
#define PRODUCT_ID   0x0000
#define DEVICE_VER   0x0001
#define MANUFACTURER IBM
#define PRODUCT      M122
/* key matrix size */
#define MATRIX_ROWS 8
#define MATRIX_COLS 20

#define MATRIX_ROW_PINS { B8, B9, C13, A0, A1, A2, A3, A13 }
//#define MATRIX_COL_PINS { B7, B6, B5, B4, B3, A15, A10, A9, A8, B15, B14, B13, A4, A5, A6, A7, B0, B1, B10, B11 }
#define MATRIX_COL_PINS { B11, B10, B1, B0, A7, A6, A5, A4, B13, B14, B15, A8, A9, A10, A15, B3, B4, B5, B6, B7 }
#define UNUSED_PINS

#define DIODE_DIRECTION COL2ROW

#define MATRIX_HAS_GHOST

#define DEBOUNCE 5

