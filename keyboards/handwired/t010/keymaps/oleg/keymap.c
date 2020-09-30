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

enum custom_keycodes { VRSN, MC1 };

enum unicode_names { USCT, ULSB, URSB, USCO, UAPO, UCOM, UDOT, USLS, ULCB, URCB, UCLN, UQOT, ULTH, UGTH, UQUE, UGRV, UTLD, UAT, UHSH, UDLR, UPCT, UCFX, UAMP, UAST };

const uint32_t PROGMEM unicode_map[] = {
    [USCT] = 0x00A7,  // §
    [ULSB] = 0x005B,  // [
    [URSB] = 0x005D,  // ]
    [USCO] = 0x003B,  // ;
    [UAPO] = 0x0027,  // '
    [UCOM] = 0x002C,  // ,
    [UDOT] = 0x002E,  // .
    [USLS] = 0x002F,  // slash
    [ULCB] = 0x007B,  // {
    [URCB] = 0x007D,  // }
    [UCLN] = 0x003A,  // :
    [UQOT] = 0x0022,  // "
    [ULTH] = 0x003C,  // <
    [UGTH] = 0x003E,  // >
    [UQUE] = 0x003F,  // ?
    [UGRV] = 0x0060,  // `
    [UTLD] = 0x007E,  // ~
    [UAT]  = 0x0040,  // at
    [UHSH] = 0x0023,  // hash
    [UDLR] = 0x0024,  // dollar
    [UPCT] = 0x0025,  // percent
    [UCFX] = 0x005E,  // ^
    [UAMP] = 0x0026,  // &
    [UAST] = 0x002A,  // asterisk
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
    ,---------------------------------------------------------------------------------------------------------------------.
    | F1  |  F2 |  F3 |  F4 |  F5 |  F6 |  F7 |  F8 |  F9 |  F10|  F11|  F12| Win |PrnSc| Esc  |  |NumLk|  /  |  *  |  +  |
    |---------------------------------------------------------------------------------------------------------------------|
    |  \  |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  0  |  -  |  =  |  ~  |Delete|  |  7  |  8  |  9  |  -  |
    |---------------------------------------------------------------------------------------------------------------------|
    |  Tab  |  Q  |  W  |  E  |  R  |  T  |  Y  |  U  |  I  |  O  |  P  |  [  |  ]  |  Backsp  |  |  4  |  5  |  6  |Bkspc|
    |---------------------------------------------------------------------------------------------------------------------|
    |  Caps  |  A  |  S  |  D  |  F  |  G  |  H  |  J  |  K  |  L  |  ;: |  '" |    Enter      |  |  1  |  2  |  3  |     |
    |---------------------------------------------------------------------------------------------------------------|     |
    |   Shift   |  Z  |  X  |  C  |  V  |  B  |  N  |  M  |  ,  |  .  |  /? |    Shift   | Fn  |  |     0     |  .  |enter|
    |---------------------------------------------------------------------------------------------------------------------|
    |  Ctrl |                                Space                                     |  Alt  |                          |
    `---------------------------------------------------------------------------------------------------------------------'
    */

    [0] = LAYOUT(KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_LGUI, KC_PSCR, KC_ESC, KC_NLCK, KC_PSLS, KC_PAST, KC_PPLS, KC_BSLS, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_GRV, KC_DEL, KC_P7, KC_P8, KC_P9, KC_PMNS, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSPC, KC_P4, KC_P5, KC_P6, KC_BSPC, KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT, KC_P1, KC_P2, KC_P3, KC_PENT, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, MO(1), KC_P0, KC_PDOT, KC_LCTRL, KC_SPC, KC_LALT),
    /*
    ,---------------------------------------------------------------------------------------------------------------------.
    |sleep|     |     |     |     |     |     |     |     |     |     |     |     |     |      |  |     |     |     |     |
    |---------------------------------------------------------------------------------------------------------------------|
    |     | Vol-| Vol+| Mute| prev| stop| next|     |     |     |     |     |     |  §  |  Ins |  | Home|  Up | PgUp|     |
    |---------------------------------------------------------------------------------------------------------------------|
    |       | mb1 | m↑  | mb2 | mb3 |     |     |     |     |ScLk |Pause| Up  |     |          |  | Left| App |Right|     |
    |---------------------------------------------------------------------------------------------------------------------|
    |        | m←  | m↓  | m→  | mb5 |     |     |     |Home |PgUp |Left |Right|               |  | End | Down| PgDn|     |
    |---------------------------------------------------------------------------------------------------------------|     |
    |           |     |     | mb4 |     |     |     |     | End |PgDn |Down |            | Fn  |  |   Ins     | Del |     |
    |---------------------------------------------------------------------------------------------------------------------|
    |       |                                                                          |       |                          |
    `---------------------------------------------------------------------------------------------------------------------'
    */
    [1] = LAYOUT(KC_SLEP, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_VOLD, KC_VOLU, KC_MUTE, KC_MPRV, KC_MSTP, KC_MNXT, _______, _______, _______, _______, _______, _______, X(USCT), KC_INS, KC_HOME, KC_UP, KC_PGUP, _______, _______, KC_BTN1, KC_MS_U, KC_BTN2, KC_BTN3, _______, _______, _______, _______, KC_SLCK, KC_PAUS, KC_UP, _______, _______, KC_LEFT, KC_APP, KC_RIGHT, _______, _______, KC_MS_L, KC_MS_D, KC_MS_R, KC_BTN5, _______, _______, _______, KC_HOME, KC_PGUP, KC_LEFT, KC_RIGHT, _______, KC_END, KC_DOWN, KC_PGDN, _______, _______, _______, _______, KC_BTN4, _______, _______, _______, _______, KC_END, KC_PGDN, KC_DOWN, _______, _______, KC_INS, KC_DEL, _______, _______, _______)};
