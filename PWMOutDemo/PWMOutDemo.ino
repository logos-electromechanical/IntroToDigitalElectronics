

const int sensorPin = A1;    // potentiometer input pin (note different numbering for analog input)
const int ledPin = 1;        // this is the pin for the built-in LED
int sensorValue = 0;         // variable to store the value coming from the sensor

void setup() {
  // declare the ledPin as an OUTPUT:
  pinMode(ledPin, OUTPUT);  
}

void loop() {
  // read the value from the sensor:
  sensorValue = analogRead(sensorPin);    
  // write the output to the LED
  analogWrite(ledPin, map(sensorValue, 0, 1023, 0, 255));
  delay(10);
}
