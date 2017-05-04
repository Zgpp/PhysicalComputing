int switchState = 0;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(2, INPUT);
pinMode(8, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
switchState = digitalRead(2);
if(switchState == HIGH) {
  digitalWrite(8,HIGH);
} else {
  digitalWrite(8,LOW);
}
}
