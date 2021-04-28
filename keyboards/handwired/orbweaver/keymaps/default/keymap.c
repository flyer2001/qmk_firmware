
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

#define L1H writePinLow(LED1_PIN);
#define L2H writePinLow(LED2_PIN);
#define L3H writePinLow(LED3_PIN);
#define L1L writePinHigh(LED1_PIN);
#define L2L writePinHigh(LED2_PIN);
#define L3L writePinHigh(LED3_PIN);

enum layer_names {
    _SETUP,
    _MIDI0,
    _MIDI1,
    _MIDI2,
    _QWERTY
    
};

/*
template
              ,-----------------------,
              |     |     |     |     |
,-------------------------------------|
|SETUP| |     |     |     |     |     |     
|-----| |-------------------------------------,
|MIDI0| |     |     |     |     |     | |     |
|------ |-------------------------------------'
|MIDI1| |     |     |     |     |     |
|-----| |-----------------------------|-------,
|MIDI2| |     |     |     |     |     | |     |
`-------------------------------------'-------'
*/

/*
              ,-----------------------,
              |bl_tg|bl_st|     |     |
,-------------------------------------|
|SETUP| |     |     |     |     |     |
|-----| |-------------------------------------,
|MIDI0| |     |     |     |     |     | |     |
|------ |-------------------------------------'
|MIDI1| |     |     |     |     |     |
|-----| |-----------------------------|-------,
|MIDI2| |     |     |     |     |RESET| |     |
`-------------------------------------'-------'
*/
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_SETUP] = LAYOUT(
                                BL_TOGG,   BL_STEP,  TO(_QWERTY),  _______,
        TO(_SETUP),  _______,   _______,   _______,  _______,      _______,  
        TO(_MIDI0),  _______,   _______,   _______,  _______,      _______,  _______,
        TO(_MIDI1),  _______,   _______,   _______,  _______,      _______,
        TO(_MIDI2),  _______,   _______,   _______,  _______,      RESET,    _______
    ),
/*
              ,-----------------------,
              |     |     |     |     |
,-------------------------------------|
|SETUP| | Ds1 | E1  | F1  | Fs1 | G1  |
|-----| |-------------------------------------,
|MIDI0| | As  |  B  | C1  | Cs1 | D1  | |     |
|------ |-------------------------------------'
|MIDI1| | F   |  Fs |  G  |  Gs |  A  |
|-----| |-----------------------------|-------,
|MIDI2| | C   |  Cs |  D  |  Ds |  E  | |     |
`-------------------------------------'-------'
*/
    [_MIDI0] = LAYOUT(
                               _______, _______, _______,  _______,
            _______,  MI_Ds_1, MI_E_1,  MI_F_1,  MI_Fs_1,  MI_G_1,  
            _______,  MI_As,   MI_B,    MI_C_1,  MI_Cs_1,  MI_D_1,  _______,
            _______,  MI_F,    MI_Fs,   MI_G,    MI_Gs,    MI_A,
            _______,  MI_C,    MI_Cs,   MI_D,    MI_Ds,    MI_E,    _______              
        ),
    [_MIDI1] = LAYOUT(
                               _______, _______, _______,  _______,
            _______,  MI_Ds_1, MI_E_1,  MI_F_1,  MI_Fs_1,  MI_G_1,  
            _______,  MI_As,   MI_B,    MI_C_1,  MI_Cs_1,  MI_D_1,  _______,
            _______,  MI_F,    MI_Fs,   MI_G,    MI_Gs,    MI_A,
            _______,  MI_C,    MI_Cs,   MI_D,    MI_Ds,    MI_E,    _______              
        ),
    [_MIDI2] = LAYOUT(
                               _______, _______, _______,  _______,
            _______,  MI_Ds_1, MI_E_1,  MI_F_1,  MI_Fs_1,  MI_G_1,  
            _______,  MI_As,   MI_B,    MI_C_1,  MI_Cs_1,  MI_D_1,  _______,
            _______,  MI_F,    MI_Fs,   MI_G,    MI_Gs,    MI_A,
            _______,  MI_C,    MI_Cs,   MI_D,    MI_Ds,    MI_E,    _______              
        ),
/*
              ,-----------------------,
              |     |     |     |     |
,-------------------------------------|
|SETUP| |  1  |  2  |  3  |  4  |  5  |
|-----| |-------------------------------------,
|MIDI0| |  Q  |  W  |  E  |  R  |  T  | |     |
|------ |-------------------------------------'
|MIDI1| |  A  |  S  |  D  |  F  |  G  |
|-----| |-----------------------------|-------,
|MIDI2| |  Z  |  X  |  C  |  V  |  B  | |     |
`-------------------------------------'-------'
*/
    [_QWERTY] = LAYOUT(
                               _______, _______, _______,  _______,
            _______,  KC_1,    KC_2,    KC_3,    KC_4,     KC_5,  
            _______,  KC_Q,    KC_W,    KC_E,    KC_R,     KC_T,  _______,
            _______,  KC_A,    KC_S,    KC_D,    KC_F,     KC_G,
            _______,  KC_Z,    KC_X,    KC_C,    KC_V,     KC_B,  _______              
        )
};

void matrix_scan_user(void) {  
  uint8_t layer = biton32(layer_state);

  switch (layer) {
    case 0:
      L1L
      L2L
      L3L
      break;
    case 1:
      L1H
      L2L
      L3L
      break;
    case 2:
      L1L
      L2H
      L3L
      break;
    case 3:
      L1H
      L2H
      L3L
      break;
    case 4:
      L1L
      L2L
      L3H
      break;
    case 5:
      L1H
      L2L
      L3H
      break;
    case 6:
      L1L
      L2H
      L3H
      break;
    case 7:
      L1H
      L2H
      L3H
      break;
  }
};
