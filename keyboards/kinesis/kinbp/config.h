#pragma once

/* USB Device descriptor parameter */
#define PRODUCT_ID      0x6060
#define DEVICE_VER      0x0002

/* key matrix size */
#define MATRIX_ROWS 15
#define MATRIX_COLS  7 

/*
 * Keyboard Matrix Assignments
 *
 * Change this to how you wired your keyboard
 * COLS: AVR pins used for columns, left to right
 * ROWS: AVR pins used for rows, top to bottom
 * DIODE_DIRECTION: COL2ROW = COL = Anode (+), ROW = Cathode (-, marked on diode)
 *                  ROW2COL = ROW = Anode (+), COL = Cathode (-, marked on diode)
 *
*/
#define MATRIX_ROW_PINS { A5, A6, A7, B0, A4, B15, A2, A0, A1, B9, B8, C13, A8, B6, B4 }
#define MATRIX_COL_PINS { A9, B13, B14, B3, B5, A15, A3 }

#define NUM_LOCK_LED_PIN B14
#define CAPS_LOCK_LED_PIN B13
#define SCROLL_LOCK_LED_PIN B15
#define LED4_PIN A8

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW
 

