
int oldSwitchState = 0;
int oldLEDState = LOW;

void setup() {
  
  pinMode(2, INPUT);
  pinMode(3, OUTPUT);
}

void loop() {
  
  int switchState = digitalRead(2);

  if ((switchState == HIGH) && (oldSwitchState == LOW)) {

    if (oldLEDState == LOW) {
      digitalWrite(3, HIGH);//turn on led
      oldLEDState = HIGH;
    }
  
  }   
  else {
    digitalWrite(3, LOW);//turn off led
    oldLEDState = LOW;
  }
  



  oldSwitchState = switchState;
  delay(50);


}
