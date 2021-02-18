#include QMK_KEYBOARD_H
#include "debug.h"
#include "action_layer.h"
#include "version.h"

enum layer_names {
    _BASE, // default layer
    _L2   // macros
};

enum custom_keycodes {
  PLACEHOLDER = SAFE_RANGE, // can always be here
  VRSN,
  EMAIL1				// Macro example (type email address)
};

/*
*
*
* ,-------------------------------------------,                           ,-------------------------------------------,
* |  Esc   |  F2  |  F3  |  F4  |  F5  |  F6  |                           |  F7  |  F8  |  F9  |  F10 |  F11 |   F12  |
* |--------+------+------+------+------+------|                           |------+------+------+------+------+--------|
* |   +=   |   1  |   2  |   3  |   4  |   5  |                           |   6  |   7  |   8  |   9  |   0  |   -    |
* |--------+------+------+------+------+------|                           |------+------+------+------+------+--------|
* |  Tab   |   Q  |   W  |   E  |   R  |   T  |                           |   Y  |   U  |   I  |   O  |   P  |   \|   |
* |--------+------+------+------+------+------|                           |------+------+------+------+------+--------|
* |  Caps  |   A  |   S  |   D  |   F  |   G  |                           |   H  |   J  |   K  |   L  |  ;:  | '"/L2  |
* |--------+------+------+------+------+------|                           |------+------+------+------+------+--------|
* | Shift  |   Z  |   X  |   C  |   V  |   B  |                           |   N  |   M  |  <,  |  >.  |  /?  | Shift  |
* `--------+------+------+------+------+-------                           `------+------+------+------+------+--------'
*          |`~/L2 |  <,  | Left | Right|                                         |  Up  | Down |  [   |   ]  |
*          `---------------------------'                                         `---------------------------'
*                                        ,-------------.         ,-------------.
*                                        | Cmd  | Opt  |         | Ctrl | Cmd  |
*                                 ,------|------|------|         |------+------+------.
*                                 |      |      | Home |         | PgUp |      |      |
*                                 |Backsp|Delete|------|         |------|Enter | Space|
*                                 |      |      | End  |         | PgDn |      |      |
*                                 `--------------------'         `--------------------'
*/

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[_BASE] = LAYOUT(
    KC_ESC,     KC_F2,  KC_F3,   KC_F4,    KC_F5,   KC_F6,     KC_F7,  KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,
    KC_EQL,     KC_1,   KC_2,    KC_3,     KC_4,    KC_5,      KC_6,   KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,
    KC_TAB,     KC_Q,   KC_W,    KC_E,     KC_R,    KC_T,      KC_Y,   KC_U,    KC_I,    KC_O,    KC_P,    KC_BSLS,
    KC_CAPS,    KC_A,   KC_S,    KC_D,     KC_F,    KC_G,      KC_H,   KC_J,    KC_K,    KC_L,    KC_SCLN, LT(_L2, KC_QUOT),
    KC_LSHIFT,  KC_Z,   KC_X,    KC_C,     KC_V,    KC_B,      KC_N,   KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSHIFT,
       LT(_L2, KC_GRV), KC_COMM, KC_LEFT,  KC_RIGHT,                   KC_UP,   KC_DOWN, KC_LBRC, KC_RBRC,
			                           KC_LCMD,  KC_LOPT,                    KC_RCTL,  KC_RCMD,
                                           KC_HOME,                    KC_PGUP,
                        KC_BSPC, KC_DEL,   KC_END,                     KC_PGDN, KC_ENTER, KC_SPC
    ),
/*
*
*
* ,-------------------------------------------,                           ,-------------------------------------------,
* |   F1   |      |      |      |      |      |                           |EMAIL1|      |      |PrnSc | ScrLk| Pause  |
* |--------+------+------+------+------+------|                           |------+------+------+------+------+--------|
* |        |      |      |      |      |      |                           | VRSN |      |      |      |      |        |
* |--------+------+------+------+------+------|                           |------+------+------+------+------+--------|
* |        |      |  MbL |  MUp |  MbR |      |                           |RESET |      |      |      |      |        |
* |--------+------+------+------+------+------|                           |------+------+------+------+------+--------|
* |        |      |  ML  |  MDn |  MR  |      |                           |      |      |      |      |      |        |
* |--------+------+------+------+------+------|                           |------+------+------+------+------+--------|
* |        |      |      |      |      |      |                           |      |      |      |      |      |        |
* `--------+------+------+------+------+------'                           `------+------+------+------+------+--------'
*          |      |Insert|      |      |                                         |      |      |      |      |
*          `---------------------------'                                         `---------------------------'
*                                        ,-------------.         ,-------------.
*                                        |      |      |         |      |      |
*                                 ,------|------|------|         |------+------+------.
*                                 |      |      | MWh+ |         |      |      |      |
*                                 |      |      |------|         |------|      |      |
*                                 |      |      | MWh- |         |      |      |      |
*                                 `--------------------'         `--------------------'
*/
[_L2] = LAYOUT(
    KC_F1,   _______, _______, _______, _______, _______,   EMAIL1,  _______, _______, KC_PSCR, KC_SLCK, KC_PAUS,
    _______, _______, _______, _______, _______, _______,   VRSN,    _______, _______, _______, _______, _______,
    _______, _______, KC_BTN1, KC_MS_U, KC_BTN2, _______,   RESET, _______, _______, _______, _______, _______,
    _______, _______, KC_MS_L, KC_MS_D, KC_MS_R, _______,   _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______,   _______, _______, _______, _______, _______, _______,
             _______, KC_INS,  _______, _______,                     _______, _______, _______, _______,
			                                  _______, _______,   _______, _______,
                                                 KC_WH_U,   _______,
                               _______, _______, KC_WH_D,   _______, _______, _______
    )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
	  case VRSN:
      if (record->event.pressed) {
        SEND_STRING (QMK_KEYBOARD "/" QMK_KEYMAP " @ " QMK_VERSION);
      }
      return false;
      break;
	  
	  case EMAIL1:
      if (record->event.pressed) {
        SEND_STRING("MyEmail@gmail.com");
      }
      return false;
      break;
  }
  return true;
}

layer_state_t layer_state_set_user(layer_state_t state) {
    switch (get_highest_layer(state)) {
    case _L2:
        writePinHigh(LED4_PIN);
        break;
    default: //  for any other layers, or the default layer
        writePinLow(LED4_PIN);
        break;
    }
  return state;
}
