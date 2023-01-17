//22AIML028

const int buttonPin = 22;
const int ledPin = 23;
const int suppl =19; 
const int groun =21;
const int buttonState =0;

 void setup() {
pinMode (ledPin, OUTPUT); 
pinMode (buttonPin, INPUT);
pinMode (suppl, OUTPUT);
pinMode(groun, OUTPUT);
digitalWrite(suppl, HIGH);
digitalWrite(groun, LOW);
} 

void loop()
{
buttonState = digitalRead(buttonPin);
if (buttonState ==  HIGH)
{
  digitalWrite(ledPin, HIGH);

} 
else 
{
  digitalWrite(ledPin, LOW);

}
}

//22AIML028