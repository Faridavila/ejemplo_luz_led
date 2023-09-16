#include <Arduino.h>
#include  <WiFi.h>


const char * ssid = "Francisco_mayor";
const char * pass = "Pollo317211";
const int port = 80;


void setup() {
  Serial.begin(115200); //configuramos a 115200 bits por segundo
  WiFi.begin(ssid, pass); //Inicializamos el modulo Wifi y que se vincule a la red indicada en el ssid
  while(WiFi.status() != WL_CONNECTED){
    Serial.print(".");
    delay(1000);
  }
  Serial.println(" Conectado!");
  Serial.print("Direccion IP: ");
  Serial.println(WiFi.localIP());

  pinMode(2, OUTPUT); //Configuramos el pin 2 como salida
  digitalWrite(2, HIGH); //Encendemos el LED 
}

void loop() {
  delay(500); //Retardo de 500ms
  digitalWrite(2, LOW); //Apagar el Led
  delay(500);
  digitalWrite(2, HIGH);
  
  }





 