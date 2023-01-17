//22AIML028

#include "DHT.h"
#define DHTPIN 2     // what pin we're connected to
#define DHTTYPE DHT11   // DHT 11
DHT dht(DHTPIN, DHTTYPE);
#if defined(ARDUINO_ARCH_AVR)
#define SERIAL  Serial
#elif defined(ARDUINO_ARCH_SAMD) ||  defined(ARDUINO_ARCH_SAM)
#define SERIAL  SerialUSB
#else
#define SERIAL  Serial
#endif
void setup()
{
    SERIAL.begin(115200);
    SERIAL.println("DHT11 test!");
    Wire.begin();
    dht.begin();
}
void loop()
{
    float temp_hum_val[2] = {0};
    if(!dht.readTempAndHumidity(temp_hum_val)){
        SERIAL.print("Humidity: ");
        SERIAL.print(temp_hum_val[0]);
        SERIAL.print(" %\t");
        SERIAL.print("Temperature: ");
        SERIAL.print(temp_hum_val[1]);
        SERIAL.println(" *C");
    }
    else{
       SERIAL.println("Failed to get temprature and humidity value.");
    }

   delay(1500);
}

//22AIML028