// This is obsoloute so you will get default temprature around 52 or 53 from chip,=.
#include <WiFi.h> 

#ifdef __cplusplus
extern "C" {
#endif
uint8_t temprature_sens_read();
#ifdef __cplusplus
}
#endif
uint8_t temprature_sens_read();


const char *ssid =  "Excitel";     
const char *pass =  "9998332670";

WiFiClient client;



void setup() {
  Serial.begin(115200);
       delay(10);
 
       Serial.println("Connecting to ");
       Serial.println(ssid);
 
 
       WiFi.begin(ssid, pass);
 
      while (WiFi.status() != WL_CONNECTED) 
     {
            delay(500);
            Serial.print(".");
     }
      Serial.println("");
      Serial.println("WiFi connected");
  
}

void loop() {
  Serial.print("Temperature: ");
  
  Serial.print((temprature_sens_read() - 32) / 1.8);
  Serial.println(" C");
  delay(500);
}
