/** Raphael Talusan, 9/27/2022, 
**/ 
 
int rd = 4;
int md = 5;
int ld = 6;
int ru = 3;
int mu = 2;
int lu = 7;
int mm = 8;
int stopperiod = 1;
void setup() {
  // put your setup code here, to run once:
  pinMode(rd, OUTPUT);
  pinMode(md, OUTPUT);
  pinMode(ld, OUTPUT);
  pinMode(ru, OUTPUT);
  pinMode(mu, OUTPUT);
  pinMode(lu, OUTPUT);
  pinMode(mm, OUTPUT);
  digitalWrite(rd, LOW);
  digitalWrite(md, LOW);
  digitalWrite(ld, LOW);
  digitalWrite(ru, LOW);
  digitalWrite(mu, LOW);
  digitalWrite(lu, LOW);
  digitalWrite(mm, LOW);
}
void loop() //runs everything in order, loops with 3 sec delay
{
  zero(stopperiod);
  one(stopperiod);
  two(stopperiod);
  three(stopperiod);
  four(stopperiod);
  five(stopperiod);
  six(stopperiod);
  seven(stopperiod);
  eight(stopperiod);
  nine(stopperiod);
  none(stopperiod);
  delay(stopperiod*3000);
}
void zero(int stopperiod){
  digitalWrite(rd, HIGH);
  digitalWrite(md, HIGH);
  digitalWrite(ld, HIGH);
  digitalWrite(ru, HIGH);
  digitalWrite(mu, HIGH);
  digitalWrite(lu, HIGH);
  digitalWrite(mm, LOW);
  delay(stopperiod*1000);
}
void one(int stopperiod){
  digitalWrite(rd, HIGH);
  digitalWrite(md, LOW);
  digitalWrite(ld, LOW);
  digitalWrite(mu, LOW);
  digitalWrite(mm, LOW);
  digitalWrite(lu, LOW);
  digitalWrite(ru, HIGH);//lu and ru on
  delay(stopperiod*1000);
}
void two(int stopperiod){
  digitalWrite(rd, LOW);
  digitalWrite(md, HIGH);
  digitalWrite(ld, HIGH);
  digitalWrite(ru, HIGH);
  digitalWrite(mu, HIGH);
  digitalWrite(lu, LOW);
  digitalWrite(mm, HIGH);
  delay(stopperiod*1000);
}
void three(int stopperiod){
  digitalWrite(rd, HIGH);
  digitalWrite(md, HIGH);
  digitalWrite(ld, LOW);
  digitalWrite(ru, HIGH);
  digitalWrite(mu, HIGH);
  digitalWrite(lu, LOW);
  digitalWrite(mm, HIGH);
  delay(stopperiod*1000);
}
void four(int stopperiod){
  digitalWrite(rd, HIGH);
  digitalWrite(md, LOW);
  digitalWrite(ld, LOW);
  digitalWrite(ru, HIGH);
  digitalWrite(mu, LOW);
  digitalWrite(lu, HIGH);
  digitalWrite(mm, HIGH);
  delay(stopperiod*1000);
}
void five(int stopperiod){
  digitalWrite(rd, HIGH);
  digitalWrite(md, HIGH);
  digitalWrite(ld, LOW);
  digitalWrite(ru, LOW);
  digitalWrite(mu, HIGH);
  digitalWrite(lu, HIGH);
  digitalWrite(mm, HIGH);
  delay(stopperiod*1000);
}
void six(int stopperiod){
  digitalWrite(rd, HIGH);
  digitalWrite(md, HIGH);
  digitalWrite(ld, HIGH);
  digitalWrite(ru, LOW);
  digitalWrite(mu, HIGH);
  digitalWrite(lu, HIGH);
  digitalWrite(mm, HIGH);
  delay(stopperiod*1000);
}
void seven(int stopperiod){
  digitalWrite(rd, HIGH);
  digitalWrite(md, LOW);
  digitalWrite(ld, LOW);
  digitalWrite(ru, HIGH);
  digitalWrite(mu, HIGH);
  digitalWrite(lu, LOW);
  digitalWrite(mm, LOW);
  delay(stopperiod*1000);
}
void eight(int stopperiod){
  digitalWrite(rd, HIGH);
  digitalWrite(md, HIGH);
  digitalWrite(ld, HIGH);
  digitalWrite(ru, HIGH);
  digitalWrite(mu, HIGH);
  digitalWrite(lu, HIGH);
  digitalWrite(mm, HIGH);
  delay(stopperiod*1000);
}
void nine(int stopperiod){
  digitalWrite(rd, HIGH);
  digitalWrite(md, LOW);
  digitalWrite(ld, LOW);
  digitalWrite(ru, HIGH);
  digitalWrite(mu, HIGH);
  digitalWrite(lu, HIGH);
  digitalWrite(mm, HIGH);
  delay(stopperiod*1000);
}
void none(int stopperiod){
  digitalWrite(rd, LOW);
  digitalWrite(md, LOW);
  digitalWrite(ld, LOW);
  digitalWrite(ru, LOW);
  digitalWrite(mu, LOW);
  digitalWrite(lu, LOW);
  digitalWrite(mm, LOW);
  delay(stopperiod*1000);
}
