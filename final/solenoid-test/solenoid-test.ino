int solenoid=5; //assign Solenoid to pin 5
int led=4;      //assign LED to pin 4

void setup(){
pinMode(solenoid,OUTPUT); //define Solenoid as an Output
pinMode(led,OUTPUT);      //define LED as an Output
Serial.begin(9600);
}

void loop(){
digitalWrite(solenoid,HIGH); //Opens Solenoid
digitalWrite(led,HIGH);  //LED is On
delay(1000); // 1 second delay
digitalWrite(solenoid,LOW); //Closes Solenoid
digitalWrite(led,LOW); //LED is Off
delay(1000); // 1 second delay
}
