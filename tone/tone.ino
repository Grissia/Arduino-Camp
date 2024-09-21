int Buzzer = 10;
int Do = 262, Do_ = 272, Re = 294, Re_ = 311, Mi = 330;
int Fa = 349, Fa_ = 370, Sol = 392, Sol_ = 415, La = 440, La_ = 466, Si = 494;


void setup() {
  pinMode(Buzzer, OUTPUT);
}
void song(){
  tone(Buzzer, Re, 500);
  delay(500);
  tone(Buzzer, Re, 500);
  delay(500);
  tone(Buzzer, Si, 500);
  delay(500);
  tone(Buzzer, La, 500);
  delay(500);

  tone(Buzzer, Sol, 500);
  delay(500);
  tone(Buzzer, Re, 500);
  delay(1500);
  
  tone(Buzzer, Re, 500);
  delay(500);
  tone(Buzzer, Re, 500);
  delay(500);
  tone(Buzzer, Si, 500);
  delay(500);
  tone(Buzzer, La, 500);
  delay(500);

  tone(Buzzer, Sol, 500);
  delay(500);
  tone(Buzzer, Re, 500);
  delay(1500);

  tone(Buzzer, Re, 500);
  delay(500);
  tone(Buzzer, Re, 500);
  delay(500);
  tone(Buzzer, Do*2, 500);
  delay(500);
  tone(Buzzer, Si, 500);
  delay(500);  

  tone(Buzzer, La, 500);
  delay(500);
  tone(Buzzer, Fa, 500);
  delay(1500);

  tone(Buzzer, Re*2, 500);
  delay(500);
  tone(Buzzer, Re*2, 500);
  delay(500);
  tone(Buzzer, Re*2, 500);
  delay(500);
  tone(Buzzer, Do*2, 500);
  delay(500);

  tone(Buzzer, Sol, 500);
  delay(500);
  tone(Buzzer, La, 500);
  delay(500);

  return;
}
void loop() {
  song();
  delay(2000);
}
