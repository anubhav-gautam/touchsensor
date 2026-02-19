#include <Arduino.h>
int touchPin = 3;
void setup() {
    pinMode(touchPin, INPUT);
    pinMode(LED_BUILTIN, OUTPUT);
    Serial.begin(9600);
}

void loop() {
    int state = digitalRead(touchPin);
    if (state == HIGH) {
        digitalWrite(LED_BUILTIN, HIGH);
        ....Serial.println("Touch");
    else {
    }

}