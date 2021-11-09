#include QMK_KEYBOARD_H
#include "debug.h"
#include "action_layer.h"
#include "version.h"

enum layer_names {
    _BASE, // default layer
    _NM,  // numpad of right, mouse on left
    _MC,   // macros
    _ARROW // arrows layer for right and left hand
};

#define MC1 COMP_FR_QUOTES
#define MC2 COMP_NBSP_EM_DASH
#define MC3 COMP_NBSP

// CAGS/⌃⌥⌘⇧ Control - Option (Alt) - Command (GUI) - Shift
// Left-hand home row mods
#define HOME_A LCTL_T(KC_A)
#define HOME_S LALT_T(KC_S)
#define HOME_D LGUI_T(KC_D)
#define HOME_F LSFT_T(KC_F)

// Right-hand home row mods
#define HOME_J RSFT_T(KC_J)
#define HOME_K RGUI_T(KC_K)
#define HOME_L LALT_T(KC_L)
#define HOME_SCLN RCTL_T(KC_SCLN)

enum custom_keycodes {
  PLACEHOLDER = SAFE_RANGE, // can always be here
  EPRM,
  VRSN,
  RGB_SLD,
  COMP_FR_QUOTES,		// Compose: french quotes
  COMP_NBSP_EM_DASH,	// Compose: nbsp followed by em dash
  COMP_NBSP,			// Compose: nbsp
  PWD1,					// Windows password
  PWD2,					// Stand root password
  PWD3,					// KP password
  EMAIL1				// Gmail address
};

/*
*
*
* ,--------------------------------------------                           --------------------------------------------.
* |  Esc   |  F2  |  F3  |  F4  |  F5  |  F6  |                           |  F7  |  F8  |  F9  |  F10 | PrSc |  RAlt  |
* |--------+------+------+------+------+------+                           +------+------+------+------+------+--------|
* | +=/Alt |   1  |   2  |   3  |   4  |   5  |                           |   6  |   7  |   8  |   9  |   0  |   -    |
* |--------+------+------+------+------+------|                           +------+------+------+------+------+--------|
* |  Tab   |   Q  |   W  |   E  |   R  |   T  |                           |   Y  |   U  |   I  |   O  |   P  |   [    |
* |--------+------+------+------+------+------|                           |------+------+------+------+------+--------|
* |  CAPS  |   A  |  S ⌃ |  D ⌥ |  F ⌘ |  G ⇧ |                           |   H  |  J ⇧ |  K ⌘ |  L ⌥ | ;: ⌃ | '"/NM  |
* |--------+------+------+------+------+------|                           |------+------+------+------+------+--------|
* |[/Shift |  Z   |   X  |   C  |   V  |   B  |                           |   N  |   M  |  ,.  |  .>  |  /?  |    ]   |
* `--------+------+------+------+------+-------                           `------+------+------+------+------+--------'
*          |  `~  |  MC  |  \|  |⌃Space|                                         | Left | Down |  Up  | Right|
*          `---------------------------'                                         `---------------------------'
*                                        ,-------------.         ,-------------.
*                                        |  Del |Enter |         | Space|Backsp|
*                                 ,------|------|------|         |------+------+------.
*                                 |      |      | Home |         | PgUp |      |      |
*                                 |Space |Backsp|------|         |------|  Del | Enter|
*                                 |      |      | End  |         | PgDn |      |      |
*                                 `--------------------'         `--------------------'
*/

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[_BASE] = LAYOUT(
    KC_ESC,           KC_F2,  KC_F3,  KC_F4,  KC_F5,   KC_F6,     KC_F7,  KC_F8,  KC_F9,   KC_F10, KC_PSCR,   KC_RALT,
    LALT_T(KC_EQL),   KC_1,   KC_2,   KC_3,   KC_4,    KC_5,      KC_6,   KC_7,   KC_8,    KC_9,   KC_0,      KC_MINS,
    KC_TAB,           KC_Q,   KC_W,   KC_E,   KC_R,    KC_T,      KC_Y,   KC_U,   KC_I,    KC_O,   KC_P,      KC_LBRC,
    LT(_ARROW, KC_CAPS),HOME_A,HOME_S,HOME_D, HOME_F,  KC_G,      KC_H,   HOME_J, HOME_K,  HOME_L, HOME_SCLN, LT(_NM, KC_QUOT),
    LSFT_T(KC_LBRC),  KC_Z,   KC_X,   KC_C,   KC_V,      KC_B,      KC_N,   KC_M,   KC_COMM, KC_DOT, KC_SLSH, LT(_ARROW, KC_RBRC),
                      KC_GRV, MO(_MC),KC_BSLS,LCTL(KC_SPC),                 KC_LEFT,KC_DOWN, KC_UP,  KC_RGHT,
			                               KC_DEL,  KC_ENTER,                  KC_SPC, KC_BSPC,
                                              KC_HOME,                   KC_PGUP,
                             KC_SPC, KC_BSPC, KC_END,                    KC_PGDN,KC_DEL, KC_ENTER
    ),
/*
*
*
* ,--------------------------------------------                           --------------------------------------------.
* |   F1   |au on |au off|      |      |      |                           |ck tg |ck up |ck dn |ck rst| F11  |  F12   |
* |--------+------+------+------+------+------+                           +------+------+------+------+------+--------|
* |        |      |      |      |      |      |                           |ScrLk |Numlck|  =   |  /   |  *   |        |
* |--------+------+------+------+------+------|                           +------+------+------+------+------+--------|
* |        |      |  MbL |  MUp |  MbR | Ins  |                           |CapsLk|  7   |  8   |  9   |  -   |   \|   |
* |--------+------+------+------+------+------|                           |------+------+------+------+------+--------|
* |        |      |  ML  |  MDn |  MR  |      |                           |      |  4   |  5   |  6   |  +   |  L1    |
* |--------+------+------+------+------+------|                           |------+------+------+------+------+--------|
* |        |      |      |      |      |      |                           |  .   |  1   |  2   |  3   |Enter |        |
* `--------+------+------+------+------+-------                           `------+------+------+------+------+--------'
*          |      |      |      |      |                                         |   0  |  .   |      |      |
*          `---------------------------'                                         `---------------------------'
*                                        ,-------------.         ,-------------.
*                                        |      |      |         |      |      |
*                                 ,------|------|------|         |------+------+------.
*                                 |      |      |MWhUp |         |      |      |      |
*                                 |      |      |------|         |------|      |  0   |
*                                 |      |      |MWhDn |         |      |      |      |
*                                 `--------------------'         `--------------------'
*/
[_NM] = LAYOUT(
    KC_F1,   AU_ON,   AU_OFF,  _______, _______, _______,   CK_TOGG, CK_UP,   CK_DOWN, CK_RST,  KC_F11,  KC_F12,
    _______, _______, _______, _______, _______, _______,   KC_SLCK, KC_NLCK, KC_PEQL, KC_PSLS, KC_PAST, _______,
    _______, _______, KC_BTN1, KC_MS_U, KC_BTN2, KC_INS,    KC_CAPS, KC_P7,   KC_P8,   KC_P9,   KC_PMNS, KC_BSLS,
    _______, _______, KC_MS_L, KC_MS_D, KC_MS_R, _______,   _______, KC_P4,   KC_P5,   KC_P6,   KC_PPLS, _______,
    _______, _______, _______, _______, _______, _______,   KC_PDOT, KC_P1,   KC_P2,   KC_P3,   KC_PENT, _______,
             _______, _______, _______, _______,                     KC_P0,   KC_PDOT, _______, _______,
			                                  _______, _______,   _______, _______,
                                                 KC_WH_U,   _______,
                               _______, _______, KC_WH_D,   _______, _______, KC_P0
    ),
/*
*
*
* ,--------------------------------------------                           --------------------------------------------.
* |   F1   |au on |au off|      |      |      |                           |ck tg |ck up |ck dn |ck rst| F11  |  F12   |
* |--------+------+------+------+------+------+                           +------+------+------+------+------+--------|
* |        |      |      |      |      |      |                           |ScrLk |Numlck|  =   |  /   |  *   |        |
* |--------+------+------+------+------+------|                           +------+------+------+------+------+--------|
* |        |      |  MbL |  Up  |  MbR | Ins  |                           |CapsLk|  7   |  8   |  9   |  -   |   \|   |
* |--------+------+------+------+------+------|                           |------+------+------+------+------+--------|
* |        |      | Left | Down |Right |      |                           |      |  4   |  5   |  6   |  +   |  L1    |
* |--------+------+------+------+------+------|                           |------+------+------+------+------+--------|
* |        |      |      |      |      |      |                           |  .   |  1   |  2   |  3   |Enter |        |
* `--------+------+------+------+------+-------                           `------+------+------+------+------+--------'
*          |      |      |      |      |                                         |   0  |  .   |      |      |
*          `---------------------------'                                         `---------------------------'
*                                        ,-------------.         ,-------------.
*                                        |      |      |         |      |      |
*                                 ,------|------|------|         |------+------+------.
*                                 |      |      |MWhUp |         |      |      |      |
*                                 |      |      |------|         |------|      |  0   |
*                                 |      |      |MWhDn |         |      |      |      |
*                                 `--------------------'         `--------------------'
*/
[_ARROW] = LAYOUT(
    _______, _______,   _______,  _______, _______, _______,   _______, _______,   _______, _______,  _______,  _______,
    _______, _______, _______, _______, _______, _______,      _______, _______,   _______, _______,  _______,  _______,
    _______, _______, _______,   KC_UP, _______, _______,       _______, _______,     KC_UP, _______,  _______,  _______,
    _______, _______, KC_LEFT, KC_DOWN, KC_RGHT, _______,      _______, KC_LEFT,   KC_DOWN, KC_RGHT,  _______,  _______,
    _______, _______, _______, _______, _______, _______,      _______, _______,   _______, _______,  _______,  _______,
             _______, _______, _______, _______,                        _______,   _______, _______,  _______,
                                        _______, _______,   _______, _______,
                                                 _______,   _______,
                               _______, _______, _______,   _______, _______, _______
    ),
/*
*
*
* ,--------------------------------------------                           --------------------------------------------.
* |        |      |      |      |      |      |                           |email |unic  |      |      |      |        |
* |--------+------+------+------+------+------+                           +------+------+------+------+------+--------|
* |        |      |      |      |      |      |                           |      |      |      |      |      |   MC2  |
* |--------+------+------+------+------+------|                           +------+------+------+------+------+--------|
* |        |      |      |      |reset |      |                           |      |      |      |      |      |        |
* |--------+------+------+------+------+------|                           |------+------+------+------+------+--------|
* |        |      |      |      |      |      |                           |      |      |      |      |      |        |
* |--------+------+------+------+------+------|                           |------+------+------+------+------+--------|
* |        |      |      |      |      |      |                           |      |      |  MC1 |      |      |        |
* `--------+------+------+------+------+-------                           `------+------+------+------+------+--------'
*          |      |      |      |      |                                         |      |      |      |      |
*          `---------------------------'                                         `---------------------------'
*                                        ,-------------.         ,-------------.
*                                        |      |      |         |      |      |
*                                 ,------|------|------|         |------+------+------.
*                                 |      |      |      |         |      |      |      |
*                                 |  MC3 |      |------|         |------|      |      |
*                                 |      |      |      |         |      |      |      |
*                                 `--------------------'         `--------------------'
*/
[_MC] = LAYOUT(
    VRSN,    _______, _______, _______, _______, _______,   EMAIL1,  _______, _______, PWD3,    PWD2,    PWD1,
    _______, _______, _______, _______, _______, _______,   _______, _______, _______, _______, _______, MC2,
    _______, _______, _______, _______, RESET,   _______,   _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______,   _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______,   _______, _______, MC1,     _______, _______, _______,
             _______, _______, _______, _______,                     _______, _______, _______, _______,
			                                  _______, _______,   _______, _______,
                                                 _______,   _______,
                               MC3,     _______, _______,   _______, _______, _______
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
	  
	  case COMP_FR_QUOTES:
      if (record->event.pressed) {
        SEND_STRING(SS_TAP(X_RALT)"<<"SS_TAP(X_RALT)">>"SS_TAP(X_LEFT));
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
        SEND_STRING("NakedLunch1991"SS_TAP(X_ENTER));
      }
      return false;
      break;
	  
	  case PWD2:
      if (record->event.pressed) {
        SEND_STRING("O94nx4sUWHc4akud"SS_TAP(X_ENTER));
      }
      return false;
      break;
	  
	  case PWD3:
      if (record->event.pressed) {
        SEND_STRING("Q123qQ123q"SS_TAP(X_ENTER));
      }
      return false;
      break;
	  
	  case EMAIL1:
      if (record->event.pressed) {
        SEND_STRING("quartz64@gmail.com");
      }
      return false;
      break;
  }
  return true;
}

layer_state_t layer_state_set_user(layer_state_t state) {
    switch (get_highest_layer(state)) {
    case _MC:
        writePinLow(LED4_PIN);
        break;
    default: //  for any other layers, or the default layer
        writePinHigh(LED4_PIN);
        break;
    }
  return state;
}
