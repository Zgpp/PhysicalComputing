int gin = 5;            //assign 1st Solenoid to pin 5
int ledOne = 4;         //assign 1st LED to pin 4
int campari = 9;        //assign 2nd Solenoid to pin 9
int ledTwo = 8;         //assign 2nd LED to pin 8
int sweetVermouth = 12; //assign 3rd Solenoid to pin 12
int ledThree = 11;      //assign 3rd LED to pin 11

void setup() {
  pinMode(gin, OUTPUT);               //define 1 Solenoid as an output
  pinMode(ledOne, OUTPUT);            //define 1 LED as an ouput
  pinMode(campari, OUTPUT);           //define 2 Solenoid as an output
  pinMode(ledTwo, OUTPUT);            //define 2 LED as an ouput
  pinMode(sweetVermouth, OUTPUT);     //define 3 Solenoid as an output
  pinMode(ledThree, OUTPUT);          //define 3 LED as an ouput
  Serial.begin(9600);
}

void loop() {
digitalWrite(gin,HIGH);           //Opens 1st Solenoid
digitalWrite(ledOne,HIGH);        //1st LED is ON
delay(5000);                      //5 second delay
digitalWrite(gin,LOW);            //Closes 1st Solenoid
digitalWrite(ledOne,LOW);         //1st LED is OFF
delay(5000);                      //5 second delay

digitalWrite(campari,HIGH);       //Opens 2nd Solenoid
digitalWrite(ledTwo,HIGH);        //LED 2 is ON
delay(5000);                      //5 second delay
digitalWrite(campari,LOW);        //Closes 2nd Solenoid
digitalWrite(ledTwo,LOW);         //2nd LED is OFF
delay(5000);                      //5 second delay

digitalWrite(sweetVermouth,HIGH); //Opens 3rd Solenoid
digitalWrite(ledThree,HIGH);      //3rd LED is ON
delay(5000);                      //5 second delay 
digitalWrite(sweetVermouth,LOW);  //Closes 3rd Solenoid
digitalWrite(ledThree,LOW);       //3rd LED is Off
delay(5000);                      //5 second delay
}


