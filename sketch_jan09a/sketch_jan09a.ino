
int GREEN = 1;
int RED = 2;
int YELLOW = 3;
void setup() {
  // put your setup code here, to run once:
  pinMode (GREEN,OUTPUT);
  pinMode (RED,OUTPUT);
  pinMode (YELLOW,OUTPUT);
  digitalWrite (GREEN,HIGH);
  digitalWrite (RED,LOW);
  digitalWrite (YELLOW,LOW);
  delay(500);
  digitalWrite (GREEN,LOW);
  digitalWrite (RED,HIGH);
  digitalWrite (YELLOW,LOW);
  delay(200);
  digitalWrite (GREEN,LOW);
  digitalWrite (RED,LOW);
  digitalWrite (YELLOW,HIGH);
  delay(300);
}

void loop() {
  // put your main code here, to run repeatedly:
  pinMode (GREEN,OUTPUT);
  pinMode (RED,OUTPUT);
  pinMode (YELLOW,OUTPUT);
  digitalWrite (GREEN,HIGH);
  digitalWrite (RED,LOW);
  digitalWrite (YELLOW,LOW);
  delay(500);
  digitalWrite (GREEN,LOW);
  digitalWrite (RED,HIGH);
  digitalWrite (YELLOW,LOW);
  delay(200);
  digitalWrite (GREEN,LOW);
  digitalWrite (RED,LOW);
  digitalWrite (YELLOW,HIGH);
  delay(300);
}
