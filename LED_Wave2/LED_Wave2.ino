void setup() {
  // put your setup code here, to run once:
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
}

void loop() {
  
  int i;
  for(i=2; i<=6; i++) 
 // initialize index, give it limit, tell it how to get there, i++ means add by 1
 //for i in range(10): --with the same indent
   {
   digitalWrite(i, HIGH); //turns voltage high
   delay(500); 
   digitalWrite(i, LOW);
   }
  for (i=6; i>=2; i--)
   {
   digitalWrite(i, HIGH); //turns voltage high
   delay(500); //.5 second delay
   digitalWrite(i, LOW); //turns voltage low i.e. LED off
   }
}
