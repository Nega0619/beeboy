#include <SoftwareSerial.h>
int RX = 3;
int TX = 2;
SoftwareSerial mySerial(RX, TX);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  mySerial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (mySerial.available()) {
    Serial.write(mySerial.read());
    
  }
  if (Serial.available()) {
    mySerial.write(Serial.read());
  }
}
