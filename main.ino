const int pir = 2;

const int greenLED = 6;
const int yellowLED = 5;
const int redLED = 4;

const int buzzer = 8;

bool armed = false;

unsigned long lastTrigger = 0;
const unsigned long cooldown = 5000;

void setup() {
  Serial.begin(9600);

  pinMode(pir, INPUT);

  pinMode(greenLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  pinMode(redLED, OUTPUT);

  pinMode(buzzer, OUTPUT);

  Serial.println("System arming...");

  for (int i = 0; i < 10; i++) {
    digitalWrite(yellowLED, HIGH);
    delay(500);
    digitalWrite(yellowLED, LOW);
    delay(500);
  }

  armed = true;
  digitalWrite(greenLED, HIGH);

  Serial.println("System armed.");
}

void loop() {
  int motion = digitalRead(pir);

  if (armed && motion == HIGH) {

    if (millis() - lastTrigger >= cooldown) {

      lastTrigger = millis();

      Serial.println("MOTION DETECTED!");

      digitalWrite(redLED, HIGH);
      digitalWrite(greenLED, LOW);

      tone(buzzer, 1000, 500);

      delay(1000);

      digitalWrite(redLED, LOW);
      digitalWrite(greenLED, HIGH);
    }
  }
}
