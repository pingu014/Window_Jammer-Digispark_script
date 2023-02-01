// A simple script to have the DigiSpark constantly spam ALT+F4 and CTRL+W key combos forcing all active windows and browsers to close

// For more scripts checkout: https://github.com/m6sser
// m6sser | 01/02/2023 @14:00 UTC

#include "DigiKeyboard.h"
void setup() {
}

void loop() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(KEY_W, MOD_CONTROL_LEFT);
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(KEY_F4, MOD_ALT_LEFT);
}
