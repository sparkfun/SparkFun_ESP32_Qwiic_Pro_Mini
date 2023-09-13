/*
*/

uint8_t pin_button = 0;
uint8_t pin_statusLED = 0;
uint8_t pin_tx1 = 7;
uint8_t pin_rx1 = 8;

unsigned long lastChange = 0;

void setup()
{
  Serial.begin(115200); // Start serial for any initial debug messages

  pinMode(pin_button, INPUT_PULLUP);

  pinMode(pin_statusLED, OUTPUT);
  digitalWrite(pin_statusLED, LOW);

  pinMode(26, OUTPUT);
  digitalWrite(26, LOW);

  pinMode(25, OUTPUT);
  digitalWrite(25, HIGH);

  pinMode(33, OUTPUT);
  digitalWrite(33, HIGH);

  pinMode(32, OUTPUT);
  digitalWrite(32, LOW);

  pinMode(37, OUTPUT);
  digitalWrite(37, HIGH);

  pinMode(27, OUTPUT);
  digitalWrite(27, LOW);

  pinMode(14, OUTPUT);
  digitalWrite(14, HIGH);

  pinMode(13, OUTPUT);
  digitalWrite(13, LOW);

  pinMode(4, OUTPUT);
  digitalWrite(4, HIGH);

  pinMode(20, OUTPUT);
  digitalWrite(20, LOW);

  pinMode(19, OUTPUT);
  digitalWrite(19, HIGH);

  pinMode(22, OUTPUT);
  digitalWrite(22, LOW);

  pinMode(21, OUTPUT);
  digitalWrite(21, HIGH);

  pinMode(pin_tx1, OUTPUT);
  digitalWrite(pin_tx1, LOW);

  pinMode(pin_rx1, OUTPUT);
  digitalWrite(pin_rx1, HIGH);
}

void loop()
{
  Serial.println("Running");

  if (millis() - lastChange > 3000)
  {
    lastChange = millis();
    digitalWrite(pin_statusLED, !digitalRead(pin_statusLED));

    digitalWrite(26, !digitalRead(26));
    digitalWrite(25, !digitalRead(25));

    digitalWrite(33, !digitalRead(33));
    digitalWrite(32, !digitalRead(32));
    digitalWrite(37, !digitalRead(37));
    digitalWrite(27, !digitalRead(27));
    digitalWrite(14, !digitalRead(14));
    digitalWrite(13, !digitalRead(13));
    digitalWrite(4, !digitalRead(4));
    digitalWrite(20, !digitalRead(20));
    digitalWrite(19, !digitalRead(19));
    digitalWrite(22, !digitalRead(22));
    digitalWrite(21, !digitalRead(21));

    digitalWrite(pin_rx1, !digitalRead(pin_rx1));
    digitalWrite(pin_tx1, !digitalRead(pin_tx1));
  }

  if (digitalRead(pin_button) == LOW)
    Serial.println("Button pressed!");

  delay(100);

}
