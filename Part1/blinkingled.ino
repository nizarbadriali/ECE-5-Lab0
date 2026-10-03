// This is a comment, everything after the // gets ignored by the Arduino
// assign a value of 13 to the integer variable led
int led = 13;

// setup() function runs once when the Arduino turns on or is reset
void setup() {                
  // initialize the digital pin as output. 
  // assign variable led (pin 13) as this output
  pinMode(led, OUTPUT);     
}

// loop() function runs the code inside repeatedly while Arduino is still on
void loop() {
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(2000);             // wait for two seconds (2000 milliseconds)
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(2000);             // wait for a second (1000 milliseconds)
}
