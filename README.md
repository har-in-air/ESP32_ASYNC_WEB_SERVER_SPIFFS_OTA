# Demonstrates use of ESP32 Async Web Server 
* Optionally configure as 
	* station connecting to existing Access Point 
	* stand-alone Access Point
* Connect to 'http://esp32.local' for webpage access using ESPmDNS
* User and password authentication for webpage acess
* SPIFFS directory access for non *.bin files
	* file list
	* upload replacement or new file
	* download existing file
	* delete existing file
* OTA firmware update. On file upload, if you select a '*.bin' file, it is not uploaded to the SPIFFS partition 
but is treated as a firmware update.
* Reboot
* SPIFFS hosted .html and style.css files. These can be replaced to modify webpage functionality and
look without recompiling a new binary.
* Visual Studio Code + Platformio plugin using Espressif Arduino framework


## Credits

This is a mashup and cleanup of functionality from the following repositories:
* https://github.com/smford/esp32-asyncwebserver-fileupload-example
* https://randomnerdtutorials.com/esp32-web-server-spiffs-spi-flash-file-system/


## Project Notes

<p align="center">
  <img src="docs/vsc_platformio.png" width="600">
</p>
<p align="center">
  <img src="docs/login.png" width="600">
</p>
<p align="center">
  <img src="docs/directory_listing.png" width="600">
</p>
<p align="center">
  <img src="docs/ota_update.png" width="600">
</p>
<p align="center">
  <img src="docs/rebooting.png" width="600">
</p>
<p align="center">
  <img src="docs/logged_out.png" width="600">
</p>
