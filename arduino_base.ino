#include <SoftwareSerial.h>
SoftwareSerial BTSerial(2, 3); // RX, TX
void setup() {
  Serial.begin(9600);
}
void loop() {
if (BTSerial.available()) {
    Serial.write(BTSerial.read());
  }
  if (Serial.available()) {
    BTSerial.write(Serial.read());
   
}
