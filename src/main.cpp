#include <Arduino.h>


#define STANDART_BAUDRATE 9600


void setup()
{
    Serial.begin(STANDART_BAUDRATE);
}


void loop()
{
    Serial.println("Hi, bis in einer Sekunde");
    delay(1000);
}