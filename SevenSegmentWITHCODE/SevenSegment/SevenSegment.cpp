#include "Arduino.h"
#include "SevenSegment.h"

SevenSegment::SevenSegment(int pin1, int pin2, int pin3, int pin4,  
    int pin5, int pin6, int pin7, int pin8) 
{ 
       a = pin1; 
       b = pin2; 
       c = pin3;
       d = pin4;
       e = pin5;
       f = pin6;
       g = pin7;
       h = pin8; 
 
       pinMode(a, OUTPUT); 
       pinMode(b, OUTPUT); 
       pinMode(c, OUTPUT);
       pinMode(d, OUTPUT);
       pinMode(e, OUTPUT);
       pinMode(f, OUTPUT);
       pinMode(g, OUTPUT);
       pinMode(h, OUTPUT); 
       none();
} 
