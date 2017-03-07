#define transPin 3

int val;    // variable to read the value from the analog pin

void setup() {
  Serial.begin(9600);
  pinMode (transPin, OUTPUT);
}

void loop() {
  val = analogRead(A0);            // reads the value of the potentiometer (value between 0 and 1023)
  val = map(val, 0, 1023, 0, 180);
  Serial.println(val);
  analogWrite(transPin, val);
}

