const int stepPin = 3; // Y.STEP
const int dirPin = 6; // Y.DIR
// const int stepPin = 2; // X.STEP
// const int dirPin = 5; // X.DIR

void setup() {
  pinMode(stepPin, OUTPUT);
  pinMode(dirPin, OUTPUT);
}

void loop() {
  digitalWrite(dirPin, HIGH); 

  for(int x = 0; x < 200; x++) {
    digitalWrite(stepPin, HIGH); 
    delayMicroseconds(1000000);
    digitalWrite(stepPin, LOW); 
    delayMicroseconds(1000000);
  }
  delay(1000);

  digitalWrite(dirPin, LOW); 

  for(int x = 0; x < 200; x++) {
    digitalWrite(stepPin, HIGH); 
    delayMicroseconds(1000000);
    digitalWrite(stepPin, LOW); 
    delayMicroseconds(1000000);
  }
  delay(1000);
}
