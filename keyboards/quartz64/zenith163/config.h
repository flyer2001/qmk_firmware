/*
Copyright 2015 Jun Wako <wakojun@gmail.com>

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
#define VENDOR_ID 0xFEED
#define PRODUCT_ID 0x0000
#define MANUFACTURER Zenith
#define PRODUCT 163-73
#define DESCRIPTION Keyboard

#define DEVICE_VER 0x0002

#define USBSTR_MANUFACTURER    'T', '\x00', 'M', '\x00', 'K', '\x00', ' ', '\x00', '\xc6', '\x00'
#define USBSTR_PRODUCT         'C', '\x00', 'h', '\x00', 'i', '\x00', 'b', '\x00', 'i', '\x00', 'O', '\x00', 'S', '\x00', ' ', '\x00', 'Q', '\x00', 'M', '\x00', 'K', '\x00'


/* key matrix size */
#define MATRIX_ROWS 8
#define MATRIX_COLS 14

#define DIODE_DIRECTION COL2ROW

// #define MATRIX_HAS_GHOST

#define DEBOUNCE 5

#define MATRIX_ROW_PINS { B8, B9, C13, A0, A1, B0, A3, A4 }
#define MATRIX_COL_PINS { B7, B6, B5, B4, B3, A15, A10, A9, A8, B15, B14, B13, A13, B11 }

#define NUM_LOCK_LED_PIN A7
#define CAPS_LOCK_LED_PIN A6
#define SCROLL_LOCK_LED_PIN A5

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT

/* disable these deprecated features by default */
#ifndef LINK_TIME_OPTIMIZATION_ENABLE
  #define NO_ACTION_MACRO
  #define NO_ACTION_FUNCTION
#endif