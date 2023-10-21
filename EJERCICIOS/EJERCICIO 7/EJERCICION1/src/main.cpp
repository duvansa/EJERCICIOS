#include <Arduino.h>

void setup() {
 Serial.begin(9600);
 Serial.println();

Serial.println("Digite el valor de a:");
while (!Serial.available()) {}
float numbera = Serial.parseFloat();
Serial.println ("EL NUMERO A ES :"+ String(numbera));

Serial.println("Digite el valor de b:");
while (!Serial.available()) {}
float numberb = Serial.parseFloat();
Serial.println ("EL NUMERO B ES :"+ String(numberb));

Serial.println("Digite el valor de c:");
while (!Serial.available()) {}
float numberc = Serial.parseFloat();
Serial.println ("EL NUMERO C ES :"+ String(numberc));

Serial.println("Digite el valor de d:");
while (!Serial.available()) {}
float numberd = Serial.parseFloat();
Serial.println ("EL NUMERO D ES :"+ String(numberd));

Serial.println("Digite el valor de e:");
while (!Serial.available()) {}
float numbere = Serial.parseFloat();
Serial.println ("EL NUMERO E ES :"+ String(numbere));

Serial.println("Digite el valor de f:");
while (!Serial.available()) {}
float numberf = Serial.parseFloat();
Serial.println ("EL NUMERO F ES :"+ String(numberf));

Serial.println("Resultado 1: " + String((numbera+(numberb/numberc))/(numberd+(numbere/numberf))));

Serial.println("Resultado 2: " + String((numbera+(numberb)/(numberc-numberd))));



}

void loop() {


}

