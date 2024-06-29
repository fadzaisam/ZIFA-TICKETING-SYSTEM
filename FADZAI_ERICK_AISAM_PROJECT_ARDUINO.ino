
int ledPin = D0;
int IR = D2;

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  // make the pushbutton's pin an input:
  pinMode(IR, INPUT);
  pinMode(ledPin, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input pin:
  int IRState = digitalRead(IR);
  
  // print out the state of the button:
  

  //else if (IRState == HIGH){

   // Serial.println("Please Check In");
  //digitalWrite(ledPin, LOW);
  //delay(1000);        // delay in between reads for stability

    
  //}
  if (IRState == LOW)
  {
    Serial.print(" Check In : ");
    Serial.println(1);
    digitalWrite(ledPin, HIGH);
    delay(1000);        // delay in between reads for stability
  }
  
}
