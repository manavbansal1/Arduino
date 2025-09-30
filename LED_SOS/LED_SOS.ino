void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);

}

void loop() {
  int pinNumber = 13;

  // put your main code here, to run repeatedly:
  // Code for S
  for (int i=0; i< 3; i++){
    digitalWrite(pinNumber, HIGH);
    delay(100);
    digitalWrite(pinNumber, LOW);
    delay(100);
  }

  delay(1000);
  // Code for O on LED
  for (int i=0; i< 3; i++){
    digitalWrite(pinNumber, HIGH);
    delay(500);
    digitalWrite(pinNumber, LOW);
    delay(500);
  }
  delay(1000);
  // Again code for S
  for (int i=0; i< 3; i++){
    digitalWrite(pinNumber, HIGH);
    delay(100);
    digitalWrite(pinNumber, LOW);
    delay(100);
  }

  // Pause after SOS
  delay(3000);

}
