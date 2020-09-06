# include <WiFi.h>;

const char* ssid = "Excitel";
const char* password. = "9998332670";

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  WiFi.begin(ssid, password);
  Serial.print("Conecting to WiFi");

  while (WiFi.status() != WL_CONNECTED)
  {
    Serial.print(".");
    delay(500);
    }
  Serial.print("Conected the WiFi network");  
  Serial.print("IP address ");  
  Serial.print(WiFi.localIP());  
}

void loop() {
  // put your main code here, to run repeatedly:
  if( (WiFi.status() == WL_CONNECTED))  //Check the current connection status
  {
  Serial.println("You can try to ping me");
  delay(5000);  
  }
  else
  {
  Serial.println("Connection lost");  
  }
}
