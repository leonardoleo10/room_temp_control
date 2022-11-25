#include <Arduino.h>
#include <Wire.h>
#include <DS3231.h>
#include <DHT.h>

#define DHTPIN 2 //Pin to connect DHT sensor
#define DHTTYPE DHT11

//RTC object
DS3231 Rtc;
DHT Dht(DHTPIN, DHTTYPE);

float temp; //Actual temperature in celsius
byte hourOn, hourOff;


void setup() {

  Serial.begin(9600);
  Wire.begin();
  Dht.begin();

  
}

void loop() {
  


  temp = Dht.readTemperature();

}