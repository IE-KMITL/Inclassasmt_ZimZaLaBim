int LED = 18;    //กำหนดตัวแปร หลอดไฟ
const int buttonPin = 19;    //  กำหนดตัวแปรให้สวิตซ์เชื่อมต่อกับขา

bool buttonState = 0;       // สถานะเริ่มต้นเป็น 0
bool Mode = 0;              // What mode is the light in?


void setup()
{
  pinMode(buttonPin, INPUT_PULLUP);    // Set the switch pin as input
  pinMode(LED , OUTPUT);
}

void loop()
{
  if (!digitalRead(buttonPin)) // cheks if button is pressed (cheks if it's LOW, becouse PULLUP inverts signal: LOW = button pressed)
  {
    if (!buttonState) // same as: (buttonState == false) ---I made it a bit compact, but it may be confusinf to you
    {
      buttonState = true;
      Mode = !Mode; // this inverts button mode: If Mode was True - it will make it False and viseversa
    }
  }
  else buttonState = false;

  // blink LED
  digitalWrite(LED , Mode); // remember: TRUE = HIGH = 1 and FALSE = LOW = 0 (You can use whatever You like)
  delay(5);
}
