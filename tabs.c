#include <Keyboard.h>

void setup()
{
 
  Keyboard.begin();

  
  delay(500);
  }


void typeKey(int key)
{
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
}


void loop() {
  delay(10);

  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press('n');
  Keyboard.releaseAll();

}
