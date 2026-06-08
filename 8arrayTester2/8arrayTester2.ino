// TekModules Digital 8-Array Sensor Rev2
// Basic 8-channel digital sensor test for Arduino UNO

const int sensorPins[8] = {2, 3, 4, 5, 6, 7, 8, 9};

void setup() {
  Serial.begin(9600);

  for (int i = 0; i < 8; i++) {
    pinMode(sensorPins[i], INPUT);
  }
}

void loop() {
  for (int i = 0; i < 8; i++) {
    int value = digitalRead(sensorPins[i]);
    Serial.print(value);

    if (i < 7) {
      Serial.print('\t');
    }
  }

  Serial.println();
  delay(200);
}
