#include <WiFi.h>
#include <WebServer.h>
#include <WiFiUdp.h>
//#include <OSCMessage.h>

const int sensorPin = 35;

int sensorVal = 0;


/* Put your SSID & Password */
const char* ssid = "TanTan32";  // Enter SSID here
const char* password = "TanTan32";  //Enter Password here

/* Put IP Address details */
IPAddress local_ip(192,168,1,1);
IPAddress gateway(192,168,1,1);
IPAddress subnet(255,255,255,0);

WebServer server(80);

WiFiUDP udp;

void setup() {
  Serial.begin(115200);

  WiFi.softAP(ssid, password);
  WiFi.softAPConfig(local_ip, gateway, subnet);
  pinMode(sensorPin, INPUT);
  server.begin();
}

void loop(){

   // lightval = analogRead(light);
   sensorVal = digitalRead(sensorPin);
    udp.beginPacket("192.168.1.2",60001);
    udp.printf("%i", sensorPin);
    udp.printf("hello there!");
    udp.endPacket();
  
  //Wait for 1 second
  delay(100);
  
}
