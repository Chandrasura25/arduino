
int LED = A0;
int brightness = 0;
int fade = 5;

//fading an LED
void setup() {
  // put your setup code here, to run once:
  pinMode(LED,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(LED,brightness);
  brightness = fade + brightness;
  delay(300);
}

int LED = A0;
int brightness = 255;
int fade = 15;


void setup() {
  // put your setup code here, to run once:
  pinMode(LED,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(LED,brightness);
  brightness =brightness - fade;
  delay(300);
}
