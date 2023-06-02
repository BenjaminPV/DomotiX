
int oldSwitchState = 0;
int oldLEDState = LOW;

void setup() {
  // put your setup code here, to run once:
pinMode(2, INPUT);
pinMode(3, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int switchState = digitalRead(2);

if ((switchState == HIGH) && (oldSwitchState == LOW)) {

  if (oldLEDState == LOW) {
    digitalWrite(3, HIGH);
    oldLEDState = HIGH;
  } else {
    digitalWrite(3, LOW);
    oldLEDState = LOW;
  }
  
}


oldSwitchState = switchState;
delay(50);


}
