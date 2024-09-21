void setup() {
  Serial.begin(9600);
  Serial.print("STARTED\n");

}
int n = 1;
void loop() {
  Serial.print("現在我有");
  Serial.print(n);
  Serial.print("元\n");
  n++;
}
