const int Sensor = 2;  
const int motorPin = 9;    
void setup() {
  
  pinMode(Sensor, INPUT);  
  pinMode(motorPin, OUTPUT);      
 
}
void loop() {

   
  int sensorValue = analogRead(Sensor);  
  int motorSpeed = map(sensorValue, 0, 1023, 0, 255);
  
  if (Sensor == HIGH) {
    analogWrite(motorPin, motorSpeed);  
  }
  else {
    analogWrite(motorPin, 0);   
}
}
