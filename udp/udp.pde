import hypermedia.net.*;
int PORT = 60001;
String IP = "192.168.1.2";
UDP udp;

int sensorValue = 0;

void setup() {
  udp = new UDP(this, PORT, IP);
  udp.listen(true);

  size(500, 500);
  colorMode(HSB);
}

void draw() {

  background(map(sensorValue, 3500, 4050, 0, 255), 255, 255);

}

void receive(byte[] data, String PORT, int IP) {
   String value = new String(data);
   sensorValue = int(value);
   println(int(value));
} 
