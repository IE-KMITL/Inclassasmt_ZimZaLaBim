int sensor = 5;
int sensor1  = 6;
int sensor2 = 7;
int sensorvalue;
int sensorvalue1;
int sensorvalue2;
int Right = 8;      
int Right1 = 9;       
int Left = 10;       
int Left1 = 11; 
 
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode (sensor,INPUT);
pinMode (sensor1,INPUT);
pinMode (sensor2,INPUT);
pinMode (Rihgt,OUTPUT);
pinMode (Right1,OUTPUT);
pinMode (Left,OUTPUT);
pinMode (Left1,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
{
sensorvalue = analogRead(sensor);
Serial.println(sensorvalue);

 if (sensorvalue <= 10) 
 digitalWrite(Right, LOW);
 digitalWrite(Right1, LOW);  
 digitalWrite(Left, LOW);
 digitalWrite(Left1, LOW);
 delay(100);
 else 
 digitalWrite(Right, HIGH);
 digitalWrite(Right1, LOW);  
 digitalWrite(Left, HIGH);
 digitalWrite(Left1, LOW);
 delay(100);
}
{
 sensorvalue1 = analogRead(sensor1);
Serial.println(sensorvalue1);
 if (sensorvalue <= 10)
 digitalWrite(Right, LOW);
 digitalWrite(Right1, LOW);  
 digitalWrite(Left, HIGH);
 digitalWrite(Left1, LOW);
 delay(100);
 else 
 digitalWrite(Right, LOW);
 digitalWrite(Right1, LOW);  
 digitalWrite(Left, LOW);
 digitalWrite(Left1, LOW);
 delay(100);
}
{
sensorvalue2 = analogRead(sensor2);
Serial.println(sensorvalue2);
if (sensorvalue <= 10)
 digitalWrite(Right, HIGH);
 digitalWrite(Right1, LOW);  
 digitalWrite(Left, LOW);
 digitalWrite(Left1, LOW);
 delay(100);
 else 
 digitalWrite(Right, LOW);
 digitalWrite(Right1, LOW);  
 digitalWrite(Left, LOW);
 digitalWrite(Left1, LOW);
 delay(100);
  
}
}
