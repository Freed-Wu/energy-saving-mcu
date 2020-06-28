#include <SoftwareSerial.h>
SoftwareSerial mySerial(3, 4); // RX, TX
String r = "";
void setup() {
  // put your setup code here, to run once:
    Serial.begin(9600);
    mySerial.begin(38400);
    pinMode( 2 , OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly: 
   while (mySerial.available()>0)
          {
               delay(2);
             //  Serial.print("--The lamp is uncovered.");
               r += char(mySerial.read());
               if (r.length() > 0)
               {
               Serial.print(r);
               if (r.compareTo("1"))
                 digitalWrite( 2 , HIGH );
               else if (r.compareTo("2"))
                 digitalWrite( 2 , LOW );
                r = "";
               }
           }

}
