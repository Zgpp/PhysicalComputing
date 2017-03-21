void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available() > 0) {
    char letter = Serial.read(); 

    Serial.print("Plain serial print character"); //prints letter as single character
    Serial.println(letter);
    Serial.print("printing character to integer "); //number (machine) conversion; this becomes crucial when you're starting to look at messages (tokens, letters)
    Serial.println(letter, DEC); //DEC converts print statement to decimal

    //You can check for the character or the ASCII number
    if(letter == 'a' || letter == 97){
      Serial.println("97 represents the letter a");
    }
  }

}
