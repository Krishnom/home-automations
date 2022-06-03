#include <Blynk.h>
#include <SPI.h>
#include <WiFiNINA.h>
#include <BlynkSimpleWiFiNINA.h>

#define LED A0 //Connect relay1(Connected to LED) to pin 2
#define NIGHT_BULB A1 //Connect relay2(Connected to NIGHT_BULB) to pin 3
#define FAN A2 //Connect relay3(Connected to FAN) to pin 4
#define TUBELIGHT A3 //Connect relay4(Connected to TUBELIGHT) to pin 5

/ You should get Auth Token in the Blynk App.
// Go to the Project Settings (nut icon).
char auth[] = "abPb3-wt5mseeDHZ115-xz4zQJxYXb--";

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "manish-jio";
char pass[] = "Manish09091992#";

void setup() {
  // Debug console
  Serial.begin(9600);

  Blynk.begin(auth, ssid, pass);
  
  pinMode(LED, OUTPUT); //Set relay1 as an output
  pinMode(NIGHT_BULB, OUTPUT); //Set relay2 as an output
  pinMode(FAN, OUTPUT); //Set relay1 as an output
  pinMode(TUBELIGHT, OUTPUT); //Set relay2 as an output
 
  digitalWrite(LED, LOW); //Switch LED off
  digitalWrite(NIGHT_BULB, LOW); //Swtich NIGHT_BULB off
  digitalWrite(FAN, LOW); //Switch FAN off
  digitalWrite(TUBELIGHT, LOW); //Swtich TUBELIGHT off
}

void loop() {
  Blynk.run();
}

void onLedChange() {
  digitalWrite(LED, led);
}

void onTubelightChange() {
  digitalWrite(TUBELIGHT, tubelight);
}

void onFanChange() {
  digitalWrite(FAN, fan);
}

void onNightBulbChange() {
  digitalWrite(NIGHT_BULB, night_bulb);
}
