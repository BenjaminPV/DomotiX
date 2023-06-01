
#include <OneWire.h>
#include <DallasTemperature.h>

const int sensorPin = 13; //pin conection sensor

OneWire oneWire(SENSOR_PIN);         // setup a oneWire instance
DallasTemperature tempSensor(&oneWire); // pass oneWire to DallasTemperature library

float temp;    // temperature


void setup()
{
  Serial.begin(9600); // initialize serial
  tempSensor.begin();    // initialize the sensor
}

void loop()
{
  readTemp();

  
}



void readTemp(){
  
  tempSensor.requestTemperatures();       // send the command to get temperatures
  temp = tempSensor.getTempCByIndex(0);  // read temperature in Celsius
  
  /*
  Serial.print("Temperature: ");
  Serial.print(temp);    // print temperature
  Serial.println("°C");
  */

  delay(500);
}
