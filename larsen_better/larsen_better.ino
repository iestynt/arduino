/*
exercise 0.1 - KITT emulator!
 Created 02/04/2010
 By John Boxall
 http://tronixstuff.com...
 Blinks LEDs from output pin 2~9 in a forwards<>backward motion
 The circuit:
 an LED is connected to each output pin from 2 to 8, thence to a 560 ohm resistor, then to ground (pin 4 on the bottom left of the Arduino Duemilanove).
 based on an orginal by H. Barragan for the Wiring i/o board
 */
// The setup() method runs once, when the sketch starts
int del=100; // sets a default delay time, 100 milliseconds (one tenth of a second)
void setup()
{
  // initialize the digital pins as outputs:
  // later on there will be easier ways to do this
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
}
// the loop() method repeats indefinitely until you turn off the power
void loop()
{
  digitalWrite(2, HIGH);   // turn on LED on pin 2
  delay(del);              // wait (length determined by value of 'del')
  digitalWrite(2, LOW);    // turn it off
  digitalWrite(3, HIGH);   // turn on LED on pin 3
  delay(del);              // wait
  digitalWrite(3, LOW);    // turn it off
  digitalWrite(4, HIGH);   // turn on LED on pin 4
  delay(del);              // wait
  digitalWrite(4, LOW);    // turn it off
  digitalWrite(5, HIGH);   // turn on LED on pin 5
  delay(del);              // wait
  digitalWrite(5, LOW);    // turn it off
  digitalWrite(6, HIGH);   // turn on LED on pin 6
  delay(del);              // wait
  digitalWrite(6, LOW);    // turn it off
  digitalWrite(7, HIGH);   // turn on LED on pin 7
  delay(del);              // wait
  digitalWrite(7, LOW);    // turn it off
  digitalWrite(8, HIGH);   // turn on LED on pin 8
  delay(del);              // wait
  digitalWrite(8, LOW);    // turn it off
  digitalWrite(9, HIGH);   // turn on LED on pin 9
  delay(del);              // wait
  digitalWrite(9, LOW);    // turn it off
  digitalWrite(8, HIGH);   // turn on LED on pin 8
  delay(del);              // wait
  digitalWrite(8, LOW);    // turn it off
  digitalWrite(7, HIGH);   // turn on LED on pin 7
  delay(del);              // wait
  digitalWrite(7, LOW);    // turn it off
  digitalWrite(6, HIGH);   // turn on LED on pin 6
  delay(del);              // wait
  digitalWrite(6, LOW);    // turn it off
  digitalWrite(5, HIGH);   // turn on LED on pin 5
  delay(del);              // wait
  digitalWrite(5, LOW);    // turn it off
  digitalWrite(4, HIGH);   // turn on LED on pin 4
  delay(del);              // wait
  digitalWrite(4, LOW);    // turn it off
  digitalWrite(3, HIGH);   // turn on LED on pin 3
  delay(del);              // wait
  digitalWrite(3, LOW);    // turn it off
}
