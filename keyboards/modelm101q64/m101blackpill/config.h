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

#undef MATRIX_ROW_PINS
#undef MATRIX_COL_PINS

#define MATRIX_ROW_PINS { B8, B9, C13, A0, A1, A2, A3, A4 }
#define MATRIX_COL_PINS { B7, B6, B5, B4, B3, A15, A10, A9, A8, B15, B14, B13, B0, B11, B10, B1 }

#define NUM_LOCK_LED_PIN A7
#define CAPS_LOCK_LED_PIN A5
#define SCROLL_LOCK_LED_PIN A6