int startValue = 5;
int ledPin = 13;

void flashLED(int times){
  for(int i = 0; i< times; i++){
    digitalWrite(ledPin, HIGH);
    delay(1000);
     digitalWrite(ledPin, LOW);
    delay(1000);
  }
}
 

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);

  Serial.println("=== Smart Countdown Starting ===");

  int count = startValue;
  while(count > 0){
    Serial.print("Count: ");
    Serial.println(count);

    flashLED(count);

    delay(1000);
    count = count - 1;
  }
  Serial.println("=== Countdown Complete ===");

  digitalWrite(ledPin, HIGH);
  delay(5000);
  digitalWrite(ledPin, LOW);

}


void loop() {}
