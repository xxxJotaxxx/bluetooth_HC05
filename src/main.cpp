#include <Arduino.h>
#include <SoftwareSerial.h>

SoftwareSerial miBT(10, 11); // pin 10 in RX bluetooth, pin 11 in TX bluetooth

char DATO = 0;

void setup()
{
    Serial.begin(9600);
    miBT.begin(9600);
}

void loop()
{
    //When receive data from app
    if (miBT.available())
    { 
        char DATO = miBT.read();
        Serial.write(DATO);
    }
}