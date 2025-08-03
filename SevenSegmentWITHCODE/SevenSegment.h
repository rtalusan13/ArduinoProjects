#ifndef SevenSegment_h 
#define SevenSegment_h 
 
#include “Arduino.h” 
SevenSegmentClass { 
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
          int a;
          int b;
          int c;
          int d;
          int e;
          int f;
          int g;
          int h;
}; 
 
#endif 
