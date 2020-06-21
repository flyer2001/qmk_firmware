#include "q2x4.h"

void matrix_init_kb(void) {
	setPinOutput(LED1_PIN);
  setPinOutput(LED1_PIN);
  setPinOutput(LED1_PIN);
  
  writePinLow(LED1_PIN);
  writePinLow(LED2_PIN);
  writePinLow(LED3_PIN);
  
	matrix_init_user();
}
