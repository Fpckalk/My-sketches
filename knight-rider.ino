/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */

int pins[] = { 2, 3, 4, 5, 6 };
int i = 0;
int timer = 25;

// the setup routine runs once when you press reset:
void setup() {
  
  // initialize the digital pins as an output.
  for( int i=0;i<5;i++ ) {
    pinMode(pins[i], OUTPUT);
  }
  
}

// the loop routine runs over and over again forever:
void loop() {
  
  for( i=0; i<5; i++ ) {
    digitalWrite(pins[i], HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(timer);               // wait for a second
    digitalWrite(pins[i], LOW);    // turn the LED off by making the voltage LOW
    delay(timer); 
  }
  
  for ( i=4; i>=0; i-- ) {
    digitalWrite(pins[i], HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(timer);               // wait for a second
    digitalWrite(pins[i], LOW);    // turn the LED off by making the voltage LOW
    delay(timer); 
  }
  
}
