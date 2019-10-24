# Introducing: The Wireless Whoopee Wonder, a Fart-O-Matic Accessory
Module 3. Wireless Whoopee Cushion.

A wireless whoopee cushion for class. Module 3, Task 2 (Installation Art).  
Programming in both Processing and Arduino IDE.  

**Dependencies:**  
Wifi.h  
WebServer.h  
WiFiUdp.h  
Hypermedia UDP Library (Processing)  
ddf.minim  

**How to run:**
Attach Whoopee box on underside of desired chair, and place connected cushion device on top of chair. Make sure the battery is powering the box, and have your sound device connected to the box's wireless network. The SSID is "Whoopee" and the password is "itsfartingtime".

On either a laptop with a speaker or the Fart-O-Matic, run the whoopee_processing/whoopee_processing.pde sketch while connected to the "Whoopee" wireless network. When someone sits on the cushion, a fart sound should be outputted to the sketch device. This will allow you to conceal the fart machine better, perhaps hidden whilst connected to a large speaker for maximum humor.
  
**Implementation:**  
To create the wireless whoopee cushion, the parts required were essentially a battery, an ESP32, and a contact sensor. The contact sensor was created by using two paper plates, electrical tape, pieces of sponge, copper tape, and aluminum foil. Foil was taped onto the inside faces of the plates, with copper tape placed over it to act as the "lead". Each plate was connected via alligator clip and wire to the ESP32, one to ground and one to Pin 4. 