const int SOUND_PIN = A0;
const int LED_PIN = 6;
const int SOUND_THRES= 52;

void setup() {
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int soundLevel = analogRead(SOUND_PIN);

  Serial.println(soundLevel);

  if (soundLevel > SOUND_THRES) {
    digitalWrite(LED_PIN, HIGH);
  } else {
    digitalWrite(LED_PIN, LOW);
  }

  delay(10);
}
