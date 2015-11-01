void setup() {
  // put your setup code here, to run once:
pinMode(2, INPUT);
}

void loop() {
  int pos;
  int led = 9;
  int brightness;
  int fadeAmount = 5;
  // put your main code here, to run repeatedly:
  while (digitalRead(2) == HIGH) {
    analogWrite(led, brightness);

  // change the brightness for next time through the loop:
  brightness = brightness + fadeAmount;

  // reverse the direction of the fading at the ends of the fade:
  if (brightness == 0 || brightness == 255) {
    fadeAmount = -fadeAmount ;
  }
  // wait for 30 milliseconds to see the dimming effect
  delay(30);
  }
  analogWrite(led, 0);
}
