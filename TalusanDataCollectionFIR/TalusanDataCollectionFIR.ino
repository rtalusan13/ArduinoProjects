#include <dht_nonblocking.h>
#define DHT_SENSOR_TYPE DHT_TYPE_11
static const int DHT_SENSOR_PIN = 8;
DHT_nonblocking dht_sensor( DHT_SENSOR_PIN, DHT_SENSOR_TYPE );

int counter=0;
int samples;
float ave;
float * circBuf;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
while(!Serial);
Serial.print("Input # of Samples to average: ");
Serial.setTimeout(10);
while(!Serial.available());
samples = Serial.parseInt();
float * circBuf[samples];
for(int i=0; i<samples; i++){
  circBuf[i] = 0;
}
}

float FIRfilter(float k){
  for (int i=0; i<6; i++){
     ave+=circBuf[i];
  }
  for (int i=1; i<6; i++){
     circBuf[i-1] = circBuf[i];
  }
  float circBuf[samples] = {k};
  ave = ave/samples;
  return ave;
}


void loop()
{
    float temperature;
    float humidity;
   
    if(dht_sensor.measure(&temperature, &humidity)){
     
    if(counter == 0){
       for(int m; m<6;m++){
          circBuf[m]={temperature};
       }
    }
    Serial.println(temperature);
    float averaged = FIRfilter(temperature);
    Serial.print(averaged);

  ave = 0;
   
    Serial.println(" deg. C");
    //Serial.print( humidity, 1 );
    //Serial.println( "%" );

    counter++;
    }
} 
