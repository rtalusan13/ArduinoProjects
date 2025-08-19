int RED = 11;
int GREEN = 9;
int stp = 6;
int yld = 2;
int go = 6;
void setup()
{
  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  digitalWrite(RED, LOW);
  digitalWrite(GREEN, LOW);
  Serial.begin(9600);
  while(!Serial);
}

void loop()
{
  red(stp);
  green(go);
  yellow(yld);
  go = checkSwitch();
}
void red(int stp)
{
    digitalWrite(GREEN, LOW);
    digitalWrite(RED, HIGH);
    Serial.println("Light mode: Stop.");
    delay(stp*1000);
}
void green(int go)
{
    digitalWrite(GREEN, HIGH);
    digitalWrite(RED, LOW);
    Serial.print("Light mode: Go = ");
    Serial.print(go);
    Serial.println(".");
    delay(go*1000);
}
void yellow(int yield)
{
    analogWrite(GREEN, 180);
    analogWrite(RED, 180);
    Serial.println("Light mode: Yield.");
    delay(yield*1000);
}
int checkSwitch()
{
  int set = digitalRead(8);    // read the state of pin 8
  Serial.println("Checking Switch...");
  if(set)         //if high, the switch is open and the pin = 5V
  {
    Serial.println("The switch is open.");
    return 6;
  }
  else          //pin 8 is low(0 volts) set the delay to 10 sec
  {
    Serial.println("The switch is closed.");
    return 10;
  }
}
