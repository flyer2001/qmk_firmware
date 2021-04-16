
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
    _MIDI0,
    _MIDI1,
    _MIDI2,
    _SETUP
};

/*
template
,---------------------------------------------,
|SETUP| |     |     |     |     |     | |     |
|-----| |-------------------------------------|
|MIDI0| |     |     |     |     |     | |     |
|------ |-------------------------------------'
|MIDI1| |     |     |     |     |     |
|-----| |-----------------------------|
|MIDI2| |     |     |     |     |     |
`-------------------------------------'
              |     |     |     |     |
              `-----------------------'
*/

/*
,---------------------------------------------,
|SETUP| |bl_tg|bl_st|     |     |     | |     |
|-----| |-------------------------------------|
|MIDI0| |     |     |     |     |     | |     |
|------ |-------------------------------------'
|MIDI1| |     |     |     |     |     |
|-----| |-----------------------------|
|MIDI2| |     |     |     |     |RESET|
`-------------------------------------'
              |     |     |     |     |
              `-----------------------'
*/
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_SETUP] = LAYOUT(
        TO(_SETUP),  BL_TOGG,   BL_STEP,   _______,  _______, _______,  _______,
        TO(_MIDI0),  _______,   _______,   _______,  _______, _______,  _______,
        TO(_MIDI1),  _______,   _______,   _______,  _______, _______,
        TO(_MIDI2),  _______,   _______,   _______,  _______, RESET,
                             _______, _______, _______, _______
    ),
/*
,---------------------------------------------,
|SETUP| |     |     |     |     |     | |     |
|-----| |-------------------------------------|
|MIDI0| |     |     |     |     |     | |     |
|------ |-------------------------------------'
|MIDI1| |     |     |     |     |     |
|-----| |-----------------------------|
|MIDI2| |     |     |     |     |RESET|
`-------------------------------------'
              |     |     |     |     |
              `-----------------------'
*/
    [_MIDI0] = LAYOUT(
            _______,  MI_Ds_1, MI_E_1,  MI_F_1, MI_Fs_1, MI_G_1,  _______,
            _______,  MI_As,   MI_B,    MI_C_1, MI_Cs_1, MI_D_1,  _______,
            _______,  MI_F,    MI_Fs,   MI_G,   MI_Gs,   MI_A,
            _______,  MI_C,    MI_Cs,   MI_D,   MI_Ds,   MI_E,
                                 _______, _______, _______, _______
        )
};

layer_state_t layer_state_set_user(layer_state_t state) {
    switch (get_highest_layer(state)) {
    case _SETUP:
        writePinLow(LED1_PIN);
        break;
    default: //  for any other layers, or the default layer
        writePinHigh(LED1_PIN);
        break;
    }
  return state;
}