


int buzzer = 13;
int sinyalPin = A0;
int control;


void setup() {

  Serial.begin(9600);
  pinMode(buzzer, OUTPUT);
  digitalWrite(sinyalPin, INPUT);
  //buzz(50);
  //buzz(50);
  //buzz(50);
  //delay(500);

}

void loop() {

  control = digitalRead(sinyalPin) ;

  if (control == HIGH) {
    Serial.println("Manyetik Alan Yok");
  }

  else {
    for (;;) {
      // buzz(50);
      // buzz(50);
      // buzz(50);
      digitalWrite(buzzer, HIGH);
      delay(50);
      digitalWrite(buzzer, LOW);
      delay(50);
      Serial.println("Manyetik Alan Tespid Edildi");
    }

  }

}

void buzz(unsigned char STime) {

  digitalWrite(buzzer, HIGH);
  delay(STime);
  digitalWrite(buzzer, LOW);
  delay(STime);


}
