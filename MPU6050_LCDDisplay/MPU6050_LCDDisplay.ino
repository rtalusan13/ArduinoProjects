/* Get tilt angles on X and Y, and rotation angle on Z
 * Angles are given in degrees, displays on SSD1306 OLED
 * 
 * License: MIT
 */
#include <Wire.h>
#include <LiquidCrystal.h>
#include <MPU6050_light.h>

/**#define SCREEN_WIDTH 128 // OLED display width, in pixels
#define SCREEN_HEIGHT 64 // OLED display height, in pixels
// Declaration for an SSD1306 display connected to I2C (SDA, SCL pins)
//Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire);
*/
LiquidCrystal lcd(7,8,9,10,11,12);
MPU6050 mpu(Wire);
unsigned long timer = 0;
float yaw; //mpu.getAngleZ()
float pitch; //mpu.getAngleX()
float roll; //mpu.getAngleY()


void setup() {
  Serial.begin(9600);   //was 115200; Ensure serial monitor set to this value also    
  lcd.begin(16, 2);
  Wire.begin();
  mpu.begin();
  mpu.calcGyroOffsets();
  /**if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C))  // Address 0x3C for most of these displays, if doesn't work try 0x3D 
  { 
    Serial.println(F("SSD1306 allocation failed"));
    for(;;);                                      // Don't proceed, loop forever
  } 
  display.setTextSize(1);             
  display.setTextColor(SSD1306_WHITE);            // Draw white text
  display.clearDisplay();                         
  Wire.begin();
  mpu.begin();
  display.println(F("Calculating gyro offset, do not move MPU6050"));
  display.display();        
  mpu.calcGyroOffsets();                          // This does the calibration
  display.setTextSize(2);
  */          
}

void loop() {
  mpu.update(); 
  pitch = mpu.getAngleX();
  if (pitch < 0){
    pitch = 360 + pitch;
  }
  yaw = mpu.getAngleZ();
  zyaw = (int)yaw % 360;
  if (yaw < 0){
    yaw = 360 + yaw;
  }
  roll = mpu.getAngleY();
  if (roll < 0){
    roll = 360 + roll;
  }
  if((millis()-timer)>10)                         // print data every 10ms
  {  
  lcd.setCursor(0,0);
  lcd.print("P: ");
    lcd.setCursor(2,0);
    lcd.print(pitch);
    Serial.print("P: ");
    Serial.println(pitch);
  lcd.print(" R: ");
    lcd.print(roll);
    lcd.print("   ");
    Serial.print(" R: ");
    Serial.println(roll);
  lcd.setCursor(0,1);
  lcd.print("Y: ");
    lcd.print(yaw);   
    lcd.print(" ");
    Serial.print("Y: ");
    Serial.println(yaw);       
    timer = millis(); 
  if (yaw>174.5){
  float degreesimple = yaw;
  if (degreesimple>= 0 && degreesimple <= 11.25){
    Serial.println("N");
    lcd.setCursor(13,1);
    lcd.print("  N");
  }
  if (degreesimple>= 11.25 && degreesimple<= 33.75){
    Serial.println("NNW");
    lcd.setCursor(13,1);
    lcd.print("NNW");
  }
  if (  degreesimple >= 33.75 &&    degreesimple <= 56.25){
    Serial.println("NW");
    lcd.setCursor(13,1);
    lcd.print(" NW");
  }
  if (  degreesimple >= 56.25 &&   degreesimple <= 78.75){
    Serial.println("WNW");
    lcd.setCursor(13,1);
    lcd.print("WNW");
   
  }
  if (  degreesimple >= 78.75 &&   degreesimple <= 101.25){
    Serial.println("W");
    lcd.setCursor(13,1);
    lcd.print("  W");
   
  }
  if (  degreesimple >= 101.25 &&   degreesimple <= 123.75){
    Serial.println("WSW");
    lcd.setCursor(13,1);
    lcd.print("WSW");
   
  }
  if (  degreesimple >= 123.75 &&   degreesimple <= 146.25){
    Serial.println("SW");
    lcd.setCursor(13,1);
    lcd.print(" SW");
   
  }
  if (  degreesimple >= 146.25 &&   degreesimple <= 168.75){
    Serial.println("SSW");
    lcd.setCursor(13,1);
    lcd.print("SSW");
   
  }
  if (  degreesimple >= 168.75 &&   degreesimple <= 191.25){
    Serial.println("S");
    lcd.setCursor(13,1);
    lcd.print("  S");
   
  }
  if (  degreesimple >= 191.25 &&   degreesimple <= 213.75){
    Serial.println("SSE");
    lcd.setCursor(13,1);
    lcd.print("SSE");
   
  }
  if (  degreesimple >= 213.75 &&   degreesimple <= 236.25){
    Serial.println("SE");
    lcd.setCursor(13,1);
    lcd.print(" SE");
   
  }
  if (  degreesimple >= 236.25 &&   degreesimple <= 258.75){
    Serial.println("ESE");
    lcd.setCursor(13,1);
    lcd.print("ESE");
   
  }
   if (  degreesimple >= 258.75 &&   degreesimple <= 281.25){
    Serial.println("E");
    lcd.setCursor(13,1);
    lcd.print("  E");
   
  }
  if (  degreesimple >= 281.25 &&   degreesimple <= 303.75){
    Serial.println("ENE");
    lcd.setCursor(13,1);
    lcd.print("ENE");
   
  }
  if (  degreesimple >= 303.75 &&   degreesimple <= 326.25){
    Serial.println("NE");
    lcd.setCursor(13,1);
    lcd.print(" NE");
   
  }
  if (  degreesimple >= 326.25 &&   degreesimple <= 348.75){
    Serial.println("NNE");
    lcd.setCursor(13,1);
    lcd.print("NNE");
   
  }
  if (  degreesimple >= 348.75 &&   degreesimple <= 360){
    Serial.println("N");
    lcd.setCursor(13,1);
    lcd.print("  N");
  }
  }
  if (yaw<174.5){
  float degreesimple = yaw;
  if (degreesimple>= 0 && degreesimple <= 11.25){
    Serial.println("N");
    lcd.setCursor(13,1);
    lcd.print("  N");
  }
  if (degreesimple>= 11.25 && degreesimple<= 33.75){
    Serial.println("NNW");
    lcd.setCursor(13,1);
    lcd.print("NNW");
  }
  if (  degreesimple >= 33.75 &&    degreesimple <= 56.25){
    Serial.println("NW");
    lcd.setCursor(13,1);
    lcd.print(" NW");
  }
  if (  degreesimple >= 56.25 &&   degreesimple <= 78.75){
    Serial.println("WNW");
    lcd.setCursor(13,1);
    lcd.print("WNW");
   
  }
  if (  degreesimple >= 78.75 &&   degreesimple <= 101.25){
    Serial.println("W");
    lcd.setCursor(13,1);
    lcd.print("  W");
   
  }
  if (  degreesimple >= 101.25 &&   degreesimple <= 123.75){
    Serial.println("WSW");
    lcd.setCursor(13,1);
    lcd.print("WSW");
   
  }
  if (  degreesimple >= 123.75 &&   degreesimple <= 146.25){
    Serial.println("SW");
    lcd.setCursor(13,1);
    lcd.print(" SW");
   
  }
  if (  degreesimple >= 146.25 &&   degreesimple <= 168.75){
    Serial.println("SSW");
    lcd.setCursor(13,1);
    lcd.print("SSW");
   
  }
  if (  degreesimple >= 168.75 &&   degreesimple <= 191.25){
    Serial.println("S");
    lcd.setCursor(13,1);
    lcd.print("  S");
   
  }
  if (  degreesimple >= 191.25 &&   degreesimple <= 213.75){
    Serial.println("SSE");
    lcd.setCursor(13,1);
    lcd.print("SSE");
   
  }
  if (  degreesimple >= 213.75 &&   degreesimple <= 236.25){
    Serial.println("SE");
    lcd.setCursor(13,1);
    lcd.print(" SE");
   
  }
  if (  degreesimple >= 236.25 &&   degreesimple <= 258.75){
    Serial.println("ESE");
    lcd.setCursor(13,1);
    lcd.print("ESE");
   
  }
   if (  degreesimple >= 258.75 &&   degreesimple <= 281.25){
    Serial.println("E");
    lcd.setCursor(13,1);
    lcd.print("  E");
   
  }
  if (  degreesimple >= 281.25 &&   degreesimple <= 303.75){
    Serial.println("ENE");
    lcd.setCursor(13,1);
    lcd.print("ENE");
   
  }
  if (  degreesimple >= 303.75 &&   degreesimple <= 326.25){
    Serial.println("NE");
    lcd.setCursor(13,1);
    lcd.print(" NE");
   
  }
  if (  degreesimple >= 326.25 &&   degreesimple <= 348.75){
    Serial.println("NNE");
    lcd.setCursor(13,1);
    lcd.print("NNE");
   
  }
  if (  degreesimple >= 348.75 &&   degreesimple <= 360){
    Serial.println("N");
    lcd.setCursor(13,1);
    lcd.print("  N");
  }
  }
 /** if(yaw<=346.8){
    lcd.setCursor(15,1);
    lcd.print("W");
    if(yaw<=256.8){
      lcd.setCursor(14,1);
      lcd.print("N");
        if(yaw<=211.8){
          lcd.setCursor(13,1);
          lcd.print("N");
        }
        else{
          lcd.setCursor(13,1);
          lcd.print("W");
        }
    }
  }
  if(yaw>=166.8){
    lcd.setCursor(15,1);
    lcd.print("W");
    if(yaw<=256.8){
      lcd.setCursor(14,1);
      lcd.print("N");
        if(yaw<=211.8){
          lcd.setCursor(13,1);
          lcd.print("N");
        }
        else{
          lcd.setCursor(13,1);
          lcd.print("W");
        }
    }
  }
    else{
      lcd.setCursor(14,1);
      lcd.print("S");
         if(yaw>=301.8){
          lcd.setCursor(13,1);
          lcd.print("S");
        }
        else{
          lcd.setCursor(13,1);
          lcd.print("W");
        }
    }
  }
  if(round(yaw)=332){
    lcd.setCursor(15,1);
    lcd.print("S");
    lcd.setCursor(14,1);
    lcd.print("S");
    lcd.setCursor(13,1);
    lcd.print("S");
    }
  }
  else{
    lcd.setCursor(15,1);
    lcd.print("E");
    if(yaw>=76.8){
      lcd.setCursor(14,1);
      lcd.print("N");
        if(yaw>=121.8){
          lcd.setCursor(13,1);
          lcd.print("N");
        }
        else{
          lcd.setCursor(13,1);
          lcd.print("E");
        }
    }
     else{
      lcd.setCursor(14,1);
      lcd.print("S");
        if(yaw<=31.8){
          lcd.setCursor(13,1);
          lcd.print("S");
        }
        if(yaw>=351.51){
          lcd.setCursor(13,1);
          lcd.print("S");
        }
        else{
          lcd.setCursor(13,1);
          lcd.print("E");
     }
  }
  }
  */
}
}
