const int RED = 8;
const int YELLOW = 9;
const int GREEN = 10;
const int BUZZER = 11;

void setup() {
  pinMode(RED, OUTPUT);
  pinMode(YELLOW, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(BUZZER, OUTPUT);
}

void loop() {

  // green LED
  digitalWrite(GREEN, HIGH);
  delay(3000);
  digitalWrite(GREEN, LOW);

  // yellow LED
  digitalWrite(YELLOW, HIGH);
  delay(1000);
  digitalWrite(YELLOW, LOW);

  // red LED
  digitalWrite(RED, HIGH);

  // buzzer
  for(int i = 0; i < 6; i++) {
    digitalWrite(BUZZER, HIGH);
    delay(250);

    digitalWrite(BUZZER, LOW);
    delay(250);
  }

  digitalWrite(RED, LOW);
}
