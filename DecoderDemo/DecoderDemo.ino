/* Blink without Delay
 
 Turns on and off a light emitting diode(LED) connected to a digital  
 pin, without using the delay() function.  This means that other code
 can run at the same time without being interrupted by the LED code.
 
 The circuit:
 * LED attached from pin 13 to ground.
 * Note: on most Arduinos, there is already an LED on the board
 that's attached to pin 13, so no hardware is needed for this example.
 
 
 created 2005
 by David A. Mellis
 modified 8 Feb 2010
 by Paul Stoffregen
 
 This example code is in the public domain.

 
 http://www.arduino.cc/en/Tutorial/BlinkWithoutDelay
 */

// constants won't change. Used here to 
// set pin numbers:
const int address0 = 0;   
const int address1 = 1;
const int address2 = 2;

void setup() {
  // set the address pins to outputs
  pinMode(address0, OUTPUT);  
  pinMode(address1, OUTPUT);  
  pinMode(address2, OUTPUT);  
}

void loop()
{
  int x;
  
  for (x = 0; x < 8; x++) {
    if (x & b1) digitalWrite(address0, HIGH); else digitalWrite(address0, LOW);
    if (x & b01) digitalWrite(address1, HIGH); else digitalWrite(address1, LOW);
    if (x & b11) digitalWrite(address2, HIGH); else digitalWrite(address2, LOW);
    delay(1000);
  }
}

