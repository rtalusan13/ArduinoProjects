#ifndef SevenSegment_h 
#define SevenSegment_h 

#include "Arduino.h"

class SevenSegment
{ 
   public: 
          SevenSegment(int pin1, int pin2, int pin3, int pin4, int pin5, int pin6, int pin7, int pin8,
          void zero();
          void one();
          void two();
          void three();
          void four();
          void five();
          void six();
          void seven();
          void eight();
          void nine();
          void none();
   private:
          int test;
          int mu;
          int ru;
          int rd;
          int md;
          int ld;
          int lu;
          int mm;
}; 
 
#endif 
