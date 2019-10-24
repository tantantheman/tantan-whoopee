# Introducing: The Wireless Whoopee Wonder, a Fart-O-Matic Accessory

![alt text][intro]

[intro]: https://github.com/tantantheman/tantan-whoopee/blob/master/documentation_photos/cushionslant.jpg "Wireless Whoopee Wonder"

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
To create the wireless whoopee cushion, the parts required were essentially a battery, an ESP32, and a contact sensor. A prototype of the contact sensor was quickly made out of craft foam and foil.   

![alt text][proto]

[proto]: https://github.com/tantantheman/tantan-whoopee/blob/master/documentation_photos/sensorprototype.jpg "Contact Sensor Prototype"

The refined contact sensor, the final whoopee cushion, was created by using two paper plates, electrical tape, pieces of sponge, copper tape, and aluminum foil. Foil was taped onto the inside faces of the plates, with copper tape placed over it to act as the "lead". Each plate was connected via alligator clip and wire to the ESP32, one to ground and one to Pin 4. Two pieces of sponge act as spacers to prevent unwanted contact from the foil, as well as a means for the plates to bounce back once the person has inevitably jumped out of the chair in surprise. Finally, the tapes are taped together to give it some tension and prevent them from separating. 

![alt text][plates]

[plates]: https://github.com/tantantheman/tantan-whoopee/blob/master/documentation_photos/plateoverview.jpg "Overview of Plates"
  
The wires go into the black box that goes underneath the chair. In the box are the battery and ESP32. They remain hidden from view.  

![alt text][components]

[components]: https://github.com/tantantheman/tantan-whoopee/blob/master/documentation_photos/insidethebox.jpg "Components Inside Box"

The code for the ESP32 utilizes UDP messaging, sending UDP messages over WiFi to the specified port. This is received by the Processing sketch on the other device, which will let the sketch know when the sensor is in fact pressed. Most of the code was reused after modification from the Fart-O-Matic project.

**Technical Difficulties:**  
There were several difficulties faced during the build process. Mostly, incorporating the battery and WiFi proved to be the two most unreliable portions of the project, with the sensor being relatively simple and thus less prone to breakage.  

**Video**  
A video of the Wireless Whoopee Wonder in action can be found here:  
https://youtu.be/ycoiD_P1CKs