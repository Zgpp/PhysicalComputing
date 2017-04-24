int solenoidOne=5;    //assign 1st Solenoid to pin 5
int ledOne=4;         //assign 1st LED to pin 4
int solenoidTwo=9;    //assign 2nd Solenoid to pin 9
int ledTwo=8;         //assign 2nd LED to pin 8
int solenoidThree=12; //assign 3rd Solenoid to pin 12
int ledThree=11;      //assign 3rd LED to pin 11

void setup(){
pinMode(solenoidOne,OUTPUT);    //define 1st Solenoid as an Output
pinMode(ledOne,OUTPUT);         //define 1st LED as an Ouput
pinMode(solenoidTwo,OUTPUT);    //define 2nd Solenoid as an Output
pinMode(ledTwo,OUTPUT);         //define 2nd LED as an Ouput
pinMode(solenoidThree,OUTPUT);  //define 3rd Solenoid as an Output
pinMode(ledThree,OUTPUT);       //define 3rd LED as an Ouput
Serial.begin(9600);
}

void loop(){
digitalWrite(solenoidOne,HIGH); //Opens 1st Solenoid
digitalWrite(ledOne,HIGH);      //1st LED is On
delay(1000); // 1 second delay
digitalWrite(solenoidOne,LOW); //Closes 1st Solenoid
digitalWrite(ledOne,LOW);       //1st LED is Off
delay(1000); // 1 second delay

digitalWrite(solenoidTwo,HIGH); //Opens 2nd Solenoid
digitalWrite(ledTwo,HIGH);      //2nd LED is On
delay(1000); // 1 second delay
digitalWrite(solenoidTwo,LOW); //Closes 2nd Solenoid
digitalWrite(ledTwo,LOW);      //2nd LED is Off
delay(1000); // 1 second delay

digitalWrite(solenoidThree,HIGH); //Opens 3rd Solenoid
digitalWrite(ledThree,HIGH);      //3rd LED is On
delay(1000); // 1 second delay 
digitalWrite(solenoidThree,LOW); //Closes 3rd Solenoid
digitalWrite(ledThree,LOW);      //3rd LED is Off
delay(1000); // 1 second delay
}
