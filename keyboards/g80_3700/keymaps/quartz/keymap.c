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

// Defines the keycodes used by our macros in process_record_user
enum custom_keycodes {
    MC1 = SAFE_RANGE,
    MC2,
    MC3,
    MC4,
    MC5
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/*
,-----------------------.
| FN  |  =  | Spc | Bksp|
|-----------------------|
|NumLk|  /  |  *  |  -  |
|-----------------------|
|  7  |  8  |  9  |     |
|-----------------|  +  |
|  4  |  5  |  6  |     |
|-----------------------|
|  1  |  2  |  3  |     |
|-----------------|Enter|
|     0     | Del |     |
'-----------------------'
*/
    
    [_BASE] = LAYOUT(
        TO(_FN),   MC1,      MC2,      MC3,
        KC_NLCK,   KC_PSLS,  MC5,     MC4,
        KC_P7,     KC_P8,    KC_P9,    KC_PPLS,
        KC_P4,     KC_P5,    KC_P6,    KC_NO,
        KC_P1,     KC_P2,    KC_P3,    KC_PENT,
        KC_P0,               KC_PDOT,  KC_NO
    ),
/*
,-----------------------.
|BASE |  M1 |  M2 | M3  |
|-----------------------|
|reset|vol+ | M5  | M4  |
|-----------------------|
| LMB | MU  | RMB |     |
|-----------------|SCR+ |
| ML  | MDN | MR  |     |
|-----------------------|
|prev |stop |next |     |
|-----------------|SCR- |
|    play   |mycmp|     |
'-----------------------'
*/
    [_FN] = LAYOUT(
        TO(_BASE), MC1,      MC2,      MC3,
        RESET,     KC_VOLU,  MC5,      MC4,
        KC_BTN1,   KC_MS_U,  KC_BTN2,  KC_WH_U,
        KC_MS_L,   KC_MS_D,  KC_MS_R,  KC_NO,
        KC_MPRV,   KC_MPRV,  KC_MNXT,  KC_WH_D,
        KC_MPLY,             KC_MYCM,  KC_NO
    )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case MC1:
            if (record->event.pressed) {
                SEND_STRING("net use z: ");
                SEND_STRING(SS_TAP(X_BSLS));
                SEND_STRING(SS_TAP(X_BSLS));
                SEND_STRING("192.168.0.148");
                SEND_STRING(SS_TAP(X_BSLS));
                SEND_STRING("nosachev"SS_TAP(X_ENTER));
            }
            break;
        case MC2:
            if (record->event.pressed) {
                SEND_STRING("nosachev"SS_TAP(X_ENTER));
            }
            break;
        case MC3:
            if (record->event.pressed) {
                SEND_STRING("Q123qQ123q"SS_TAP(X_ENTER));
            }
            break;
        case MC4:
            if (record->event.pressed) {
                SEND_STRING("wpeutil shutdown"SS_TAP(X_ENTER));
            }
            break;
        case MC5:
            if (record->event.pressed) {
                SEND_STRING("z:"SS_TAP(X_BSLS)"burnit"SS_TAP(X_BSLS)"2935"SS_TAP(X_BSLS));
            }
            break;
    }
    return true;
}


layer_state_t layer_state_set_user(layer_state_t state) {
    switch (get_highest_layer(state)) {
    case _FN:
        writePinHigh(LED_PIN);
        break;
    default: //  for any other layers, or the default layer
        writePinLow(LED_PIN);
        break;
    }
  return state;
}
