# include <SoftwareSerial.h>
SoftwareSerial Sola(2,3);
int light =7;
int socket =8;
char val;
//char val = A, bulb on
//char val = B, bulb off
//char val = C, socket on
//char val = D, socket off
void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600);
 pinMode (light,OUTPUT);
 pinMode (socket,OUTPUT);
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
  (digitalWrite(light,LOW));
  }  
else if(val =='C'){
  (digitalWrite(socket,HIGH));
  }
else if(val =='D'){
  (digitalWrite(socket,LOW));
  }
}
