#ifndef WIFI_CONTROL_H
#define WIFI_CONTROL_H

#include <Arduino.h>
extern unsigned long previousMillis123;
extern const unsigned long resetCounterTime;

String getDeviceMacAddress();
void initNetwork();
void initWifi();
bool isWifiConnected();
void initHotspot();
void deactivateHotspot();
String readStringFromEEPROM(int start, int end);
bool shouldResetCounterTime();

#endif
