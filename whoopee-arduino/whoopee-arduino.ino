#include <WiFi.h>
#include <WebServer.h>
#include <WiFiUdp.h>
//#include <OSCMessage.h>

const int sensorPin = 4;

int sensorVal = 0;

int buttonPushCounter = 0;   // counter for the number of button presses
int buttonState = 0;         // current state of the button
int lastButtonState = 0;     // previous state of the button

const int thingOn = 1;
const int thingOff = 0;

/* Put your SSID & Password */
const char* ssid = "tdubz";  // Enter SSID here
const char* password = "tantantheman";  //Enter Password here

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
  /*   if (sensorVal != lastButtonState) {
   // Serial.print("hurr");
    // if the state has changed, increment the counter
    if (sensorVal == LOW) {
      // if the current state is HIGH then the button went from off to on:
      buttonPushCounter++;
      udp.print(thingOn, DEC);
      Serial.println(thingOn, DEC);
    } else {
      // if the current state is LOW then the button went from on to off:
      //Serial.println("off");
      udp.print(thingOff, DEC);
      Serial.println(thingOff, DEC);
    } 
   }
   else 
   {
    udp.print(thingOff, DEC); 
    Serial.println(thingOff, DEC);
   } 
   */
    //udp.printf("%i", sensorPin);
    //udp.printf("hello there!");
   // udp.endPacket();
   Serial.println(sensorVal);
   udp.print(String(sensorVal));
  // lastButtonState = sensorVal;

   udp.endPacket();
  //Wait for 1 second
  delay(100);
  
}
