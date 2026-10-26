const int ledPin = 9; // Define the digital pin where your LED Positive pin is connected

void setup() {
  pinMode(ledPin, OUTPUT); // Initialize the digital pin as an output
}

void loop() {
  digitalWrite(ledPin, HIGH);   // Turn the LED on
  delay(1000);                  // Wait for 1 second
  digitalWrite(ledPin, LOW);    // Turn the LED off
  delay(1000);                  // Wait for 1 second
}

