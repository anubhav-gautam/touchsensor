#include <Arduino.h>
int touchPin = 3;
void setup() {
    pinMode(touchPin, INPUT);
    pinMode(LED_BUILTIN, OUTPUT);
    Serial.begin(9600);


}

void loop() {
// write your code here
}