#include <Arduino.h>

void setup() {
  Serial.begin(9600);
  Serial.println();

  char palabra1[] = "becerro";
  char palabra2[] = "avion";

  int resultado = strcmp(palabra1, palabra2);

  if (resultado > 0) {
    Serial.println ("palabra 1 esta después alfabéticamente:"+ String(palabra1));
  } else if (resultado < 0) {
   Serial.println ("palabra 2 esta después alfabéticamente:"+ String(palabra2));
  } else {
    Serial.println("Las palabras son iguales.");
  }
}

void loop() {
}
