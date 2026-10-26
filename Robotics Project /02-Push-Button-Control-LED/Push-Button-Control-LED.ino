const int buttonPin = 2; 
const int ledPin = 13;   

int buttonState = 0;

void setup() {
  pinMode(ledPin, OUTPUT); // LED pin as an output
  pinMode(buttonPin, INPUT_PULLUP); // pushbutton pin as an input with internal pull-up resistor
}

void loop() {
  buttonState = digitalRead(buttonPin); // Read the state of the pushbutton

  if (buttonState == LOW) {   // With INPUT_PULLUP, the pin reads LOW when the button is pressed
    digitalWrite(ledPin, HIGH);  // Turn LED on
  } 
  else {
    digitalWrite(ledPin, LOW);   // Turn LED off
  }
}
