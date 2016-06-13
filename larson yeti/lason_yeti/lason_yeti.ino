
// sets a default delay time, 100 milliseconds (one tenth of a second)
int potpin = 0;
int val;

void setup()
{
  // initialize the digital pins as outputs:
  // later on there will be easier ways to do this
  //pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
}

// the loop() method repeats indefinitely until you turn off the powe
void loop() 

{ 
  val = analogRead(potpin);            // reads the value of the potentiometer (value between 0 and 1023) 
  val = map(val, 0, 1023, 100, 400);     // scale it to use it with the servo (value between 0 and 5000)                                           

 // digitalWrite(2, HIGH);   // turn on LED on pin 2
  //delay(val);              // wait (length determined by value of 'del')
 // digitalWrite(2, LOW);    // turn it off
  digitalWrite(3, HIGH);   // turn on LED on pin 3
  delay(val);              // wait
  digitalWrite(3, LOW);    // turn it off
  digitalWrite(4, HIGH);   // turn on LED on pin 4
  delay(val);              // wait
  digitalWrite(4, LOW);    // turn it off
  digitalWrite(5, HIGH);   // turn on LED on pin 5
  delay(val);              // wait
  digitalWrite(5, LOW);    // turn it off
  digitalWrite(6, HIGH);   // turn on LED on pin 6
  delay(val);              // wait
  digitalWrite(6, LOW);    // turn it off
  digitalWrite(7, HIGH);   // turn on LED on pin 7
  delay(val);              // wait
  digitalWrite(7, LOW);    // turn it off
  digitalWrite(8, HIGH);   // turn on LED on pin 8
  delay(val);              // wait
  digitalWrite(8, LOW);    // turn it off
  digitalWrite(9, HIGH);   // turn on LED on pin 9
  delay(val);              // wait
  digitalWrite(9, LOW);    // turn it off
  digitalWrite(8, HIGH);   // turn on LED on pin 8
  delay(val);              // wait
  digitalWrite(8, LOW);    // turn it off
  digitalWrite(7, HIGH);   // turn on LED on pin 7
  delay(val);              // wait
  digitalWrite(7, LOW);    // turn it off
  digitalWrite(6, HIGH);   // turn on LED on pin 6
  delay(val);              // wait
  digitalWrite(6, LOW);    // turn it off
  digitalWrite(5, HIGH);   // turn on LED on pin 5
  delay(val);              // wait
  digitalWrite(5, LOW);    // turn it off
  digitalWrite(4, HIGH);   // turn on LED on pin 4
  delay(val);              // wait
  digitalWrite(4, LOW);    // turn it off
  //digitalWrite(3, HIGH);   // turn on LED on pin 3
  //delay(val);              // wait
  //digitalWrite(3, LOW);    // turn it off
}
