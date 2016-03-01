#include <ADS1112.h>
#include <Wire.h>
 
ADS1112 ads1112;
 
void setup()
{
  Wire.begin();
  Serial.begin(9600);
   
  //pin A0, A1 tied to GND. Address: 1001000
  ads1112.init(ADS1112::L, ADS1112::L);
  ads1112.selectChannel(ADS1112::CHANNEL_1, ADS1112::GAIN_1, ADS1112::MODE_UNIPOLAR);
}
 
void loop()
{
  Serial.println(ads1112.readADC(), 3);
  delay(100);
}
