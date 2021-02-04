#include <TM1637Display.h>

uint8_t pinClk=A5;
uint8_t pinDIO=A4;
TM1637Display display(pinClk, pinDIO);

void setup() {
  // put your setup code here, to run once:

display.setSegments(4, 4, 0);
display.setBrightness(7, true); //brightness 0-7, on
display.clear();
}

int num=0;
void loop() {
  // put your main code here, to run repeatedly:
//display.clear();
display.showNumberDec(num); 
num++;
delay(100);

}
