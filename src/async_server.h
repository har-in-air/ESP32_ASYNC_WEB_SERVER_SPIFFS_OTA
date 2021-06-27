#ifndef ASYNC_SERVER_H_
#define ASYNC_SERVER_H_

#include <ESPAsyncWebServer.h>

extern AsyncWebServer *server;
extern bool IsRebootRequired;

void server_init();

#endif
