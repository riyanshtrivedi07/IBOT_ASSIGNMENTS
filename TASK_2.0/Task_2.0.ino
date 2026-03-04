const int ledPin = 18;
const int pwmChannel = 0;
const int pwmFreq = 5000;
const int pwmResolution = 8;

void setup() {
  ledcAttach(ledPin, pwmFreq, pwmResolution);
}

void loop() {
  for (int dutyCycle = 0; dutyCycle <= 255; dutyCycle++) {
    ledcWrite(pwmChannel, dutyCycle);
    delay(10);
  }

  for (int dutyCycle = 255; dutyCycle >= 0; dutyCycle--) {
    ledcWrite(pwmChannel, dutyCycle);
    delay(10);
  }
}
