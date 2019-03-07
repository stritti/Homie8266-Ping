#include <Arduino.h>
#include "PingNode.hpp"

PingNode pingNode("ping", "Ping");

void setup() {
  Serial.begin(115200);

  while (!Serial) {
    ;  // wait for serial port to connect. Needed for native USB port only
  }

  Homie_setFirmware("ping-demo", "1.0.0");  // The underscore is not a typo! See Magic bytes

  Homie.setup();
  Homie.getLogger() << F("✔ main: Setup ready") << endl;
}

void loop() {
  // put your main code here, to run repeatedly:
  Homie.loop();
}
