//zoomkat dual pot/servo test 12-29-12
//view output using the serial monitor

#include <Servo.h> 
Servo myservo1;
Servo myservo2;
Servo myservo3;
Servo myservo4;

int potpin1 = 0;  //my pot pin
int potpin2 = 1;
int potpin3 = 2;
int potpin4 = 3;

int newval1, oldval1;
int newval2, oldval2;
int newval3, oldval3;
int newval4, oldval4;

void setup() 
{
  Serial.begin(9600);  
  myservo1.attach(5);  
  myservo2.attach(9);
  myservo3.attach(10);
  myservo4.attach(11);
  Serial.println("testing dual pot servo");  
}

void loop()
{ 
  newval1 = analogRead(potpin1);           
  newval1 = map(newval1, 0, 1023, 0, 179); 
  if (newval1 < (oldval1-2) || newval1 > (oldval1+2)){  
    myservo1.write(newval1);
    Serial.print("1- ");
    Serial.println(newval1);
    oldval1=newval1;
  }

  newval2 = analogRead(potpin2);
  newval2 = map(newval2, 0, 1023, 0, 179);
  if (newval2 < (oldval2-2) || newval2 > (oldval2+2)){  
    myservo2.write(newval2);
    Serial.print("2- ");    
    Serial.println(newval2);
    oldval2=newval2;
  }
  delay(50);
  {
  }
  
  newval3 = analogRead(potpin3);           
  newval3 = map(newval3, 0, 1023, 0, 179); 
  if (newval1 < (oldval1-2) || newval3 > (oldval3+2)){  
    myservo1.write(newval3);
    Serial.print("3- ");
    Serial.println(newval3);
    oldval3=newval3;
  }
  {
  } 
  newval4 = analogRead(potpin4);           
  newval4 = map(newval4, 0, 1023, 0, 179); 
  if (newval1 < (oldval1-2) || newval4 > (oldval4+2)){  
    myservo1.write(newval4);
    Serial.print("4- ");
    Serial.println(newval4);
    oldval4=newval4;

  } 
  }

