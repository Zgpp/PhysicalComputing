int ledBluePin = 2; //the pin that the YES LED is connected to
int ledWhitePin = 4; //the pin that the NO LED is connected to 
int sensor = 10; //the pin that the motion sensor is connected to
int val = 0; //val equal to zero

void setup (){
Serial.begin(9600); //initialize serial
randomSeed(analogRead(0)); //this starts Arduinos random number generator
pinMode(ledBluePin, OUTPUT); //initalize LED as an output
pinMode(ledWhitePin, OUTPUT); //initalize LED as an output
pinMode(sensor, INPUT); //initialize sensor as an input
}

void loop () {
val = digitalRead(sensor); //read the state of the sensor

if (val == HIGH){ //motion is detected
digitalWrite(sensor, HIGH); //motion detected
Serial.println("Motion detected!");

for (int x=0; x <= 25; x++){ //alternates between White LED & Blue LED
analogWrite(ledBluePin, 255);
analogWrite(ledWhitePin, 0);
delay(500);
analogWrite(ledBluePin, 0);
analogWrite(ledWhitePin, 255);
delay(500);
}

int randNumber = random(100); //generate a random number

if(randNumber > 50) //if the randNumber is greater than 50
{ analogWrite(ledBluePin, 255); //set YES to High
analogWrite(ledWhitePin, 0); //set NO to Low
digitalWrite(sensor, LOW); //stop the motions sensor
Serial.println("Motion stopped!");
delay (3000); //hold for 3 seconds

}
else if(randNumber < 50) //if the randNumber is less than 50
{
analogWrite(ledWhitePin, 255); //set No to High
analogWrite(ledBluePin, 0); //set Yes to Low
digitalWrite(sensor, LOW); //stop the motions sensor
Serial.println("Motion stopped!");
delay (3000); //hold for 3 seconds
}
}
}
