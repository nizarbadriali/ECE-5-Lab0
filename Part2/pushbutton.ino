int buttonPin = ______;     // the number of the pushbutton pin
int ledPin = ______;      // the number of the LED pin

// variables will change:
int buttonState;         // variable for reading the pushbutton status
int ledState = LOW;	// variable to store the LED state: HIGH = on, LOW = off

void setup() {

  pinMode(___________, INPUT);     

  pinMode(___________, OUTPUT);     
 
 }

void loop(){
  // read the state of the pushbutton value:
  buttonState = digitalRead( buttonPin );

  // If the button has been pressed, and the LED is OFF
  if (buttonState == __________ && ledState == LOW) {     
    // turn LED on:    
    digitalWrite(__________ , __________ ); 
    ledState = __________;
  } 

  //If the button has been pressed, and the LED is ON
  else if (buttonState == __________ && ledState == HIGH) {    
    // turn LED off:
    digitalWrite(__________, __________); 
    ledState =  __________;
  }
  delay(100);   // delay in order to give some time to read the button press
		    //you can change this value and observe the difference
}
