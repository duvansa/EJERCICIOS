#include <Arduino.h>



void intercambio(int&, int&);

void setup() {
  Serial.begin(9600);

  int num1, num2;

  Serial.println("Ingrese el valor de num1: ");
  while (!Serial.available()) {}
  num1 = Serial.parseInt();

  Serial.println("Ingrese el valor de num2: ");
  while (!Serial.available()) {}
  num2 = Serial.parseInt();

  Serial.println("El valor almacenado en num1 es: " + String(num1));
  Serial.println("El valor almacenado en num2 es: " + String(num2));

  intercambio(num1, num2);

  Serial.println("Ahora el nuevo valor de num1 es: " + String(num1));
  Serial.println("Ahora el nuevo valor de num2 es: " + String(num2));
}

void loop() {
}

void intercambio(int& num1, int& num2) {
  int aux;
  aux = num1;
  num1 = num2;
  num2 = aux;
}