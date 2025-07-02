int  sensorPin  =  A0;     // select the input  pin for  the potentiometer 
int  sensorValue =  0;  // variable to  store  the value  coming  from  the sensor
float ave = 0;
float newWeight = 0.1;
float oldWeight = 0.9;
float scaling = 5.0/1023;
float ohmscaling = 3000000;
float voltScaled;
float ohmScaled;
void setup()
{
//pinMode(3, OUTPUT); 
Serial.begin(9600);
}
void loop(){
sensorValue =  analogRead(sensorPin);
returnave();
voltScaled = sensorValue*scaling;
ohmScaled = voltScaled*ohmscaling;
Serial.print("Light level: ");
Serial.println(ohmScaled);
Serial.print("Running Average: ");
Serial.println(ave);
//analogWrite(3, sensorValue);
delay(2000);
}

int returnave(){
  ave = newWeight*ohmScaled + oldWeight*ave;
  return ave;
}
