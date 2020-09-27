#define BLYNK_PRINT Serial

#include <ESP8266WiFi.h>

#include <BlynkSimpleEsp8266.h>


char auth[] = "8XS3CKhZJSE1ciB70Jqu5-E7SNeKEpGR;

char ssid[] = "santosh";

char pass[] = "santosh723";


void setup()

{

// Debugging console

Serial.begin(9600);

Blynk.begin(auth, ssid, pass);

Blynk.syncAll(); //This will sync the last state of our device

}

void loop()

{

Blynk.run();

}

