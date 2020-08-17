#include QMK_KEYBOARD_H

enum layer_names {
    BASE, // default layer
    FN1,  // numpad of right, mouse on left
    FN2   // media keys, macros, alternative arrows
};

enum custom_keycodes {
  PLACEHOLDER = SAFE_RANGE, // can always be here
  COMP_FR_QUOTES,		// Compose: french quotes
  COMP_NBSP_EM_DASH,	// Compose: nbsp followed by em dash
  COMP_NBSP,			// Compose: nbsp
  PWD1,					// Windows password
  PWD2,					// Stand root password
  PWD3,					// KP password
  EMAIL1				// Gmail address
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  /* Default layer
   * ,-----------------------------------------.                ,-----------------------------------------.
   * |  =   |   1  |   2  |   3  |   4  |   5  |                |   6  |   7  |   8  |   9  |   0  |  -   |
   * |------+------+------+------+------+------|                |------+------+------+------+------+------|
   * | Tab  |   Q  |   W  |   E  |   R  |   T  |                |   Y  |   U  |   I  |   O  |   P  |  \   |
   * |------+------+------+------+------+------|                |------+------+------+------+------+------|
   * |`~/L1 |   A  |   S  |   D  |   F  |   G  |,------.,------.|   H  |   J  |   K  |   L  |   ;  |'"/L1 |
   * |------+------+------+------+------+------||      ||      ||------+------+------+------+------+------|
   * |Shift |   Z  |   X  |   C  |   V  |   B  ||Backsp||Delete||   N  |   M  |   ,  |   .  |   /  |Shift |
   * |------+------+------+------+------+------||      ||      ||------+------+------+------+------+------|
   * | Ctrl |Ins/L2| Alt  |  [   |  ]   |Space |`------'`------'|Enter | left | down |  up  |right |Enter |
   * `-----------------------------------------'                `-----------------------------------------'
   */
  [BASE] = LAYOUT(
    KC_EQL,         KC_1,           KC_2,    KC_3,    KC_4,    KC_5,                        KC_6,    KC_7,    KC_8,    KC_9,    KC_0,     KC_MINS,
    KC_TAB,         KC_Q,           KC_W,    KC_E,    KC_R,    KC_T,                        KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,     KC_BSLS,
    LT(FN1,KC_GRV), KC_A,           KC_S,    KC_D,    KC_F,    KC_G,                        KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,  LT(FN1,KC_QUOTE),
    KC_LSFT,        KC_Z,           KC_X,    KC_C,    KC_V,    KC_B,                        KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,  KC_RSFT,
    KC_LCTL,        LT(FN2,KC_INS), KC_LALT, KC_LBRC, KC_RBRC, KC_SPC, KC_BSPC,  KC_DEL,    KC_ENT,  KC_LEFT, KC_DOWN, KC_UP,   KC_RIGHT, KC_ENT
  ),

  /* Function layer 1
   * ,-----------------------------------------.                ,-----------------------------------------.
   * | Esc  |  F1  |  F2  |  F3  |  F4  |  F5  |                | home |  7   |  8   |  9   |   /  |   *  |
   * |------+------+------+------+------+------|                |------+------+------+------+------+------|
   * | Win  |      |  MbL |  MUp |  MbR | F11  |                | end  |  4   |  5   |  6   |   -  |   +  |
   * |------+------+------+------+------+------|                |------+------+------+------+------+------|
   * |      |PrScr |  ML  |  MDn |  MR  | F12  |,------.,------.| pgup |  1   |  2   |  3   |   =  |      |
   * |------+------+------+------+------+------||      ||      ||------+------+------+------+------+------|
   * |MWhUp |  F6  |  F7  |  F8  |  F9  | F10  ||      ||      || pgdn |  0   |  .   |Enter |  [   |   ]  |
   * |------+------+------+------+------+------||      ||      ||------+------+------+------+------+------|
   * |MWhDn |      |      |      | Caps |      |`------'`------'|      | left | down |  up  |right | Ctrl |
   * `-----------------------------------------'                `-----------------------------------------'
   */
  [FN1] = LAYOUT(
    KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                     KC_HOME, KC_7,    KC_8,    KC_9,    KC_PSLS,  KC_PAST,
    KC_LGUI, _______, KC_BTN1, KC_MS_U, KC_BTN2, KC_F11,                    KC_END,  KC_4,    KC_5,    KC_6,    KC_PMNS,  KC_PPLS,
    _______, KC_PSCR, KC_MS_L, KC_MS_D, KC_MS_R, KC_F12,                    KC_PGUP, KC_1,    KC_2,    KC_3,    KC_EQUAL, _______,
    KC_WH_U, KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,                    KC_PGDN, KC_0,    KC_PDOT, KC_PENT, KC_LBRC,  KC_RBRC,
    KC_WH_R, _______, _______, _______, KC_CAPS, _______, _______, _______, _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RIGHT, KC_RCTL
  ),

  /* Function layer 2
   * ,-----------------------------------------.                ,-----------------------------------------.
   * |      |      |      |      |      |      |                |email |      |      | pwd3 | pwd2 | pwd1 |
   * |------+------+------+------+------+------|                |------+------+------+------+------+------|
   * |      |      |      |      |      |      |                |      |      |      |      |      |      |
   * |------+------+------+------+------+------|                |------+------+------+------+------+------|
   * |      |      |      |      |      |      |,------.,------.|      |      |      |      |      |      |
   * |------+------+------+------+------+------||      ||      ||------+------+------+------+------+------|
   * |      |      |      |      |      |      || nbsp ||  em  ||      |      | <<   |      |      |      |
   * |------+------+------+------+------+------||      || dash ||------+------+------+------+------+------|
   * |      |      |      |      |      |      |`------'`------'|      |      |      |      |      |reset |
   * `-----------------------------------------'                `-----------------------------------------'
   */
  [FN2] = LAYOUT(
    _______, _______, _______, _______, _______, _______,                               EMAIL1,  _______, _______,        PWD3,    PWD2,    PWD1,
    _______, _______, _______, _______, _______, _______,                               _______, _______, _______,        _______, _______, _______,
    _______, _______, _______, _______, _______, _______,                               _______, _______, _______,        _______, _______, _______,
    _______, _______, _______, _______, _______, _______,                               _______, _______, COMP_FR_QUOTES, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, COMP_NBSP, COMP_NBSP_EM_DASH, _______, _______, _______,        _______, _______, RESET
  )
};


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
	  case COMP_FR_QUOTES:
      if (record->event.pressed) {
        SEND_STRING(SS_LCTRL("0")SS_TAP(X_RALT)"<<"SS_TAP(X_RALT)">>"SS_TAP(X_LEFT)SS_LCTRL("1"));
      }
      return false;
      break;
	  
	  case COMP_NBSP_EM_DASH:
      if (record->event.pressed) {
        SEND_STRING(SS_TAP(X_RALT)"  "SS_TAP(X_RALT)"--- ");
      }
      return false;
      break;
	  
	  case COMP_NBSP:
      if (record->event.pressed) {
        SEND_STRING(SS_TAP(X_RALT)"  ");
      }
      return false;
      break;
	  
	  case PWD1:
      if (record->event.pressed) {
		SEND_STRING(SS_TAP(X_RCTRL));
		_delay_ms(500);
		SEND_STRING(SS_TAP(X_RCTRL));
		_delay_ms(500);
        SEND_STRING(SS_LCTRL("0")"Q123qQ123q"SS_TAP(X_ENTER));
      }
      return false;
      break;
	  
	  case PWD2:
      if (record->event.pressed) {
        SEND_STRING(SS_LCTRL("0")"O94nx4sUWHc4akud"SS_TAP(X_ENTER));
      }
      return false;
      break;
	  
	  case PWD3:
      if (record->event.pressed) {
        SEND_STRING(SS_LCTRL("0")"Q123qQ123q"SS_TAP(X_ENTER));
      }
      return false;
      break;
	  
	  case EMAIL1:
      if (record->event.pressed) {
        SEND_STRING(SS_LCTRL("0")"efimov@truesystem.ru");
      }
      return false;
      break;
  }
  return true;
}
