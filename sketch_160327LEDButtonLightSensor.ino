int ledPin = 2; //LEDとつながっているピン
int buttonPin = 3; //ボタンとつながっているピン
int sensorPin = A0; //光センサとつながっているピン

void setup() {
  pinMode(ledPin, OUTPUT); //ledPinを出力ピンとして設定
  pinMode(buttonPin, INPUT); //buttonPinを入力ピンとして設定
  pinMode(sensorPin, INPUT); //sensorPinを入力ピンとして設定
  Serial.begin(9600); //シリアル通信をbaudrate=9600で開始
}

void loop() {
  int buttonState = digitalRead(buttonPin); 
  //buttonStateにbuttonPinの電圧値を代入(0:LOW or 1:HIGH)
  int sensorValue = analogRead(sensorPin);
  //sensorValueにsensorPinの電圧値を代入(0 ~ 1023)

  //  Serial.println(buttonState); 
  Serial.println(sensorValue); //sensorValueをシリアルで出力

 if (buttonState  == 1) { //buttonが押されていたら
    digitalWrite(ledPin, HIGH); //LED点灯
  }
  else if (sensorValue > 750){ //光センサの値が一定以上なら
    digitalWrite(ledPin, HIGH); //LED点灯
 }
  else { //それいがい
    digitalWrite(ledPin, LOW); //LED消灯
  }
}

