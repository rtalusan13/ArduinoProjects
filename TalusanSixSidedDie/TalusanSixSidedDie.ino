#include <SevenSegment.h>

SevenSegment sevenSeg(1,2,3,4,5,6,7,8);
int wait = 1;
int rNum;
/**
 * SevenSegment with Library
 * rtalusan1
 * 9/30/22
 */

void setup(){
  sevenSeg.none();
}
void loop() 
{
  // put your main code here, to run repeatedly:
  int rNum;
  lu = checkSwitch();
  delay(500);
  digitalWrite(8, LOW);

}

  int set = digitalRead(9);    // read the state of the button
  if(set == HIGH)         //if high, the switch is open and the pin = 5V
  {
    waitingloop(wait);
  }
  else          //pin 9 is low(0 volts) set the delay to 10 sec
  {
    switch(int rNum = random(1,7)){
      case 1:
      one();
      delay(5000);
      break;
      case 2:
      two();
      delay(5000);
      break;
      case 3:
      three();
      delay(5000);
      break;
      case 4:
      four();
      delay(5000);
      break;
      case 5:
      five();
      delay(5000);
      break;
      case 6:
      six();
      delay(5000);
      break;
      default:
      delay(5000);
      break;
   //allows for number to be up for 5 seconds, breaks after
   // waiting loop is resumed after time is up
  }
  }
void waitingloop(int wait){
  digitalWrite(7, LOW);
  digitalWrite(1, HIGH);
  delay(wait*1000);
  digitalWrite(1, LOW);
  digitalWrite(2, HIGH);
  delay(wait*1000);
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  delay(wait*1000);
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  delay(wait*1000);
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);
  delay(wait*1000);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  delay(wait*1000);
  digitalWrite(6, LOW);
  digitalWrite(7, HIGH);
  delay(wait*1000);
}

}
