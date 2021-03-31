
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

enum layer_names {
    _BASE,
    _SETUP,
    _MIDI,
    _GAME
};

/*
,---------------------------------------------,
|SETUP| |  7  |  8  |  9  |  /  |  =  | |bkspc|
|---------------------------------------------|
|  #  | |  4  |  5  |  6  |  *  |space| | del |
`---------------------------------------------|
        |  1  |  2  |  3  |  -  | {[  | | :;  |
        |-------------------------------------|
        |  0  |  .  |enter|  +  | }]  | | '"  |
        `-------------------------------------'
              |  ,  |  %  |  (  |  )  |
              `-----------------------'
*/
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Base */
    [_BASE] = LAYOUT(
        MO(_SETUP),  KC_P7, KC_P8,    KC_P9,   KC_PSLS, KC_EQL,  KC_BSPC,
        KC_HASH,     KC_P4, KC_P5,    KC_P6,   KC_PAST, KC_SPC,  KC_DEL,
                     KC_P1, KC_P2,    KC_P3,   KC_PMNS, KC_LBRC, KC_SCLN,
                     KC_P0, KC_PDOT,  KC_PENT, KC_PPLS, KC_RBRC, KC_QUOT,
                            KC_COMM, KC_PERC, KC_LPRN, KC_RPRN
    ),
/*
,---------------------------------------------,
|     | | BASE| MIDI| GAME|     |     | |     |
|---------------------------------------------|
|     | |     |     |     |     |     | |     |
`---------------------------------------------|
        |     |     |     |     |     | |     |
        |-------------------------------------|
        |     |     |     |     |RESET| |     |
        `-------------------------------------'
              |     |     |     |     |
              `-----------------------'
*/
    [_SETUP] = LAYOUT(
        _______,  TO(_BASE), TO(_MIDI), TO(_SETUP), _______, _______,  _______,
        _______,  _______,   _______,   _______,    _______, _______,  _______,
                  _______,   _______,   _______,    _______, _______,  _______,
                  _______,   _______,   _______,    _______, RESET,    _______,
                             _______, _______, _______, _______
    ),
    
/*
,---------------------------------------------,
|     | | BASE| MIDI| GAME|     |     | |     |
|---------------------------------------------|
|     | |     |     |     |     |     | |     |
`---------------------------------------------|
        |     |     |     |     |     | |     |
        |-------------------------------------|
        |     |     |     |     |RESET| |     |
        `-------------------------------------'
              |     |     |     |     |
              `-----------------------'
*/
    [_MIDI] = LAYOUT(
        _______,  TO(_BASE), TO(_MIDI), TO(_SETUP), _______, _______,  _______,
        _______,  _______,   _______,   _______,    _______, _______,  _______,
                  _______,   _______,   _______,    _______, _______,  _______,
                  _______,   _______,   _______,    _______, RESET,    _______,
                             _______, _______, _______, _______
    ),
/*
,---------------------------------------------,
|     | |  1  |  2  |  3  |  4  |  5  | | Esc |
|---------------------------------------------|
|  ~  | |  Q  |  W  |  E  |  R  |  T  | |Enter|
`---------------------------------------------|
        |  A  |  S  |  D  |  F  |  G  | |Space|
        |-------------------------------------|
        |  Z  |  X  |  C  |  V  |  B  | |  N  |
        `-------------------------------------'
              |  6  |  7  |  8  |  9  |
              `-----------------------'
*/
    [_GAME] = LAYOUT(
        _______,  KC_1, KC_2, KC_3, KC_4, KC_5,  KC_ESC,
        KC_GRV,   KC_Q, KC_W, KC_E, KC_R, KC_T,  KC_ENT,
                  KC_A, KC_S, KC_D, KC_F, KC_G,  KC_SPC,
                  KC_Z, KC_X, KC_C, KC_V, KC_B,  KC_N,
                        KC_6, KC_7, KC_8, KC_9
    )
};
