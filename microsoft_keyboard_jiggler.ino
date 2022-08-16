#include <BleKeyboard.h>

BleKeyboard bleKeyboard;

void setup() {
  Serial.begin(115200);
  Serial.println("Starting BLE work!");
  bleKeyboard.setName("Microsoft BLE Keyboard");
  bleKeyboard.setBatteryLevel(98);
  bleKeyboard.set_vendor_id(0x045E);
  bleKeyboard.set_product_id(0x007E); // Microsoft Wireless Transceiver for Bluetooth
  bleKeyboard.begin();
}

void loop() {

  if(bleKeyboard.isConnected()) {
    Serial.println("Sending KEY_LEFT_CTRL key...");
    bleKeyboard.write(KEY_LEFT_CTRL);
  }
  
  Serial.println("Waiting 5 seconds...");
  delay(5000);
}
