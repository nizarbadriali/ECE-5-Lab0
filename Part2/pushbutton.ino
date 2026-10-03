int buttonPin = 2;     // the number of the pushbutton pin
int ledPin = 3;     // the number of the LED pin

// variables will change:
int buttonState;         // variable for reading the pushbutton status
int ledState = LOW;	// variable to store the LED state: HIGH = on, LOW = off

void setup() {

  pinMode(buttonPin, INPUT);     

  pinMode(ledPin, OUTPUT);     
 
 }

void loop(){
  // read the state of the pushbutton value:
  buttonState = digitalRead( buttonPin );

  // If the button has been pressed, and the LED is OFF
  if (buttonState == HIGH && ledState == LOW) {     
    // turn LED on:    
    digitalWrite(ledPin , HIGH ); 
    ledState = HIGH;
  } 

  //If the button has been pressed, and the LED is ON
  else if (buttonState == HIGH && ledState == HIGH) {    
    // turn LED off:
    digitalWrite(ledPin, LOW); 
    ledState =  LOW;
  }
  delay(100);   // delay in order to give some time to read the button press
		    //you can change this value and observe the difference
}
