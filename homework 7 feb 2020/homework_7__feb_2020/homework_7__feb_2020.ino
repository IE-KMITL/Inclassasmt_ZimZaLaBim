int sensor_l = 19 ;
int LED_R = 18;
int sensor_r = 23;
const int trigPin = 12;
const int echoPin = 13;
long duration;
int distance;
const int LED_BUILTIN = 2;

void setup() {
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(sensor_l, INPUT);
  digitalWrite(LED_BUILTIN, 0);
  digitalWrite(sensor_l, 0); //right

  pinMode(LED_R, OUTPUT);
  pinMode(sensor_r, INPUT);
  digitalWrite(LED_R, 0);
  digitalWrite(sensor_r, 0);//left

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT); //ultrasonic
}

void loop() {
  int a = digitalRead(sensor_l);
  int b = digitalRead(sensor_r);

  Serial.println(b);
  if (a == 0) {
    digitalWrite(LED_BUILTIN, HIGH);
    if (b == 0) {
      digitalWrite(LED_R, HIGH);
    }
    else if (b == 1) {
      digitalWrite(LED_R, LOW);
    }
  }
  else if (a == 1) {
    digitalWrite(LED_BUILTIN, LOW);
    if (b == 0) {
      digitalWrite(LED_R, HIGH);
    }
    else if (b == 1) {
      digitalWrite(LED_R, LOW);
    }
  }
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2); // Sets the trigPin on HIGH state for 10 micro seconds
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration = pulseIn(echoPin, HIGH);
  // Calculating the distance
  distance = ((duration * 0.034 / 2)/5)* 0.65 ;
  // Prints the distance on the Serial Monitor
  Serial.print("Distance: ");
  Serial.println(distance);
  // put your main code here, to run repeatedly:
  if (distance < 20) {
    digitalWrite(LED_BUILTIN, LOW);
    digitalWrite(LED_R, LOW);
  }
  else if (distance > 40)
  { digitalWrite(LED_BUILTIN, HIGH);
    digitalWrite(LED_R, HIGH);
  }
  else if (distance >= 20 && distance <= 40) {
    digitalWrite(LED_BUILTIN, HIGH);
    digitalWrite(LED_R, HIGH);
    delay(1000);
    digitalWrite(LED_BUILTIN, LOW);
    digitalWrite(LED_R, LOW);
    delay(1000);
  }

}
