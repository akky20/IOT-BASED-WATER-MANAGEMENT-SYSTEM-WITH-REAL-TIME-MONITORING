const int sensor_pin0 = A1;
const int sensor_pin1 = A4;
const int sensor_pin2= A2;
int val1;
int val2;
int val3;
int relay1 = 10;
int relay2 = 9;
int relay3 = 8;

void setup() {
  Serial.begin(9600);
  pinMode(relay1,OUTPUT);
  pinMode(relay2,OUTPUT);
  pinMode(relay3,OUTPUT);
}

void loop() {
  float percentage1;
  float percentage2;
  float percentage3;
  int sensor_0analog;
  int sensor_1analog;
  int sensor_2analog;
  val1 = analogRead(sensor_pin0);
  val2 = analogRead(sensor_pin1);
  val3 = analogRead(sensor_pin2);
  percentage1 = ( (((val1*1.55)/1023.00) * 100));
  percentage2 = ( (((val2*1.55)/1023.00) * 100));
  percentage3 = ( (((val3*1.55)/1023.00) * 100));
  Serial.print(int(percentage1));
  Serial.print(",");
  Serial.print(int(percentage2));
  Serial.print(",");
  Serial.println(int(percentage3));
 
 
 if(percentage1 < 70) 
  {digitalWrite(8,LOW);}
  else
  {digitalWrite(8,HIGH);}
  delay(400);
  
  if(percentage2 < 70) 
  {digitalWrite(relay2,LOW);}
  else
  {digitalWrite(relay2,HIGH);}
  delay(400);
  
  if(percentage3 < 70) 
  {digitalWrite(10,LOW);}
  else
  {digitalWrite(10,HIGH);}
  delay(400);
 
  delay(100);
}