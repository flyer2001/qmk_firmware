// this is the style you want to emulate.
// This is the canonical layout file for the Quantum project. If you want to add another keyboard,

#include QMK_KEYBOARD_H

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _QW,
    _RS,
    _LW
};

#define MC1 COMP_FR_QUOTES
#define MC2 COMP_NBSP_EM_DASH
#define MC3 COMP_NBSP

enum custom_keycodes {
  PLACEHOLDER = SAFE_RANGE, // can always be here
  COMP_FR_QUOTES,		  // Compose: french quotes
  COMP_NBSP_EM_DASH,	// Compose: nbsp followed by em dash
  COMP_NBSP,		    	// Compose: nbsp
  PWD3,				      	// KP password
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/*
	,----------------------------------.              ,----------------------------------.
	|   Q  |   W  |   E  |   R  |   T  |              |   Y  |   U  |   I  |   O  |   P  |
	|------+------+------+------+------|              |------+------+------+------+------|
	|A/Ctrl|   S  |   D  |   F  |   G  |              |   H  |   J  |   K  |   L  |;/Ctrl|
	|------+------+------+------+------|------.,------|------+------+------+------+------|
	|Z/Shft|   X  |   C  |   V  |   B  |Space ||Enter |   N  |   M  |   ,  |   .  |?/Shft|
	|------+------+------+------+------|      ||      |------+------+------+------+------|
	| ~/Alt|  ESC |   -  |  GUI | BS/LW|------'`------|DEL/RS|  |\  |   [  |   ]  |  "'  |
	`----------------------------------'              `----------------------------------'
*/
  [_QW] = LAYOUT( /* Qwerty */
    KC_Q,           KC_W,    KC_E,    KC_R,    KC_T,                             KC_Y,            KC_U,    KC_I,    KC_O,    KC_P,
    LCTL_T(KC_A),   KC_S,    KC_D,    KC_F,    KC_G,                             KC_H,            KC_J,    KC_K,    KC_L,    RCTL_T(KC_SCLN),
    LSFT_T(KC_Z),   KC_X,    KC_C,    KC_V,    KC_B,                             KC_N,            KC_M,    KC_COMM, KC_DOT,  RSFT_T(KC_SLSH),
    LALT_T(KC_GRV), KC_ESC,  KC_MINS, KC_LGUI, LT(_LW, KC_BSPC), KC_SPC, KC_ENT, LT(_RS, KC_DEL), KC_BSLS, KC_LBRC, KC_RBRC, KC_QUOT
  ),
  
/*
	,----------------------------------.              ,----------------------------------.
	| PrnSc|      |  up  |      | PgUp |              | Home |  F7  |  F8  |  F9  |      |
	|------+------+------+------+------|              |------+------+------+------+------|
	| trns | left | down | right| PgDn |              |  End |  F4  |  F5  |  F6  | trns |
	|------+------+------+------+------|------.,------|------+------+------+------+------|
	| trns | MC2  |  MC3 |   (  |   )  |      ||      |      |  F1  |  F2  |  F3  | trns |
	|------+------+------+------+------|      ||      |------+------+------+------+------|
	| trns | C+S  |  Ins |  MC1 | trns |------'`------| trns |  F10 |  F11 |  F12 | trns |
	`----------------------------------'              `----------------------------------'
*/

  [_RS] = LAYOUT( /* RAISE  */
    KC_PSCR, _______,        KC_UP,   _______, KC_PGUP,                   KC_HOME, KC_F7,   KC_F8,  KC_F9,  _______,
    _______, KC_LEFT,        KC_DOWN, KC_RGHT, KC_PGDN,                   KC_END,  KC_F4,   KC_F5,  KC_F6,  _______,
    _______, MC2,            MC3,     KC_LPRN, KC_RPRN,                   _______, KC_F1,   KC_F2,  KC_F3,  _______,
    _______, LCTL(KC_LSFT),  _______, MC1,     _______, _______, _______, _______, KC_F10,  KC_F11, KC_F12, _______
    ),

/*
	,----------------------------------.              ,----------------------------------.
	|   !  |   @  |   #  |   $  |  %   |              |   /  |   7  |   8  |   9  |  .   |
	|------+------+------+------+------|              |------+------+------+------+------|
	| trns |   ^  |   &  |   *  | PWD3 |              |   *  |   4  |   5  |   6  | trns |
	|------+------+------+------+------|------.,------|------+------+------+------+------|
	| trns |r_tog | r_hue| r_sat| r_val|      ||      |   +  |   1  |   2  |   3  | trns |
	|------+------+------+------+------|      ||      |------+------+------+------+------|
	| trns | Tab  |RESET |      | trns |------'`------| trns |   0  |   -  |  +=  | trns |
	`----------------------------------'              `----------------------------------'
*/

  [_LW] = LAYOUT( /* LOWER */
    KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,                   KC_PSLS, KC_7, KC_8,    KC_9,   KC_PDOT,
    _______, KC_CIRC, KC_AMPR, KC_RGHT, KC_ASTR,                   KC_PAST, KC_4, KC_5,    KC_6,   _______,
    _______, RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI,                   KC_PPLS, KC_1, KC_2,    KC_3,   _______,
    _______, KC_TAB , RESET,   _______, _______, _______, _______, _______, KC_0, KC_PMNS, KC_EQL, _______
    )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  #ifdef CONSOLE_ENABLE
    uprintf("row: %u, col: %u, pressed: %u\n", record->event.key.row, record->event.key.col, record->event.pressed);
  #endif
  switch (keycode) {
    // Alt + Escape for Alt + Tab
    case KC_ESC:
        // Detect the activation of only Left Alt
        if ((get_mods() & MOD_BIT(KC_LALT)) == MOD_BIT(KC_LALT)) {
            if (record->event.pressed) {
                // No need to register KC_LALT because it's already active.
                // The Alt modifier will apply on this KC_TAB.
                register_code(KC_TAB);
            } else {
                unregister_code(KC_TAB);
            }
            // Do not let QMK process the keycode further
            return false;
        }
        // Else, let QMK process the KC_ESC keycode as usual
        return true;
        
	  case MC1:
      // French quotes
      if (record->event.pressed) {
        SEND_STRING(SS_TAP(X_RALT)"<<"SS_TAP(X_RALT)">>"SS_TAP(X_LEFT));
      }
      return false;
      break;
	  
	  case MC2:
      // NB-space + mdash + space 
      if (record->event.pressed) {
        SEND_STRING(SS_TAP(X_RALT)"  "SS_TAP(X_RALT)"--- ");
      }
      return false;
      break;
	  
	  case MC3:
      // NB-space
      if (record->event.pressed) {
        SEND_STRING(SS_TAP(X_RALT)"  ");
      }
      return false;
      break;
	  
	  case PWD3:
      if (record->event.pressed) {
        SEND_STRING("Q123qQ123q"SS_TAP(X_ENTER));
      }
      return false;
      break;
  }
  return true;
}