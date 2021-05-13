#include QMK_KEYBOARD_H

#define _QWERTY 0
#define _LOWER 1
#define _RAISE 2

#define RAISE MO(_RAISE)
#define LOWER MO(_LOWER)

/*
empty template
      _______, _______, _______, _______, _______, _______,                       _______, _______, _______, _______, _______, _______,
      _______, _______, _______, _______, _______, _______,                       _______, _______, _______, _______, _______, _______,
      _______, _______, _______, _______, _______, _______,                       _______, _______, _______, _______, _______, _______,
      _______, _______, _______, _______, _______, _______,                       _______, _______, _______, _______, _______, _______,
                        _______, _______, _______, _______, _______,     _______, _______, _______, _______, _______,
                                                   _______, _______,     _______, _______
*/

/*
* ,-------------------------------------------,                           ,-------------------------------------------.
* |   ESC  |   1  |   2  |   3  |   4  |   5  |                           |   6  |   7  |   8  |   9  |   0  |   =    |
* |--------+------+------+------+------+------|                           +------+------+------+------+------+--------|
* |  Tab   |   Q  |   W  |   E  |   R  |   T  |                           |   Y  |   U  |   I  |   O  |   P  |   \|   |
* |--------+------+------+------+------+------|                           |------+------+------+------+------+--------|
* |`~/Ctrl |   A  |   S  |   D  |   F  |   G  |                           |   H  |   J  |   K  |   L  |  ;:  |'"/LOWER|
* |--------+------+------+------+------+------|                           |------+------+------+------+------+--------|
* | Shift  |   Z  |   X  |   C  |   V  |   B  |                           |   N  |   M  |  ,.  |  .>  |  /?  | Shift  |
* `--------+------+------+------+------+-------------,             ,------|------+------+------+------+------+--------'
*                 |   [  |   ]  |  Alt |LOWER | GUI  |             | Ctrl |RAISE | Alt  |  -   |Insert|
*                 `----------------------------------|             |----------------------------------'
                                       | Space| Bkspc|             |  Del | Enter|
                                       `-------------'             '-------------'
*/
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT_6x6(
        KC_ESC,         KC_1, KC_2,    KC_3,    KC_4,    KC_5,                         KC_6,  KC_7,    KC_8,    KC_9,   KC_0,    KC_EQL,
        KC_TAB,         KC_Q, KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,  KC_U,    KC_I,    KC_O,   KC_P,    KC_BSLS,
        LCTL_T(KC_GRV), KC_A, KC_S,    KC_D,    KC_F,    KC_G,                         KC_H,  KC_J,    KC_K,    KC_L,   KC_SCLN, LT(_LOWER, KC_QUOT),
        KC_LSFT,        KC_Z, KC_X,    KC_C,    KC_V,    KC_B,                         KC_N,  KC_M,    KC_COMM, KC_DOT, KC_SLSH, KC_RSFT,
                              KC_LBRC, KC_RBRC, KC_LALT, LOWER,  KC_LGUI,    KC_RCTRL, RAISE, KC_RALT, KC_MINS, KC_INS,
                                                         KC_SPC, KC_BSPC,      KC_DEL, KC_ENTER
    ),
/*
* ,-------------------------------------------,                           ,-------------------------------------------.
* |        |  F1  |  F2  |  F3  |  F4  |  F5  |                           |  F6  |  F7  |  F8  |  F9  |  F10 |   F11  |
* |--------+------+------+------+------+------|                           +------+------+------+------+------+--------|
* |        |      |      |      |      |      |                           | Home |      |  ↑   |      | PgUp |   F12  |
* |--------+------+------+------+------+------|                           |------+------+------+------+------+--------|
* |        |      |      |      |      |      |                           | End  |   ←  |  ↓   |   →  | PgDn |        |
* |--------+------+------+------+------+------|                           |------+------+------+------+------+--------|
* |        |      |      | Caps |      |      |                           |      |      |      |      |      |        |
* `--------+------+------+------+------+-------------,             ,------|------+------+------+------+------+--------'
*                 | Reset|      |      |      |      |             |      |      |      |      | Reset|
*                 `----------------------------------|             |----------------------------------'
                                       |      |      |             |      |      |
                                       `-------------'             '-------------'
*/
    [_LOWER] = LAYOUT_6x6(
        _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                         KC_F6,   KC_F7,   KC_F8,   KC_F9,    KC_F10,  KC_F11,
        _______, _______, _______, _______, _______, _______,                       KC_HOME, _______, KC_UP,   _______,  KC_PGUP, KC_F12,
        _______, _______, _______, _______, _______, _______,                       KC_END,  KC_LEFT, KC_DOWN, KC_RIGHT, KC_PGDN, _______,
        _______, _______, _______, KC_CAPS, _______, _______,                       _______, KC_PSCR, _______, _______,  _______, _______,
                          RESET,   _______, _______, _______, _______,     _______, _______, _______, _______, RESET,
                                                     _______, _______,     _______, _______
    ),
/*
* ,-------------------------------------------,                           ,-------------------------------------------.
* |        |      |      |      |      |      |                           |R_TOG |  HUE |  SAT |  VAL |      |        |
* |--------+------+------+------+------+------|                           +------+------+------+------+------+--------|
* |        |      |  m1  |  m↑  |  m2  |      |                           |      |      |      |      |      |   F12  |
* |--------+------+------+------+------+------|                           |------+------+------+------+------+--------|
* |        |      |  m←  |  m↓  |  m→  |      |                           |      |      |      |      |      |        |
* |--------+------+------+------+------+------|                           |------+------+------+------+------+--------|
* |        |      |      |      |      |      |                           |      |      |      |      |      |        |
* `--------+------+------+------+------+-------------,             ,------|------+------+------+------+------+--------'
*                 | Reset|      |      |      |      |             |      |      |      |      | Reset|
*                 `----------------------------------|             |----------------------------------'
                                       |      |      |             |      |      |
                                       `-------------'             '-------------'
*/
    [_RAISE] = LAYOUT_6x6(
        _______, _______, _______, _______, _______, _______,                       RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, _______, _______,
        _______, _______, KC_BTN1, KC_MS_U, KC_BTN2, _______,                       _______, _______, _______, _______, _______, _______,
        _______, _______, KC_MS_L, KC_MS_D, KC_MS_R, _______,                       _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,                       _______, _______, _______, _______, _______, _______,
                          RESET,   _______, _______, _______, _______,     _______, _______, _______, _______, RESET,
                                                     _______, _______,     _______, _______
    )
};
