#include "NavComData.h"

unsigned long previousMillis = 0;
const long interval = 50; 

  NavComData nav1("NAV1");
  NavComData com1("COM1");

void setup() {
 

}

void loop() {

  nav1.stepUpKhz();
  com1.stepUpKhz();

  unsigned long currentMillis = millis();
  if (currentMillis - previousMillis >= interval) {
    previousMillis = currentMillis;


  }
}
