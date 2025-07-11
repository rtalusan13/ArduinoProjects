/*
  LiquidCrystal Library - Hello World

 Demonstrates the use a 16x2 LCD display.  The LiquidCrystal
 library works with all LCD displays that are compatible with the
 Hitachi HD44780 driver. There are many of them out there, and you
 can usually tell them by the 16-pin interface.

 This sketch prints "Hello World!" to the LCD
 and shows the time.

  The circuit:
 * LCD RS pin to digital pin 12
 * LCD Enable pin to digital pin 11
 * LCD D4 pin to digital pin 5
 * LCD D5 pin to digital pin 4
 * LCD D6 pin to digital pin 3
 * LCD D7 pin to digital pin 2
 * LCD R/W pin to ground
 * LCD VSS pin to ground
 * LCD VCC pin to 5V
 * 10K resistor:
 * ends to +5V and ground
 * wiper to LCD VO pin (pin 3)

 Library originally added 18 Apr 2008
 by David A. Mellis
 library modified 5 Jul 2009
 by Limor Fried (http://www.ladyada.net)
 example added 9 Jul 2009
 by Tom Igoe
 modified 22 Nov 2010
 by Tom Igoe

 This example code is in the public domain.

 http://www.arduino.cc/en/Tutorial/LiquidCrystal
 */

// include the library code:
#include <HCSR04.h>
#include "LiquidCrystal.h"
#define TRIGGER 1
#define ECHO 2

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(7,8,9,10,11,12);
UltraSonicDistanceSensor distanceSensor(2, 1);
float scaling = 7.5/26; //converts readings into centimeters
float scaledDistance = 0;

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.print("Distance:");
  pinMode(ECHO, INPUT);
  pinMode(TRIGGER, OUTPUT);
  digitalWrite(TRIGGER, LOW);
  Serial.begin(9600);
}

void loop() {
long distance, duration;
digitalWrite(TRIGGER, HIGH);
delayMicroseconds(100);
digitalWrite(TRIGGER, LOW);
duration = pulseIn(ECHO,HIGH);
distance = duration / 2 / 7.6;
scaledDistance = distance * scaling;
Serial.print(scaledDistance);
Serial.println(" cm");
/**delayMicroseconds(100);
Serial.println(distanceSensor.measureDistanceCm());
*/
  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  lcd.setCursor(0, 1);
 // lcd.print(distanceSensor.measureDistanceCm());
  lcd.print(scaledDistance);
  lcd.print(" cm");
  // print the number of seconds since reset:
  //lcd.print(millis() / 1000);
/**
  n = samples
  for(i=0; i < n; i++){
  sum += data;
  }
  ave = sum/n;
  Serial.print(ave);
 */
}
