
// constants won't change. Used here to 
// set pin numbers:
const int DS = 0;     // this is the serial data out pin
const int SHCP = 2;   // this is the serial clock pin
const int STCP = 1;   // this is the latch pin

void setup() {
  // set the address pins to outputs
  pinMode(DS, OUTPUT);  
  pinMode(SHCP, OUTPUT);  
  pinMode(STCP, OUTPUT);  
}

void loop()
{
  byte x;
  
  for (x = 0; x < 256; x++) {         // cycle through all possible data values in one byte
    digitalWrite(STCP, LOW);          // set the latch pin low in preparation to output data
    shiftOut(DS, SHCP, MSBFIRST, x);  // shift out the output data
    digitalWrite(STCP, HIGH);         // set the latch line high to shift the data out 
    delay(1000);                      // wait 1 second
  }
}

