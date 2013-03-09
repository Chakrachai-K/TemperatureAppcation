

/*-----( Import libraries )-----*/
#include <OneWire.h>
#include <DallasTemperature.h>
#include <conio.h>
#include <stdio.h>

/*-----( Declare Constants )-----*/
#define ONE_WIRE_BUS 2 /*-(Connect to Pin 2 )-*/

/*-----( Declare objects )-----*/
/* Set up a oneWire instance to communicate with any OneWire device*/
OneWire ourWire(ONE_WIRE_BUS);

/* Tell Dallas Temperature Library to use oneWire Library */
DallasTemperature sensors(&ourWire);

/*-----( Declare Variables )-----*/


void setup() /*----( SETUP: RUNS ONCE )----*/
{
/*-(start serial port to see results )-*/
delay(1000);
Serial.begin(9600);
Serial.println("YourDuino.com: Electronic Brick Test Program");
Serial.println("Temperature Sensor DS18B20");
delay(1000);

/*-( Start up the DallasTemperature library )-*/
sensors.begin();
}/*--(end setup )---*/


void loop() /*----( LOOP: RUNS CONSTANTLY )----*/
{

  if(sensors.getTempCByIndex(0)>=40){
        delay(500);
    Serial.println("Alarm");
    sensors.requestTemperatures();
    Serial.print("> < Fire Mai Lewwww ");
    Serial.print(sensors.getTempCByIndex(0));
    Serial.println(" Degrees C Roan Markkkkk!!!!!");
   
  }else{
  
Serial.println();

 // Send the command to get temperatures


delay(500);

Serial.print("Temp: ");
sensors.requestTemperatures(); 
Serial.print(sensors.getTempCByIndex(0),4);
Serial.println(" Degrees C ");
Serial.println();

  }

}/* --(end main loop )-- */
  
/* ( THE END ) */

