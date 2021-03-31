/*
Copyright 2021 DmNosachev

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
#define VENDOR_ID    0x525A /* RZ */
#define PRODUCT_ID   0x4F57 /* OW */
#define DEVICE_VER   0x0001
#define MANUFACTURER RAZER
#define PRODUCT      ORBWEAVER

/* key matrix size */
#define MATRIX_ROWS 8
#define MATRIX_COLS 4

#define MATRIX_ROW_PINS { B1, B3, B2, B6, D1, D0, D4, C6 }
/*                         0   1   2   3   4   5   6   7 */
#define MATRIX_COL_PINS {  F4, F5, F6, F7 }


#define UNUSED_PINS

/* COL2ROW, ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

#define LED1_PIN D7
#define LED2_PIN E6
#define LED3_PIN B4

/* disable these deprecated features by default */
#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION

/* Bootmagic Lite key configuration */
#define BOOTMAGIC_LITE_ROW 0
#define BOOTMAGIC_LITE_COLUMN 0
