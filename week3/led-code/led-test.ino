int yellow=13;
int green=9;
int blue=4;


void setup() { 
  // the setup routine runs once when you press reset:              
  // initialize the digital pin as an output.
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT); 
}

  // put your main code here, to run repeatedly:
  // the loop routine runs over and over again forever:
void loop() {
  digitalWrite(yellow, HIGH);   // turn the LED on
  delay(250);                   // wait for a second
  digitalWrite(yellow, LOW);    // turn the LED off
  delay(250); 
  {digitalWrite(green, HIGH);
  delay(250);
  digitalWrite(green, LOW);
  delay(250);}
  {digitalWrite(blue, HIGH);
  delay(250);
  digitalWrite(blue, LOW);
  delay(250);}
}

