#include <IRremote.h>
#include <IRremoteInt.h>

int IRPin = A0;
IRrecv IR(IRPin);
decode_results results;
int GLED = 11;
int GLevel = 20;
int KG = 2;

void setup() {
  Serial.begin(9600);
  IR.enableIRIn();
  pinMode(GLED, OUTPUT);
}

void loop() {
  if(IR.decode(&results)){
    if(results.value==0xFFA25D){
      analogWrite(GLED, 20);
    }
    if(results.value==0xFF629D){
      analogWrite(GLED, 0);
    }
    if(results.value==0xFF18E7){
      GLevel += KG;
      if(GLevel > 255){
        GLevel = 255;
      }
      analogWrite(GLED, GLevel);
    }
    if(results.value==0xFF4AB5){
      GLevel -= KG;
      if(GLevel < 0){
        GLevel = 0;
      }
      analogWrite(GLED, GLevel);
    }
    IR.resume();
  }
}
