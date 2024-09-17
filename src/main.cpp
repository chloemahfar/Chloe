#include <Arduino.h>

 void setup (){
    pinMode(LED_BUILTIN,OUTPUT);
}
void loop (){

    digitalWrite(LED_BUILTIN,HIGH); 
    delay(1000); //delay 1000 milli seconds 
    digitalWrite(LED_BUILTIN, LOW);
    delay(1000);

    }