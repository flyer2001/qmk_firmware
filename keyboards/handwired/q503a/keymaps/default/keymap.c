/* Copyright 2020 DmNosachev
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
    _BASE,
    _FN
};

enum custom_keycodes {
    MC3Z = SAFE_RANGE
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/*
,---------------------------------------------------------------------------------------------------------------------------------,
|  << |  >> | |  ~` |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  0  |  _- | +=  |  |\ |  BS | | Esc |NumLk|     /     |
|---------------------------------------------------------------------------------------------------------------------------------|
| Play| Stop| |  Tab  |  Q  |  W  |  E  |  R  |  T  |  Y  |  U  |  I  |  O  |  P  | {[  | }]  |  Enter  | |  7  |  8  |  9  |PrnSc|
|----------------------------------------------------------------------------------------------         | |-----------------------|
| Vol-| Vol+| |   FN   |  A  |  S  |  D  |  F  |  G  |  H  |  J  |  K  |  L  |  :; |  "' |              | |  4  |  5  |  6  |  -  |
|-------------------------------------------------------------------------------------------------------' |-----------------------|
| Menu| Caps| |   Shift  |  Z  |  X  |  C  |  V  |  B  |  N  |  M  |  ,  |  .  | ?/  |        Shift     | |  1  |  2  |  3  |  +  |
|-------------------------------------------------------------------------------------------------------| |-----------------'     |
|PrnSc| Win | |  Alt  |       |                         Space                        |       | CapsLock | |     0     | Del |     |
`---------------------------------------------------------------------------------------------------------------------------------'
*/

    [_BASE] = LAYOUT(
    KC_F1, KC_F2,  KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_GRV, KC_BSLS, KC_BSPC,   KC_ESC, KC_NLCK, KC_PSLS,
    KC_F3, KC_F4,  KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC,     KC_ENT,                KC_P7,  KC_P8,   KC_P9,   KC_PSCR,
    KC_F5, KC_F6,  MO(FN), KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT,                                  KC_P4,  KC_P5,   KC_P6,   KC_PMNS,
    KC_F7, KC_F8,  KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT,                            KC_P1,  KC_P2,   KC_P3,   KC_PPLS,
    KC_F9, KC_F10, KC_LALT,                          KC_SPACE,                                  KC_CAPS,                                KC_P0,       KC_PDOT
    ),
/*
,---------------------------------------------------------------------------------------------------------,  ,-----,
|Reset|  |     |  |      |      |      |      |      |   |      |      |PrnSc |ScrLk |Pause | |     |NumLk|  |     |
|-------------------------------------------------------------------------------------------| |-----------|  |-----|-----------------,
|      |     |     |     |     |     |     |     |     |     |     |     |     |     |      | |     |     |  |     |     |     |     |
|-------------------------------------------------------------------------------------------| |-----------|  |-----------------------|
|       |     |     |     |     |     |     |     | Up  |     |Home |PgUp |     |           | |     |     |  |     |     |     |     |
|--------------------------------------------------------------------------------|          | `-----------'  |-----------------------|
|        |     |     |     |     |     |     |Left |Down |Right| End |PgDn |     |          | |           |  |     |     |     |     |
|--------------------------------------------------------------------------------`----------' |-----------|  |-----------------------|
|          |     |     |     |     |     |     |     |     |     |     |     |              | |     |     |  |     |     |     |     |
|-------------------------------------------------------------------------------------------| |-----------|  |-----------------------|
|     |     |     |     |             |             |    BackSpace    |       |       |     | |           |  |     |     |           |
`-------------------------------------------------------------------------------------------' `-----------'  '-----------------------'
                               |      |Delete|
                               `-------------'
*/
[_FN] = LAYOUT(
    RESET,    _______,   _______,  _______,  _______,  _______,  _______,     _______,  _______,  KC_PSCR,  KC_LSCR,  KC_PAUS,               _______, _______,  _______,
    _______,  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,   _______, _______,  _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, KC_UP, _______, KC_HOME, KC_PGUP, _______,    _______,            _______, _______,  _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, KC_LEFT, KC_DOWN, KC_RIGHT, KC_END, KC_PGDN, _______,                           _______,      _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,                      _______, _______,  _______, _______, _______, _______,
    _______, _______, _______,          _______,       _______,         _______,      KC_BSPC,     _______,   _______,                             _______,      _______, _______,    _______,
                                          _______, KC_DEL
    )

};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case MC3Z:
            if (record->event.pressed) {
                SEND_STRING("000");
            } else {
            }
            break;
    }
    return true;
}

layer_state_t layer_state_set_user(layer_state_t state) {
    /* Use LED0 and 4 (Kana and KB Lock as layer indicators) */
    switch (get_highest_layer(state)) {
    case _FN:
        writePinLow(LED_KANA_PIN);
        break;
    case _MUS:
        writePinLow(LED_KB_LOCK_PIN);
        break;
    case _LOCK:
        writePinLow(LED_KANA_PIN);
        writePinLow(LED_KB_LOCK_PIN);
        break;
    default: //  for any other layers, or the default layer
        writePinHigh(LED_KANA_PIN);
        writePinHigh(LED_KB_LOCK_PIN);
        break;
    }
  return state;
}
