float Rs = 991;
float A1val;
double VDUT, Vs, I, RDUT;

void setup() {
  Serial.begin(9600);
}

void loop() {
  A1val = analogRead(A1);
  Vs = (5.0/1023)*A1val;
  VDUT = 5-Vs;
  I = Vs/Rs;
  RDUT = VDUT/I;

  Serial.print("A1val:\t");
  Serial.print(A1val,0);
  Serial.print("\n");

  Serial.print("Vs:\t");
  Serial.print(Vs,4);
  Serial.print(" V\n");

  Serial.print("VDUT:\t");
  Serial.print(VDUT,4);
  Serial.print(" V\n");

  Serial.print("I:\t");
  Serial.print(I*1000,4);
  Serial.print(" mA\n");

  Serial.print("RDUT:\t");
  Serial.print(RDUT,0);
  Serial.print(" ohm\n");
  Serial.println("=======================");
  delay(1000);
}
