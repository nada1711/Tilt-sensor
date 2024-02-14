const int sensorPin = A0;  // Analog input pin for sensor
const int motorPin = 9;    // Digital output pin for motor

void setup() {
  pinMode(motorPin, OUTPUT);  // Set motor pin as output
}

void loop() {
  int sensorValue = analogRead(sensorPin);  // Read sensor value
  int motorSpeed = map(sensorValue, 0, 1023, 0, 255);  // Map sensor value to motor speed range (0-255)
  analogWrite(motorPin, motorSpeed);  // Set motor speed
}
