// I used this as a goofy three button combination controller for my
// IoT integrated 'powerpoint' presentation
const int RED_BTN = 2;
const int WHITE_BTN = 3;
const int BLUE_BTN = 4;

void setup() {
  pinMode(RED_BTN, INPUT_PULLUP);
  pinMode(WHITE_BTN, INPUT_PULLUP);
  pinMode(BLUE_BTN, INPUT_PULLUP);

  Serial.begin(9600);
}

void loop() {
  if (!digitalRead(RED_BTN))
    Serial.print("R ");

  if (!digitalRead(WHITE_BTN))
    Serial.print("W ");

  if (!digitalRead(BLUE_BTN))
    Serial.print("B ");

  if (!digitalRead(RED_BTN) ||
      !digitalRead(WHITE_BTN) ||
      !digitalRead(BLUE_BTN))
    Serial.println();

  delay(100);
}
