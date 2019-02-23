float s;
const int seletor = A3; 
const int Bar_Y2 = A5;
const int Bar_R = A4;
const int lm35 = A0;

float ler_sensor() {
  return analogRead(lm35);
}

void setup() {
  Serial.begin(9600);
  Serial.println("i");
  pinMode(Bar_R, OUTPUT);
  pinMode(Bar_Y2, OUTPUT);
  pinMode(seletor, OUTPUT);
  pinMode(lm35, INPUT);
  digitalWrite(seletor, HIGH);
}

void loop() {
  s = ler_sensor();
  
  if (s > 60) {
    digitalWrite(Bar_R, HIGH);
    digitalWrite(Bar_Y2, LOW);
  } else {
    digitalWrite(Bar_Y2, HIGH);
    digitalWrite(Bar_R, LOW);
  }
}
