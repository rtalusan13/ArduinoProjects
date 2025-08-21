float variable;

void setup() {
  //analogWrite(pinNum, value)
  Serial.begin(9600);
  while(!Serial)
  pinMode(3, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  variable = 0.0;
  Serial.println("Please input a desired voltage for Pin 3 between 0.0 - 5.0:");
  while(!Serial.available());
  variable = Serial.parseFloat();
  Serial.parseInt();
  Serial.print("Input voltage requested: ");
  Serial.println(variable);
  float scaleFactor = 255/5.0;
  int analogValue = variable * scaleFactor;
  analogWrite(3, analogValue);
  Serial.print("PWM set to ");
  Serial.println(analogValue);
  }
