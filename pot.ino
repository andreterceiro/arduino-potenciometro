const int pot=A2;

void setup() {
  // put your setup code here, to run once:
  pinMode(pot, INPUT);
  Serial.begin(9600);
}

void loop() {
  double v1 = analogRead(pot);
  Serial.println(v1);
  delay(1000);
}
