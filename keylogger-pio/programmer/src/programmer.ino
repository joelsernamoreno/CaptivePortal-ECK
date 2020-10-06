/* From https://github.com/AprilBrother/cactus-micro-r2/tree/master/libraries/CactusMicro/examples/esp8266Programmer */

/**************************************************
 * Simple pass-through serial flash programmer 
 * programming the ESP32 by an Arduino
 * 
 * This resembles the comfortable DTS controlled 
 * programming mode one have with an FTDI or similiar
 * serial connection cable, where no manual reset of
 * the ESP is needed to upload code and run it.
 * Unfortunately there is no RTS/DTS control on the
 * Arduino Serial library, so we solely rely on timing.
 *
 * If the esptool does not wait or retry long enough, 
 * you have to press the reset button
 *
 * Transmissions from the ESP are passed without any
 * modification.
 *
 *
 ***************************************************/


/*
 * connection table:
 * ESP32    32U4
 * RX       TX
 * TX       RX
 * GND      GND
 * 
 */

void setup() {
    Serial1.begin(115200);
    Serial.begin(115200);
    while(!Serial);
    Serial.println("ESP32 programmer ready.");
}

void loop() {
    if(Serial.available()) {
        Serial1.write(Serial.read());
    }

    if(Serial1.available()) {
        Serial.write(Serial1.read());
    }
}

