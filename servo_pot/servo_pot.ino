#include <Servo.h>
Servo myservo;
int potpin = 0;
int val;
void setup()
{
myservo.attach(9);
Serial.begin(9600);
}
void loop()
{
val = analogRead(potpin);  
         
         
val = map(val, 0, 1023, 0, 179); 
         
         
myservo.write(val);    
         
delay(15);

  Serial.println(val);
  delay(1);        // delay in between reads for stability
  
}
