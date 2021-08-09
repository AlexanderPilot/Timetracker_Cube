//Einbinden von Bibliotheken
#include <Arduino.h>
#include "GY521.h" //Library for Gyro-Sensor
#include "RTClib.h"


//Definition globale Variablen


//Definition Objekte
GY521 gyro(0x69);

//Definition Funktionen

void setup()
{
    //Initialisiere I2C
    Wire.begin();
    //Initialisiere Gyro-Sensor
    while (sensor.wakeup() == false)
    {
        Serial.print(millis());
        Serial.println("\tCould not connect to GY521");
        delay(1000);
    }

    //Initialisiere OLED

    //Initialisierung RTC

    //Initialisiere Batterie-Monitoring

    //Starte WiFi
    SSID = "SSID";
    PW = "PW";
    WiFi.begin(SSID. PW);

    //Initialisiere Webserver

    //Initialisiere Datenbank

    //Lesen EEPROM Daten

}

void loop() {
    //Definition von Variabelen
    
    //Wakeup aus Deep Sleep

    //Prüfe Würfel-Ausrichtung
    sensor.read();
    float pitch = sensor.getPitch();
    float roll  = sensor.getRoll();
    float yaw   = sensor.getYaw();
        //Stellung 0 --> gehe in Deep Sleep
        //Stellung 1-6 --> Anwendungen
            //Zählen der Dauer der Würfelstellung

    //Speichern der Daten in EEPROM

}
