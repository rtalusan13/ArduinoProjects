/** Raphael Talusan 11/4/22
 * Lab 1
 */
 int reading = A0;
int value;
float scaling = 5.0/1023;
float sclvalue;
float milliamps;

void setup() { //begins the serial monitor
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() { 
  /**calls the voltage, buttonPushed, and current functions
  the delay is set to 2 second intervals
  */
  // put your main code here, to run repeatedly:
  voltage();
  buttonPushed();
  current();
  delay(2000);
}
int voltage(){ /**
  the value integer reads the A0 pin and creats an integer 0-1023
  using the scaling float previously defined,
  sclvalue is the calculated voltage which is printed and called upon in otehr functions
  */
  int value = analogRead(reading);
  sclvalue = value*scaling;
  Serial.print("Voltage: ");
  Serial.println(sclvalue);
  Serial.print("The button was");
}
int buttonPushed(){
  /**
   * buttonPushed calls upon sclvalue and determines whether or not the button was pushed
   * based on the change in voltage using the if and else statements
   */
  if (sclvalue<3.50){
    Serial.println(" not pushed! ");
  }
  else{
    Serial.println(" pushed! ");
  }
    
}
int current(){ /**this function calls upon the calculated voltage, sclvalue
  amps is the voltage/total resistance,
  but is converted into milliamps shown by the *1000 at the end
*/
  milliamps = (sclvalue/430)*1000;
  Serial.print("Milliamps: ");
  Serial.println(milliamps);
  Serial.println(" ");
}
