int ledPin = 2;
int buttonPin = 3;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT); //ledPin setup
  pinMode(buttonPin, INPUT); //buttonPin setup
  Serial.begin(9600); //serial communication setup
}

void loop() {
  // put your main code here, to run repeatedly:
  int buttonState = digitalRead(buttonPin); //read the state of buttonPin
  Serial.println(buttonState); //print buttonPin state through serial

  if (buttonState == 1) {
    digitalWrite(ledPin, HIGH);
  }
  else {
    digitalWrite(ledPin, LOW);
  }
}
