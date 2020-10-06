#include <SD.h>
#include <SPI.h>

File SDlog;
String serial;

void setup() {
  Serial.begin(38400);
  Serial1.begin(38400);
  SD.begin(5);
  delay(2000);
  SDlog = SD.open("log.txt", FILE_WRITE);
}

void loop() {
  while (Serial1.available()) {
    serial = Serial1.readString();
    SDlog = SD.open("log.txt", FILE_WRITE);
    SDlog.println(serial);
    SDlog.close();
  }
}
