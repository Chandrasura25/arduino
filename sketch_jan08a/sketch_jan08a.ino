//global declaration
//local declaration
//identify the legs on ATMEGA 321 IC
//data type
//traffic light code
int Red = 5;
int Yellow = 6;

void setup() {
  // put your setup code here, to run once:
  pinMode (5,OUTPUT);
  digitalWrite (5,HIGH);
  delay(1000);
  digitalWrite (5,LOW);
  delay(1000);
}

void loop() {
  // put your main code here, to run repeatedly:
  pinMode (5,OUTPUT);
  pinMode (6,OUTPUT);
  pinMode (7,OUTPUT);
  digitalWrite (5,HIGH);
  digitalWrite (6,LOW);
  digitalWrite (7,HIGH);
  delay(500);
  digitalWrite (5,LOW);
  digitalWrite (6,HIGH);
  digitalWrite (7,LOW);
  delay(500);
  digitalWrite (5,HIGH);
  digitalWrite (6,LOW);
  digitalWrite (7,HIGH);
  delay(500);
}
