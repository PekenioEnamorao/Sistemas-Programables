#include <Adafruit_Sensor.h>

#include <DHT.h>
#define DHTTYPE DHT11

const int DHTPin=5;

DHT dht(DHTPin,DHTTYPE);

void setup() {
  Serial.begin(9600);
  Serial.println("Test");
  dht.begin();
  // put your setup code here, to run once:

}

void loop() {

  float h= dht.readHumidity();
  float t= dht.readTemperature();
  delay(2000);

if (isnan(h) | isnan(t)){
  Serial.println("Fallo la lectura del sensor");
  return;
}

  Serial.print("Humedad:");
  Serial.print(h);
  Serial.print("Temperatura:");
  Serial.print(t);
  Serial.print("\n");
  // put your main code here, to run repeatedly:

}
