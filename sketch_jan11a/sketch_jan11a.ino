
int TrigPin =7;
int EchoPin =6;
int base =2;
//float duration;
int distance;
void setup() {
  // put your setup code here, to run once:
 pinMode(TrigPin,OUTPUT);
 pinMode(EchoPin,INPUT);
 Serial.begin(9600);
// 9600 is the communication rate
//distance=duration/2 *0.034
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(TrigPin,LOW);
  delayMicroseconds(2);
  digitalWrite(TrigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(TrigPin,LOW);
  float duration = pulseIn(EchoPin,HIGH);
  //Serial.println(duration);
  delay(500);
  distance = (duration*0.034/2);
  Serial.println(distance);
  if (distance <= 35){
    digitalWrite(base,HIGH);}
  else{
    digitalWrite(base,LOW);
  }
}
