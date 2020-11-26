#include QMK_KEYBOARD_H

//Layers
#define BASE     0 // default layer
#define BRSER    1 // browser controls
#define PSHOP    2 // photoshop shorcuts
#define MEDIA    3
#define TEST     4
#define _ADJ   5

//simple hotkeys
#define SCRM1 LGUI(KC_PSCR)          // Win+PrnScr macro (capture whole screen and save)
#define SCRM2 LALT(KC_PSCR)          // Alt+PrnScr macro (capture active window and save)
#define BRS_TAB_PRV LCTL(KC_PGUP)    // Ctrl + PgUp (Browser: previous tab)
#define BRS_TAB_NXT LCTL(KC_PGDN)    // Ctrl + PgDn (Browser: next tab)
#define PS_CURVES LCTL(KC_M)         // Ctrl+M (Photoshop: curves)
#define PS_LEVELS LCTL(KC_L)         // Ctrl+L (Photoshop: levels)
#define PS_HIST_PRV LCTL(LSFT(KC_Z)) // Ctrl + Shift + Z (Photoshop: undo)
#define PS_HIST_NXT LCTL(LALT(KC_Z)) // Ctrl + Alt + Z (Photoshop: redo)
#define CUT LCTL(KC_X)      // Ctrl + X (Cut)
#define CPY LCTL(KC_C)      // Ctrl + C (Copy)
#define PST LCTL(KC_V)      // Ctrl + V (Paste)

#define L1L writePinLow(LED1_PIN);
#define L2L writePinLow(LED2_PIN);
#define L3L writePinLow(LED3_PIN);
#define L1H writePinHigh(LED1_PIN);
#define L2H writePinHigh(LED2_PIN);
#define L3H writePinHigh(LED3_PIN);

//macros
enum custom_keycodes {
  PLACEHOLDER = SAFE_RANGE, // can always be here
  EMAIL1, // email address macro
  BRS_URL1,     // Ctrl + T; url; Enter (Browser: open URL in new tab)
  ALT_TAB,
  S_COPY
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* LAYER 0 (base)
 ,---------------.
 |  cut  | copy  |
 |-------+-------|
 | email | paste |
 |-------+-------|
 | PrnSc | scrm1 |
 |---------------|
 |   adj | scrm2 |
 `---------------' 
 */
[0] = LAYOUT( \
  CUT,        CPY,   \
  EMAIL1,     PST,  \
  KC_PSCR,    SCRM1,     \
  TO(_ADJ),   SCRM2      \
),

/* LAYER 1 (browser control)
 ,---------------.
 |  back | fwd   |
 |-------+-------|
 | tab<< | tab>> |
 |-------+-------|
 | refr  |search |
 |---------------|
 | home  | url1  |
 `---------------' 
 */
[1] = LAYOUT( \
  KC_WWW_BACK,              KC_WWW_FORWARD, \
  BRS_TAB_PRV,              BRS_TAB_NXT,    \
  KC_WWW_REFRESH,           KC_WWW_SEARCH,  \
  LT(_ADJ,KC_WWW_HOME),     BRS_URL1        \
),

/* LAYER 2 (Adobe Photoshop hotkeys)
 ,---------------.
 |curves |levels |
 |-------+-------|
 | undo  | redo  |
 |-------+-------|
 |       |       |
 |---------------|
 |  adj  |       |
 `---------------' 
 */
[2] = LAYOUT( \
  PS_CURVES,    PS_LEVELS,   \
  PS_HIST_PRV,  PS_HIST_NXT, \
  KC_NO,        KC_NO,       \
  TO(_ADJ),     KC_NO        \
),

/* LAYER 3 (Multimedia)
 ,---------------.
 |prev   | next  |
 |-------+-------|
 |pause  | stop  |
 |-------+-------|
 | mute  | vol+  |
 |---------------|
 |  adj  | vol-  |
 `---------------' 
 */
[3] = LAYOUT( \
  KC_MPRV,    KC_MNXT, \
  KC_MPLY,    KC_MSTP, \
  KC_MUTE,    KC_VOLU, \
  TO(_ADJ), KC_VOLD  \
),

/* LAYER 4
 ,---------------.
 |S_COPY |Alt+Tab|
 |-------+-------|
 |       |       |
 |-------+-------|
 |       |       |
 |---------------|
 |  adj  |       |
 `---------------' 
 */
[4] = LAYOUT( \
  S_COPY,   ALT_TAB, \
  KC_NO,    KC_NO, \
  KC_NO,    KC_NO, \
  TO(_ADJ), KC_NO  \
),

/* _ADJ
 ,---------------.
 |  L0   |  L1   |
 |-------+-------|
 |  L2   |  L3   |
 |-------+-------|
 |  L4   |       |
 |---------------|
 |       | reset |
 `---------------' 
 */
[_ADJ] = LAYOUT( \
  TO(0),  TO(1), \
  TO(2),  TO(3), \
  TO(4),  KC_NO, \
  KC_NO,  RESET
)
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case EMAIL1:
      if (record->event.pressed) {
        SEND_STRING("email@domain.com");
      }
      break;
      
    case BRS_URL1:
      if (record->event.pressed) {
        SEND_STRING(SS_LCTRL("t"));
        SEND_STRING("https://example.com");
        SEND_STRING(SS_TAP(X_ENTER));
      }
      break;
    
    case ALT_TAB:
      if (record->event.pressed) {
        register_code(KC_LALT);
        tap_code(KC_TAB);
        unregister_code(KC_LALT);
      }
      break;
      
    case S_COPY:
      if (record->event.pressed) {
        int i;
        for (i=1; i<=360; i++) {
          SEND_STRING(SS_LCTL("l") SS_LCTL("c"));
          SEND_STRING(SS_DELAY(200));
          register_code(KC_LALT);
          SEND_STRING(SS_DELAY(200));
          tap_code(KC_TAB);
          SEND_STRING(SS_DELAY(200));
          unregister_code(KC_LALT);
          SEND_STRING(SS_DELAY(200));
          tap_code(KC_ENT);
          SEND_STRING(SS_DELAY(200));
          SEND_STRING(SS_LCTL("v"));
          SEND_STRING(SS_DELAY(200));
          tap_code(KC_BSPACE);
          SEND_STRING(SS_DELAY(200));
          tap_code(KC_ENT);
          tap_code(KC_DOWN);
          SEND_STRING(SS_DELAY(200));
          register_code(KC_LALT);
          SEND_STRING(SS_DELAY(200));
          tap_code(KC_TAB);
          SEND_STRING(SS_DELAY(200));
          unregister_code(KC_LALT);
          SEND_STRING(SS_DELAY(200));
          tap_code(KC_DOWN);
          SEND_STRING(SS_DELAY(200));
          tap_code(KC_LEFT);
        }
      }
      break;
  }
  return true;
};

void matrix_init_user(void) {

}

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
