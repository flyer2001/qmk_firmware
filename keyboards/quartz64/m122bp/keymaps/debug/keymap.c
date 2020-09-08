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

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* 
 ,-----------------------------------------------------------------------------------------------------------------------------.
 |                 |Vol+ |Vol- |Mute |Prev |Play |Next |Stop |     |     |PrnSc|ScrLk|Pause|                                   |
 |-----------------------------------------------------------------------------------------------------------------------------|
 |                 |  F1 |  F2 |  F3 |  F4 |  F5 |  F6 |  F7 |  F8 |  F9 | F10 | F11 | F12 |                                   |
 |-----------------------------------------------------------------------------------------------------------------------------|
 |-----------------------------------------------------------------------------------------------------------------------------|
 |Copy|Pste|     ` |  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|    Bspc|    Ins|  Home|  PgUp|    NLCK| PSLS| PAST| PMNS| |
 |-----------------------------------------------------------------------------------------------------------------------------|
 |Cut |Caps|    Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|      |    Del|   End|  PgDn|     P7|   P8|   P9| |PPLS| |
 |--------------------------------------------------------------------       --------------------------------------------------|
 |BT< |BT>+|    FN0  |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '| \ |Enter |	      |   Up |            P4|   P5|   P6| |  = | |
 |---------------------------------------------------------------------------------------------------------------------------- |
 |url1|Menu|    Shift|  \|  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /| *   Shift|   Left| Down | Right|     P1|   P2|   P3| |PENT| |
 |----------------------------------------------------------------------------------------------------------------------|    | |
 |Esc |GUI |    Ctrl|    |Alt |            Space          |Alt |     |Ctrl  |       |  FN0 |           | *    P0| PDOT| |  * | |
 `-----------------------------------------------------------------------------------------------------------------------------'
*/ 
  [0] = LAYOUT(
                  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO,    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO
  )
};

void keyboard_post_init_user(void) {
  // Customise these values to desired behaviour
  debug_enable=true;
  debug_matrix=true;
  //debug_keyboard=true;
  //debug_mouse=true;
}
