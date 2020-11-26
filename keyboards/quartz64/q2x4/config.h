/*
Copyright 2019 Dmitry Nosachev

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
#define VENDOR_ID    0x515A // "QZ"
#define PRODUCT_ID   0x3234 // "24"
#define DEVICE_VER   0x0001
#define MANUFACTURER Quartz64
#define PRODUCT      q2x4

/* key matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 2

/*
 * Keyboard Matrix Assignments
 *
 * Change this to how you wired your keyboard
 * COLS: AVR pins used for columns, left to right
 * ROWS: AVR pins used for rows, top to bottom
 * DIODE_DIRECTION: COL2ROW = COL = Anode (+), ROW = Cathode (-, marked on diode)
 *                  ROW2COL = ROW = Anode (+), COL = Cathode (-, marked on diode)
 *
*/
#define MATRIX_ROW_PINS { D2, D7, E6, B4 }
#define MATRIX_COL_PINS { C6, D4}
#define UNUSED_PINS {D3, B5, F4, F5, B3, B2}

/* QMK DFU pins. See https://docs.qmk.fm/#/flashing */
#define QMK_ESC_OUTPUT C6 // usually COL
#define QMK_ESC_INPUT D2 // usually ROW
#define QMK_LED E6

/* LED pins */
#define LED1_PIN D0
#define LED2_PIN D1
#define LED3_PIN B6

/* COL2ROW, ROW2COL*/
#define DIODE_DIRECTION COL2ROW

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCING_DELAY 5

/* Bootmagic Lite key configuration */
#define BOOTMAGIC_LITE_ROW 0
#define BOOTMAGIC_LITE_COLUMN 0
