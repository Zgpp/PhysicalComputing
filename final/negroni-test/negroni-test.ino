int solenoidOne=5;    //assign 1st Solenoid to pin 5
int ledOne=4;         //assign 1st LED to pin 4
int solenoidTwo=9;    //assign 2nd Solenoid to pin 9
int ledTwo=8;         //assign 2nd LED to pin 8
int solenoidThree=12; //assign 3rd Solenoid to pin 12
int ledThree=11;      //assign 3rd LED to pin 11

void setup(){
pinMode(solenoidOne,OUTPUT);    //define 1 Solenoid as an Output
pinMode(ledOne,OUTPUT);         //define 1 LED as an Ouput
pinMode(solenoidTwo,OUTPUT);    //define 2 Solenoid as an Output
pinMode(ledTwo,OUTPUT);         //define 2 LED as an Ouput
pinMode(solenoidThree,OUTPUT);  //define 3 Solenoid as an Output
pinMode(ledThree,OUTPUT);       //define 3 LED as an Ouput
Serial.begin(9600);
}

void loop(){
digitalWrite(solenoidOne,HIGH); //Opens 1 Solenoid
digitalWrite(ledOne,HIGH);      //1 LED is On
delay(1000); // 1 second delay
digitalWrite(solenoidOne,LOW); //Closes 1 Solenoid
digitalWrite(ledOne,LOW);       //1 LED is Off
delay(1000); // 1 second delay

//digitalWrite(solenoidTwo,HIGH); //Opens 2 Solenoid
//digitalWrite(ledTwo,HIGH);      //2 LED is On
//delay(1000); // 1 second delay
//digitalWrite(solenoidTwo,LOW); //Closes 2 Solenoid
//digitalWrite(ledTwo,LOW);      //2 LED is Off
//delay(1000); // 1 second delay

//digitalWrite(solenoidThree,HIGH); //Opens 3 Solenoid
//digitalWrite(ledThree,HIGH);      //3 LED is On
//delay(1000); // 1 second delay 
//digitalWrite(solenoidThree,LOW); //Closes 3 Solenoid
//digitalWrite(ledThree,LOW);      //3 LED is Off
//delay(1000); // 1 second delay
}
