#include <SoftwareSerial.h>
SoftwareSerial mySerial(3, 4); // RX, TX
int t=0;
void setup() {
  // put your setup code here, to run once:
    Serial.begin(9600);
    mySerial.begin(38400);
    pinMode(12,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly: 

     if (digitalRead(12))
    {
           Serial.print("1SDAWDAS");
           mySerial.print("1");
           delay(500);
           t=0;
     }
     else
     {
           delay(500);
           t+=1;
     }
     if (t==10)//change the zhouqi
     {
         Serial.print("ssb");
         mySerial.print("2");
         t=0;
     }
     
}
