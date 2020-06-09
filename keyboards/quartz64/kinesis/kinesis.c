#include "kinesis.h"
#include "quantum.h"

#ifdef SOLENOID_ENABLE
  #include "solenoid.h"
#endif


void matrix_init_kb(void) {
	setPinOutput(NUM_LOCK_LED_PIN);
  setPinOutput(CAPS_LOCK_LED_PIN);
  setPinOutput(SCROLL_LOCK_LED_PIN);
  setPinOutput(LED4_PIN);
  
  writePinHigh(NUM_LOCK_LED_PIN);
  writePinHigh(CAPS_LOCK_LED_PIN);
  writePinHigh(SCROLL_LOCK_LED_PIN);
  writePinLow(LED4_PIN);
  
	matrix_init_user();
}

/*
void matrix_scan_kb(void) {
	// put your looping keyboard code here
	// runs every cycle (a lot)

	matrix_scan_user();
}

bool process_record_kb(uint16_t keycode, keyrecord_t *record) {
	// put your per-action keyboard code here
	// runs for every action, just before processing by the firmware
	return process_record_user(keycode, record);
}

*/

bool led_update_kb(led_t led_state) {
    bool res = led_update_user(led_state);
    if(res) {
        writePin(NUM_LOCK_LED_PIN, led_state.num_lock);
        writePin(CAPS_LOCK_LED_PIN, led_state.caps_lock);
        writePin(SCROLL_LOCK_LED_PIN, led_state.scroll_lock);
    }
    return res;
}
