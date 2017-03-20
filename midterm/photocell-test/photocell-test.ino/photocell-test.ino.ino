int blueLedPin = 2;
int redLedPin = 3;
int greenLedPin = 4;

int lightSensorPin = A0;
int analogValue = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(blueLedPin, OUTPUT);
  pinMode(redLedPin,OUTPUT);
  pinMode(greenLedPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogValue = analogRead(lightSensorPin);
  if(analogValue < 50){            
    digitalWrite(blueLedPin, HIGH);
  }
  else if(analogValue >= 50 && analogValue <= 100){
    digitalWrite(redLedPin, HIGH);
  }
  else{
    digitalWrite(greenLedPin, HIGH);
  }
  delay(100);
  digitalWrite(blueLedPin, LOW);
  digitalWrite(redLedPin, LOW);
  digitalWrite(greenLedPin, LOW);

}
