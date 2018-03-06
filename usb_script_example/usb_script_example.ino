#include "Keyboard.h"

void typeKey(int key)
{
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
}

void setup()
{

  Keyboard.begin();

  delay(500);

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();

  delay(200);

  Keyboard.print("notepad");

  typeKey(KEY_RETURN);

  delay(200);

  Keyboard.print("Hello, World!");

  typeKey(KEY_RETURN);

  Keyboard.end();
}

void loop() {}
