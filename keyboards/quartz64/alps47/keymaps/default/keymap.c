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
    _LOWER,
    _RAISE
};

// Defines the keycodes used by our macros in process_record_user
enum custom_keycodes {
    QMKBEST = SAFE_RANGE,
    QMKURL
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/*
Space Cadet Shift: Shift when held, ( or ) when tapped
,-----------------------------------------------------------------------------.
| ~`  |  Q  |  W  |  E  |  R  |  T  |  Y  |  U  |  I  |  O  |  P  |  [  |  ]  |
|-----------------------------------------------------------------------------|
|Tb LW|  A  |  S  |  D  |  F  |  G  |  H  |  J  |  K  |  L  |  ;: | '"  | \ RS|
|-----------------------------------------------------------------------------|
|Shift|  Z  |  X  |  C  |  V  |  B  |  N  |  M  |  <  |  >  |  ?/ |   Shift   |
|-----------------------------------------------------------------------------|
| Ctrl   |  Alt   |Bkspc|     Space      |   Enter    |left |down | up  |right|
'-----------------------------------------------------------------------------'
*/
    
    [_BASE] = LAYOUT(
        KC_GRV,             KC_Q,   KC_W,   KC_E,      KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC,
        LT(_LOWER, KC_TAB), KC_A,   KC_S,   KC_D,      KC_F,   KC_G,   KC_H,   KC_J,   KC_K,    KC_L,    KC_SCLN, KC_QUOT, LT(_RAISE, KC_BSLS),
        KC_LSPO,            KC_Z,   KC_X,   KC_C,      KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM, KC_DOT,  KC_SLSH, KC_RSPC,
        KC_LCTL,               KC_LALT,     KC_BSPC,         KC_SPACE,             KC_ENTER,    KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT
    ),
/*
,-----------------------------------------------------------------------------.
<<<<<<< HEAD
<<<<<<< HEAD
| Esc | F1  | F2  | F3  | F4  |     |     |  7  |  8  |  9  |  /  | -_  | +=  |
|-----------------------------------------------------------------------------|
|Tb LW| F5  | F6  | F7  | F8  |     |     |  4  |  5  |  6  |  *  |     | \ RS|
|-----------------------------------------------------------------------------|
|Shift| F9  | F10 | F11 | F12 |     |     |  1  |  2  |  3  |  0  |   Shift   |
=======
| Esc | F1  | F2  | F3  | F4  |     |     |  7  |  8  |  9  |  0  | -_  | +=  |
=======
| Esc | F1  | F2  | F3  | F4  |     |     |  7  |  8  |  9  |  /  | -_  | +=  |
>>>>>>> 6cb422830... alps47: layout
|-----------------------------------------------------------------------------|
|Tb LW| F5  | F6  | F7  | F8  |     |     |  4  |  5  |  6  |  *  |     | \ RS|
|-----------------------------------------------------------------------------|
<<<<<<< HEAD
|Shift| F9  | F10 | F11 | F12 |     |     |  1  |  2  |  3  |  *  |   Shift   |
>>>>>>> 839f44967... alps47
=======
|Shift| F9  | F10 | F11 | F12 |     |     |  1  |  2  |  3  |  0  |   Shift   |
>>>>>>> 6cb422830... alps47: layout
|-----------------------------------------------------------------------------|
| Ctrl   |  GUI   | Del |     Space      |   Enter    |left |down | up  |right|
'-----------------------------------------------------------------------------'
*/
    [_LOWER] = LAYOUT(
<<<<<<< HEAD
<<<<<<< HEAD
        KC_ESC,  KC_F1,  KC_F2,  KC_F3,  KC_F4,   _______,   _______,   KC_7,   KC_8,    KC_9,    KC_PSLS, KC_MINS, KC_EQL,
        _______, KC_F5,  KC_F6,  KC_F7,  KC_F8,   _______,   _______,   KC_4,   KC_5,    KC_6,    KC_PAST, KC_QUOT, _______,
        _______, KC_F9,  KC_F10, KC_F11, KC_F12,  _______,   _______,   KC_1,   KC_2,    KC_3,    KC_0,    _______,
=======
        KC_ESC,  KC_F1,  KC_F2,  KC_F3,  KC_F4,   _______,   _______,   KC_7,   KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,
        _______, KC_F5,  KC_F6,  KC_F7,  KC_F8,   _______,   _______,   KC_5,   KC_6,    KC_7,    KC_PSLS, KC_QUOT, _______,
        _______, KC_F9,  KC_F10, KC_F11, KC_F12,  _______,   _______,   KC_1,   KC_2,    KC_3,    KC_PAST, _______,
>>>>>>> 839f44967... alps47
=======
        KC_ESC,  KC_F1,  KC_F2,  KC_F3,  KC_F4,   _______,   _______,   KC_7,   KC_8,    KC_9,    KC_PSLS, KC_MINS, KC_EQL,
        _______, KC_F5,  KC_F6,  KC_F7,  KC_F8,   _______,   _______,   KC_4,   KC_5,    KC_6,    KC_PAST, KC_QUOT, _______,
        _______, KC_F9,  KC_F10, KC_F11, KC_F12,  _______,   _______,   KC_1,   KC_2,    KC_3,    KC_0,    _______,
        _______,    KC_LGUI,     KC_DEL,               _______,            _______,      _______, _______, _______, _______
    ),
/*
,-----------------------------------------------------------------------------.
|     |     | MbL | MUp | MbR |     |mute |vol- |vol+ |     |NumLk|Caps |ScLk |
|-----------------------------------------------------------------------------|
|Tb LW| MS+ | ML  | MDn | MR  |     | <<  | >   |  >> |     |     |     | \ RS|
|-----------------------------------------------------------------------------|
|Shift| MS- |     |     |     |     |     |stop |     |     |RESET|   Shift   |
|-----------------------------------------------------------------------------|
| Ctrl   |  Alt   | Del |     Space      |   Enter    |left |down | up  |right|
'-----------------------------------------------------------------------------'
*/
    [_RAISE] = LAYOUT(
        _______, _______,    KC_BTN1, KC_MS_U, KC_BTN2,  _______,  KC_MUTE,  KC_VOLD,  KC_VOLU,  _______, KC_NLCK, KC_CAPS, KC_SLCK,
        _______, KC_WH_U,    KC_MS_L, KC_MS_D, KC_MS_R,  _______,  KC_MPRV,  KC_MPLY,  KC_MNXT,  _______, _______, _______, _______,
        _______, KC_WH_D,    _______, _______, _______,  _______,  _______,  KC_MSTP,  _______,  _______, RESET,   _______,
        _______,    _______,     _______,                _______,            _______,            _______, _______, _______, _______
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
