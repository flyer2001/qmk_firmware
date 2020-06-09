/*
Copyright 2012 Jun Wako <wakojun@gmail.com>

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
#define PRODUCT_ID      0x6060
#define DEVICE_VER      0x0002
#define VENDOR_ID       0xFEED
#define MANUFACTURER    QMK
#define PRODUCT         Kinesis Advantage
#define DESCRIPTION     handwired Kinesis

// Mouse
#define MOUSEKEY_DELAY          60
#define MOUSEKEY_INTERVAL       20
#define MOUSEKEY_MAX_SPEED      4
#define MOUSEKEY_TIME_TO_MAX    10
#define MOUSEKEY_WHEEL_MAX_SPEED 1
#define MOUSEKEY_WHEEL_DELTA 1
#define MOUSEKEY_WHEEL_TIME_TO_MAX 1

/* key matrix size */
#define MATRIX_COLS 12 
#define MATRIX_ROWS 7

#define MATRIX_COL_PINS { B4, B3, B2, B1, B0, E7, C2, C1, C0, E1, E0, D7 }
#define MATRIX_ROW_PINS { F2, F3, F4, F5, F6, F7, F1 }
#define UNUSED_PINS

#define B6_AUDIO

#define SOLENOID_PIN C7

#define LED4_PIN D0
#define SCROLL_LOCK_LED_PIN D1
#define NUM_LOCK_LED_PIN D2
#define CAPS_LOCK_LED_PIN D3

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

#define IS_COMMAND() (get_mods() == MOD_MASK_SHIFT)

#define AUDIO_CLICKY

#ifdef AUDIO_ENABLE
  #define STARTUP_SONG SONG(STARTUP_SOUND)
#endif

#define TAP_CODE_DELAY 150

//#define FORCE_NKRO


/* disable these deprecated features by default */
#ifndef LINK_TIME_OPTIMIZATION_ENABLE
  #define NO_ACTION_MACRO
  #define NO_ACTION_FUNCTION
#endif

