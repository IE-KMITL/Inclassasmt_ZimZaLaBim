int led = 18;
int buttonPin = 19;
int buttonState = 0;
void setup()
{
  pinMode(led, OUTPUT); // กำหนดขา led เป็นโหมด OUTPUT
  pinMode(buttonPin, INPUT_PULLUP);// กำหนดขา buttonPin เป็นโหมด INPUT
}
void loop()
{
  buttonState = digitalRead(buttonPin); // อ่านค่าสถานะขา3
  if (buttonState == HIGH) {
    digitalWrite(led, LOW); // LED Turn off
  } else {
    digitalWrite(led, HIGH); // ไฟ LED Turn on one
  }
}
