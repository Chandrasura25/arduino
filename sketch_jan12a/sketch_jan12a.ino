# include <SoftwareSerial.h>
SoftwareSerial Sola(2,3);
int light =7;
int fan=8;
char val;
void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600);
 pinMode (light,OUTPUT);
 Sola.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
val =Sola.read();
Serial.println(val);
if (val=='A')
{digitalWrite(light,HIGH);
  }
else if(val =='B'){
  (digitalWrite(fan,LOW));
  }  

}
