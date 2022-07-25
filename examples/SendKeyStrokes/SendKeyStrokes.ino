/**
 * This example turns the ESP32 into a Bluetooth LE keyboard that writes the words, presses Enter, presses a media key and then Ctrl+Alt+Delete
 */
#include <BleCombo.h>

BleCombo bleDevice;

void setup() {
  Serial.begin(115200);
  Serial.println("Starting BLE work!");
  bleDevice.begin();
}

void loop() {
  if(bleDevice.isConnected()) {
    Serial.println("Sending 'Hello world'...");
    bleDevice.print("Hello world");

    delay(1000);

    Serial.println("Sending Enter key...");
    bleDevice.write(KEY_RETURN);

    delay(1000);

    Serial.println("Sending Play/Pause media key...");
    bleDevice.write(KEY_MEDIA_PLAY_PAUSE);

    delay(1000);

   //
   // Below is an example of pressing multiple keyboard modifiers 
   // which by default is commented out.
    /*
    Serial.println("Sending Ctrl+Alt+Delete...");
    bleCombo.press(KEY_LEFT_CTRL);
    bleCombo.press(KEY_LEFT_ALT);
    bleCombo.press(KEY_DELETE);
    delay(100);
    bleKeyboard.releaseAll();
    */
  }

  Serial.println("Waiting 5 seconds...");
  delay(5000);
}
