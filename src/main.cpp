#include <Arduino.h>
#include <SoftwareSerial.h>

SoftwareSerial miBT(10, 11); // pin 10 in TX bluetooth, pin 11 in RX bluetooth

char DATO = 0;

void setup()
{
    Serial.begin(9600);
    miBT.begin(9600);
}

void loop()
{
    //When receive data from app, app is BlueTooth Serial Controller
    if (miBT.available())
    { 
        char DATO = miBT.read();
        Serial.write(DATO);
    }
}
