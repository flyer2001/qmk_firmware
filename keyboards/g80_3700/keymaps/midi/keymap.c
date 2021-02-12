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

enum layer_names {
  _L1,
  _MENU
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_L1] = LAYOUT(
        MO(_MENU), MI_OCTD,  MI_OCTU,  MI_SUS,
        MI_C_1,    MI_F_1,   MI_B_1,   MI_E_2,
        MI_D_1,    MI_G_1,   MI_C_2,   MI_TRNSU,
        MI_E_1,    MI_A_1,   MI_D_2,    KC_NO,
        MI_A_2,    MI_D_3,   MI_G_3,    MI_TRNSD,
        MI_C_4,               MI_E_4,  KC_NO
    ),
    [_MENU] = LAYOUT(
        _______, _______,  _______,  _______,
        RESET,   _______,  _______,  _______,
        _______, _______,  _______,  _______,
        _______, _______,  _______,  _______,
        _______, _______,  _______,  _______,
        _______,           _______,  _______
        
    )
};


layer_state_t layer_state_set_user(layer_state_t state) {
    switch (get_highest_layer(state)) {
    case _MENU:
        writePinHigh(LED_PIN);
        break;
    default: //  for any other layers, or the default layer
        writePinLow(LED_PIN);
        break;
    }
  return state;
}
