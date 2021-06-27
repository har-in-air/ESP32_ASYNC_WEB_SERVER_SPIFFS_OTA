#include <Arduino.h>
#include <SPIFFS.h>
#include "async_server.h"

void setup() {
	Serial.begin(115200);
	Serial.printf("\r\n\r\nBinary compiled on %s at %s\r\n", __DATE__, __TIME__);
	Serial.println("Mounting SPIFFS ...");
	if (!SPIFFS.begin(true)) {
		// SPIFFS will be configured on reboot
		Serial.println("ERROR: Cannot mount SPIFFS, Rebooting");
		delay(1000);
		ESP.restart();
		}

	server_init();
	// your application initialization code ...
	}


void loop() {
	if (IsRebootRequired) {
		Serial.println("Rebooting ESP32: "); 
		ESP.restart();
		}
	// your application loop ...
	}

