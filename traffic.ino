
void setup() {
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop() {

  // Road A Green, Road B Red
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);

  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, HIGH);

  delay(5000);

  // Road A Yellow, Road B Red
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);

  delay(2000);

  // Road A Red, Road B Green
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);

  digitalWrite(7, LOW);
  digitalWrite(5, HIGH);

  delay(5000);

  // Road A Red, Road B Yellow
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);

  delay(2000);

  digitalWrite(4, LOW);
  digitalWrite(6, LOW);
}
