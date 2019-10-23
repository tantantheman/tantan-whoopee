import hypermedia.net.*;
import ddf.minim.*;
import ddf.minim.spi.*;
import ddf.minim.ugens.*;
Minim minim;
AudioPlayer fart1; 

int PORT = 60001;
String IP = "192.168.1.2";
UDP udp;

int farting = 0;
int fartOnePlayed = 0;
int fartTwoPlayed = 0;
int fartOk = 0;


int sensorValue = 0;

FilePlayer fartPlayer;
String fileName1 = "fart2.wav";

void setup() {
  udp = new UDP(this, PORT, IP);
  udp.listen(true);
  
  minim = new Minim(this);
  fart1 = minim.loadFile("fart2.wav");
  //fartPlayer = new FilePlayer (minim.loadFileStream("fart2.wav"));

  size(500, 500);
  colorMode(HSB);
}

void draw() {

  //background(map(sensorValue, 3500, 4050, 0, 255), 255, 255);
  if (sensorValue == 1)
  {

    fart1.play();
        fartOnePlayed = 1;

    //delay(100);
  }
  if (sensorValue == 1)
  {
    if (fartOnePlayed == 1)
    {
      println("FART REWIND");
      fart1.rewind();
      fartOnePlayed = 0;
    }
  }
  

}

void receive(byte[] data, String PORT, int IP) {
   String value = new String(data);
   sensorValue = int(value);
   println(int(value));
} 
