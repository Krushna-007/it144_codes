//22AIML028

#include "Ultrasonic.h"

Ultrasonic ultrasonic(2); // Output Pin
void setup() {
    Serial.begin(9600); //9600 MHz band
}
void loop() {
    long RangeInInches;
    long RangeInCentimeters;

    Serial.println("The distance to obstacles in front is: ");
    RangeInInches = ultrasonic.MeasureInInches();
    Serial.print(RangeInInches);//0~157 inches
    Serial.println(" inch");
    delay(2000);

    RangeInCentimeters = ultrasonic.MeasureInCentimeters(); // two measurements should keep an interval
    Serial.print(RangeInCentimeters);//0~400cm
    Serial.println(" cm");
    delay(2000);
}

//22AIML028