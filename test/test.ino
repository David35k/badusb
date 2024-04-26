#include "Keyboard.h"

void typeKey(int key) {
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
}

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);

  while(!Serial);

  // start the magic
  Keyboard.begin();

  Serial.println("the keyboard has begun...");

  delay(400);

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();

  Serial.println("it has opened windows runner");

  delay(100);

  Keyboard.print("cmd");

  typeKey(KEY_RETURN);

  Serial.println("opened the cmd..");

  delay(100);

  Keyboard.print("start https://www.youtube.com/watch?v=xvFZjo5PgG0"); // click the link eks dee

  delay(100);

  typeKey(KEY_RETURN);

  Serial.println("done evil stuff hehe");

  // end the magic
  Keyboard.end();

}

void loop() {
  // empty loop xd
}
