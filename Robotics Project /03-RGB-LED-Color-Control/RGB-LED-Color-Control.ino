// Define PWM pins for each color
const int redPin = 11;
const int greenPin = 10;
const int bluePin = 9;

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() {
  // Primary Colors
  setColor(255, 0, 0);   // Red
  delay(1000);
  setColor(0, 255, 0);   // Green
  delay(1000);
  setColor(0, 0, 255);   // Blue
  delay(1000);

  // Mixed Colors
  setColor(255, 255, 0); // Yellow
  delay(1000);
  setColor(0, 255, 255); // Cyan
  delay(1000);
  setColor(255, 0, 255); // Magenta
  delay(1000);
  setColor(255, 255, 255); // White
  delay(1000);
}

void setColor(int redValue, int greenValue, int blueValue) {  // Custom function to set the RGB LED color
  analogWrite(redPin, redValue);
  analogWrite(greenPin, greenValue);
  analogWrite(bluePin, blueValue);
}
