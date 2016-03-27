#include <Servo.h>

int ledPin = 2;
int buttonPin = 3;
int sensorPin = A0;
int servoPin = 5;
Servo servo;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT); //ledPin setup
  pinMode(buttonPin, INPUT); //buttonPin setup
  pinMode(sensorPin, INPUT);
  servo.attach(servoPin);
  servo.write(0);

  Serial.begin(9600); //serial communication setup
}

void loop() {
  // put your main code here, to run repeatedly:
  int buttonState = digitalRead(buttonPin); //read the state of buttonPinlo o9;
  int sensorValue = analogRead(sensorPin);

  //  Serial.println(buttonState); //print buttonPin state through serial
  Serial.println(sensorValue);

  if (sensorValue > 750) {
    digitalWrite(ledPin, HIGH);
    servo.write(180);
  } else if ( buttonState == 1 ) {
    digitalWrite(ledPin, HIGH);
    servo.write(90);
  }
  else {
    digitalWrite(ledPin, LOW);
    servo.write(0);
  }
}
