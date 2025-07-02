/** Raphael Talusan, 10/24/2022, 
 *  using DHT sensor 
 *  to read classroom temperature and humidity
**/ 
#include <dht_nonblocking.h> 
#define DHT_SENSOR_TYPE DHT_TYPE_11 

static const int DHT_SENSOR_PIN = 8; 
DHT_nonblocking dht_sensor(DHT_SENSOR_PIN, DHT_SENSOR_TYPE);
int * circBuf;
int counter;
int samples;
double ave = 0;
int looping = 0;
double sum = 0;
float temperature; 
float humidity;
int array[i];  
/**float newWeight = 0.2;
float oldWeight = 0.8;
void setup() 
{ 
  Serial.begin(9600);
  while(!Serial);
}
*/
void setup(){
  Serial.println("Please input the number of samples to average: ");
  Serial.setTimeout(10);
  while(!Serial.available());
  samples = Serial.parseInt();
  circBuf = (int *)malloc(samples*sizeof(int));
  int i;
    for(i = 0; i < samples; i++)
        {
        circBuf[i] = 0;
        }
  array[counter] = temperature;
  counter++;
  int array[i];  
  if(counter>=samples);
    counter = 0;
}
/**void loop() { 
    float temperature; 
    float humidity;  
    if(dht_sensor.measure(&temperature, &humidity)){ 
        Serial.print("T = "); 
        Serial.print(temperature, 1); 
        Serial.print(" deg. C, H = "); 
        Serial.print(humidity, 1); 
        Serial.println("%");
  filter();
  Serial.println(ave);
    }

double filter(double temperature, double ave, double newWeight, double oldWeight){
  ave = temperature*newWeight + ave*oldWeight;
  return ave;
}
*/
void loop(){  
    if(dht_sensor.measure(&temperature, &humidity)){ 
        Serial.print("T = "); 
        Serial.print(temperature, 1); 
        Serial.print(" deg. C, H = "); 
        Serial.print(humidity, 1); 
        Serial.println("%");
    sum += array[i];
  if(i > 0){
     ave = sum/(i+1);
  }
  looping = 1;
  }
  else{
  int array[i] = temperature;
        if(i < (samples-1)){
          sum = sum + array[i];
          //sum = sum + array[i] - array[i+1];
          returnave();
        }
        else{
          sum = sum + array[i] - array[0];
          returnave();
          i=0;
        }
}
}
double firFilter(double value, double[]){
  double array[samples];
  ave = (sum(array[0:samples-1] + temperature)/samples
}
i++;
int returnave(){
  ave = sum/samples
  return ave();
}
