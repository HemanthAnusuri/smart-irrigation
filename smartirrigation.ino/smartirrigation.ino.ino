const int soilMoisturePin = A0;  // Analog pin
const int greenLEDPin = 6;
const int redLEDPin = 7;

void setup() {
  Serial.begin(9600);
  pinMode(greenLEDPin, OUTPUT);
  pinMode(redLEDPin, OUTPUT);
}

void loop() {
  int moistureValue = analogRead(soilMoisturePin);
  Serial.print("Moisture: ");
  Serial.println(moistureValue);

  if (moistureValue < 400) {
    digitalWrite(redLEDPin, HIGH);
    digitalWrite(greenLEDPin, LOW);
  } else {
    digitalWrite(redLEDPin, LOW);
    digitalWrite(greenLEDPin, HIGH);
  }

  delay(1000);