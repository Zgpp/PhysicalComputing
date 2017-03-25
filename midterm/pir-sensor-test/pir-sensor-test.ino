int motion = 0; //motion sensor

void setup() {
Serial.begin(9600);

pinMode(2, OUTPUT); //blue led
pinMode(4, OUTPUT); //red led
pinMode(10, INPUT); //motion sensor pin
}

void loop() {
motion = digitalRead(10);
if(motion == HIGH){
  digitalWrite(blueLED,HIGH); //start flashing led
  delay(100);
  digitalWrite(redLED,HIGH); //start flashing led
  delay(100);
  }else {
    digitalWrite(blueLED,LOW);
    digitalWrite(redLED,LOW);
    }
}
