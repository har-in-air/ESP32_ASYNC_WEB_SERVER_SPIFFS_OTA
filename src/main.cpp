#include <Arduino.h>
#include <SPIFFS.h>
#include "async_server.h"


void setup() {
	Serial.begin(115200);
	Serial.printf("\r\n\r\nBinary compiled on %s at %s\r\n", __DATE__, __TIME__);
	Serial.println("Mounting SPIFFS ...");
	if (!SPIFFS.begin(true)) {
		// if you have not used SPIFFS before on a ESP32, it will show this error.
		// after a reboot SPIFFS will be configured and will happily work.
		Serial.println("ERROR: Cannot mount SPIFFS, Rebooting");
		delay(1000);
		ESP.restart();
		}

	server_init();
	}


void loop() {
  if (IsRebootRequired) {
	  Serial.println("Rebooting ESP32: "); 
	  ESP.restart();
	  }
}

