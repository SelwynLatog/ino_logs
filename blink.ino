const int LED_PIN = 6;

void setup(){
    pinMode(LED, OUTPUT);
}

void loop(){
    digitalWrite(LED_PIN,HIGH);
    delay(3000);
    digitalWrite(LED_PIN,LOW);
    delay(3000);
}
