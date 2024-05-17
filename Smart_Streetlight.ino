const int irSensorPin = 2; // IR sensor pin
const int ledPin = 9;      // LED pin
int fadeStep = 5;          // Step size for fading (adjust as needed)
int fadeDelay = 20;        // Delay between steps (adjust as needed)

void setup() {
  pinMode(irSensorPin, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int obstacleDetected = digitalRead(irSensorPin);


  for (int brightness = 0; brightness <= 255; brightness += fadeStep) {
    if (obstacleDetected == LOW) {
      analogWrite(ledPin, brightness);
      delay(150);
    }

  // Sudden decrease in LED brightness
  analogWrite(ledPin, LOW);
  // Adjust the delay as needed for the low state duration
  }
}

