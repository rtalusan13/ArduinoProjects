#include "SevenSegment.h"

/**
 * SevenSegment Library
 * rtalusan
 * 9/30/22
 */
SevenSegment::SevenSegment(int pin1, int pin2, int pin3, int pin4,  
    int pin5, int pin6, int pin7, int pin8) 
{ 
       test = pin1; 
       mu = pin2; 
       ru = pin3;
       rd = pin4;
       md = pin5;
       ld = pin6;
       lu = pin7;
       mm = pin8; 
 
       pinMode(test, OUTPUT); 
       pinMode(mu, OUTPUT); 
       pinMode(ru, OUTPUT);
       pinMode(rd, OUTPUT);
       pinMode(md, OUTPUT);
       pinMode(ld, OUTPUT);
       pinMode(lu, OUTPUT);
       pinMode(mm, OUTPUT); 
       none();
} 
void zero(){
  digitalWrite(rd, HIGH);
  digitalWrite(md, HIGH);
  digitalWrite(ld, HIGH);
  digitalWrite(ru, HIGH);
  digitalWrite(mu, HIGH);
  digitalWrite(lu, HIGH);
  digitalWrite(mm, LOW);
}
void one(){
  digitalWrite(rd, HIGH);
  digitalWrite(md, LOW);
  digitalWrite(ld, LOW);
  digitalWrite(mu, LOW);
  digitalWrite(mm, LOW);
  digitalWrite(lu, LOW);
  digitalWrite(ru, HIGH);
}
void two(){
  digitalWrite(rd, LOW);
  digitalWrite(md, HIGH);
  digitalWrite(ld, HIGH);
  digitalWrite(ru, HIGH);
  digitalWrite(mu, HIGH);
  digitalWrite(lu, LOW);
  digitalWrite(mm, HIGH);
}
void three(){
  digitalWrite(rd, HIGH);
  digitalWrite(md, HIGH);
  digitalWrite(ld, LOW);
  digitalWrite(ru, HIGH);
  digitalWrite(mu, HIGH);
  digitalWrite(lu, LOW);
  digitalWrite(mm, HIGH);
}
void four(){
  digitalWrite(rd, HIGH);
  digitalWrite(md, LOW);
  digitalWrite(ld, LOW);
  digitalWrite(ru, HIGH);
  digitalWrite(mu, LOW);
  digitalWrite(lu, HIGH);
  digitalWrite(mm, HIGH);
}
void five(){
  digitalWrite(rd, HIGH);
  digitalWrite(md, HIGH);
  digitalWrite(ld, LOW);
  digitalWrite(ru, LOW);
  digitalWrite(mu, HIGH);
  digitalWrite(lu, HIGH);
  digitalWrite(mm, HIGH);
}
void six(){
  digitalWrite(rd, HIGH);
  digitalWrite(md, HIGH);
  digitalWrite(ld, HIGH);
  digitalWrite(ru, LOW);
  digitalWrite(mu, HIGH);
  digitalWrite(lu, HIGH);
  digitalWrite(mm, HIGH);
}
void seven(){
  digitalWrite(rd, HIGH);
  digitalWrite(md, LOW);
  digitalWrite(ld, LOW);
  digitalWrite(ru, HIGH);
  digitalWrite(mu, HIGH);
  digitalWrite(lu, LOW);
  digitalWrite(mm, LOW);
}
void eight(){
  digitalWrite(rd, HIGH);
  digitalWrite(md, HIGH);
  digitalWrite(ld, HIGH);
  digitalWrite(ru, HIGH);
  digitalWrite(mu, HIGH);
  digitalWrite(lu, HIGH);
  digitalWrite(mm, HIGH);
}
void nine(){
  digitalWrite(rd, HIGH);
  digitalWrite(md, LOW);
  digitalWrite(ld, LOW);
  digitalWrite(ru, HIGH);
  digitalWrite(mu, HIGH);
  digitalWrite(lu, HIGH);
  digitalWrite(mm, HIGH);
}
void none(){
  digitalWrite(rd, LOW);
  digitalWrite(md, LOW);
  digitalWrite(ld, LOW);
  digitalWrite(ru, LOW);
  digitalWrite(mu, LOW);
  digitalWrite(lu, LOW);
  digitalWrite(mm, LOW);
}
