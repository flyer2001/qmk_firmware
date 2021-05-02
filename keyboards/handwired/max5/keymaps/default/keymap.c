/* Copyright 2021 DmNosachev
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _L1,
    _L2,
    _SETUP
};

// Defines the keycodes used by our macros in process_record_user
enum custom_keycodes {
    QMKBEST = SAFE_RANGE,
    QMKURL
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/*
,----------------------------------,
|  L2  |   A  |   B  |   C  | Space|
'----------------------------------'
*/
    [_L1] = LAYOUT(
        MO(_L2),    KC_A,    KC_B,    KC_D,    KC_SPC
    ),
/*
,----------------------------------,
|      |   ↑  |  Del |   1  | SETUP|
'----------------------------------'
*/
    [_L2] = LAYOUT(
        _______,    KC_UP,  KC_DEL,  KC_1,    TO(_SETUP)
    ),
/*
,----------------------------------,
|      |Macro1|Macro1| RESET|  L1  |
'----------------------------------'
*/
    [_SETUP] = LAYOUT(
        _______,    QMKURL,  QMKBEST, RESET,    TO(_L1)
    )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case QMKBEST:
            if (record->event.pressed) {
                // when keycode QMKBEST is pressed
                SEND_STRING("QMK is the best thing ever!");
            } else {
                // when keycode QMKBEST is released
            }
            break;
        case QMKURL:
            if (record->event.pressed) {
                // when keycode QMKURL is pressed
                SEND_STRING("https://qmk.fm/\n");
            } else {
                // when keycode QMKURL is released
            }
            break;
    }
    return true;
}
