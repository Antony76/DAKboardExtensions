/*
 * The aim of this project is to provide more features
 * to the DAKboard. The DAK board is an amazing wifi connected wall 
 * display for your photos, calendar, news and weather.
 * https://dakboard.com
 * Yup, I'm cheating. My project is not really an extension.
 * I am just finding a way to switch chromium tabs or application
 * with an external hardware. Keybord in the mean time.
 * More details on github: https://github.com/Antony76
 */

#include "Keyboard.h"

// Test mode is sending the ASCII key number
// pressed on the keyboard
#define TEST_MODE false // true or false

// Map keys to digital inputs
#define KEY_1 0
#define KEY_2 1
#define KEY_3 2
#define KEY_4 3

// Bounce delay
#define BOUNCE 10
#define LOOP_DELAY 300

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pins as outputs.
  pinMode(KEY_1, INPUT_PULLUP);
  pinMode(KEY_2, INPUT_PULLUP);
  pinMode(KEY_3, INPUT_PULLUP);
  pinMode(KEY_4, INPUT_PULLUP);
  Keyboard.begin();
}

void loop() {
  
  // Memo
  //KEY_LEFT_CTRL
  //KEY_TAB
  //KEY_F5 KEY_F11

  // Send CTRL+TAB when keyboard key 1 is pressed
  if (digitalRead(KEY_1) == LOW)
  {
#if TEST_MODE == false
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(KEY_TAB);
#else
    Keyboard.press(KEY_LEFT_SHIFT);
    Keyboard.press(0x31);
#endif
    Keyboard.releaseAll();
    delay(BOUNCE);
  }else if (digitalRead(KEY_2) == LOW)
  {
#if TEST_MODE == false
    // Not defined yet
#else
    Keyboard.press(KEY_LEFT_SHIFT);
    Keyboard.press(0x32);
#endif
    Keyboard.releaseAll();
    delay(BOUNCE);
  }else if (digitalRead(KEY_3) == LOW)
  {
#if TEST_MODE == false
    // Not defined yet
#else
    Keyboard.press(KEY_LEFT_SHIFT);
    Keyboard.press(0x33);
#endif
    Keyboard.releaseAll();
    delay(BOUNCE);
  }else if (digitalRead(KEY_4) == LOW)
  {
#if TEST_MODE == false
    // Not defined yet
#else
    Keyboard.press(KEY_LEFT_SHIFT);
    Keyboard.press(0x34);
#endif
    Keyboard.releaseAll();
    delay(BOUNCE);
  }

 delay(LOOP_DELAY);
}
