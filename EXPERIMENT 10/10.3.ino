//22AIML028

int sensorPin = 2;    // select the input pin for the potentiometer
int ledPin = 15;      // select the pin for the LED
int sensorValue = 0;  // variable to store the value coming from the sensor
int suppl = 23;

void setup() {
  // declare the ledPin as an OUTPUT:
  pinMode(ledPin, OUTPUT);
  pinMode(suppl,OUTPUT);
  Serial.begin(115200); 
  digitalWrite(suppl,HIGH);
}

void loop() {
  // read the value from the sensor:
  sensorValue = analogRead(sensorPin);
  Serial.println(sensorValue);
  if (sensorValue<1500)
    {
        digitalWrite(ledPin, HIGH);
      }
   else
   {
      digitalWrite(ledPin, LOW);
    }
  
  // turn the ledPin on
  // stop the program for <sensorValue> milliseconds:
  // turn the ledPin off:
  // stop the program for for <sensorValue> milliseconds:
  delay(1000);
}

//22AIML028