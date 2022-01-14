
int TrigPin =7;
int EchoPin =6;
//float duration;
int distance;
int GREEN =5;
int RED =4;
int BUZZER =3;
int base =2;
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
    digitalWrite(GREEN,HIGH);
    Serial.println("Someone is near");
    digitalWrite(BUZZER,HIGH);
    delay(300); }
  else{
    digitalWrite(RED,LOW);
    Serial.println("Noneone is Available");
     digitalWrite(BUZZER,LOW);
    delay(300);
  }
 
}
//for a buzzer to buzz three times,you use the FOR LOOP
// for(intialization; condition; increment;){statement}
//e.g for(int Led =0; led<=2; led ++;){
//  digitalWrite(LED,HIGH);
//  delay(1000)
//  digitalWrite(LED,LOW);
//  delay(1000)
// }
