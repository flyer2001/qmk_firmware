/*
Copyright 2019 DmNosachev

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

#define DEVICE_VER 0x0001

// Mouse
#define MOUSEKEY_DELAY          60
#define MOUSEKEY_INTERVAL       20
#define MOUSEKEY_MAX_SPEED      4
#define MOUSEKEY_TIME_TO_MAX    10
#define MOUSEKEY_WHEEL_MAX_SPEED 1
#define MOUSEKEY_WHEEL_DELTA 1
#define MOUSEKEY_WHEEL_TIME_TO_MAX 1

#define MATRIX_COL_PINS { B4, B3, B2, B1, B0, E7, C2, C1, C0, E1, E0, D7 }
#define MATRIX_ROW_PINS { F2, F3, F4, F5, F6, F7, F1 }
#define UNUSED_PINS

#define B6_AUDIO

#define SOLENOID_PIN C7

#define LED4_PIN D0
#define SCROLL_LOCK_LED_PIN D1
#define NUM_LOCK_LED_PIN D2
#define CAPS_LOCK_LED_PIN D3

#define AUDIO_CLICKY

#ifdef AUDIO_ENABLE
  #define STARTUP_SONG SONG(STARTUP_SOUND)
#endif
