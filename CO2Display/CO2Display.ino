#include <TM1637Display.h>
#include <SomeSerial.h> //https://github.com/asukiaaa/SomeSerial
#include <MHZ.h> //https://github.com/tobiasschuerg/MH-Z-CO2-Sensors

uint8_t pinClk=A5;
uint8_t pinDIO=A4;
TM1637Display display(pinClk, pinDIO);
//SomeSerial someSerial(10, 11); // RX, TX
#define CO2_IN 9
// pin for uart reading
#define MH_Z14_RX 10
#define MH_Z14_TX 11

MHZ co2(MH_Z14_RX, MH_Z14_TX, CO2_IN, MHZ14A);

void setup() {
  // put your setup code here, to run once:

display.setSegments(4, 4, 0);
display.setBrightness(4, true); //brightness 0-7, on
display.clear();
//someSerial.begin(115200);
Serial.begin(115200);

}

int ReadSensor();
int num=0;
void loop() {
//  if(someSerial.available()) Serial.println(someSerial.read());
  // put your main code here, to run repeatedly:
//display.clear();
display.showNumberDec(num); 
num++;
delay(100);

}
