#include <Arduino.h>

void setup() {
  Serial.begin(9600);
  Serial.println("Ingrese 5 números en desorden uno por uno:");

  int numeros[5];

  for (int i = 0; i < 5; i++) {
    while (!Serial.available()) {} 
    numeros[i] = Serial.parseInt();
    Serial.print("Número ingresado: ");
    Serial.println(numeros[i]);
  }
  for (int i = 0; i < 5 - 1; i++) {
    int min = i;
    for (int j = i + 1; j < 5; j++) {
      if (numeros[j] < numeros[min]) {
        min = j;
      }
    }
    int aux = numeros[i];
    numeros[i] = numeros[min];
    numeros[min] = aux;
  }

  Serial.println("Números ordenados en orden ascendente:");
  for (int i = 0; i < 5; i++) {
    Serial.print(numeros[i]);
    Serial.print(" ");
  }
  Serial.println();

  for (int i = 0; i < 5 - 1; i++) {
    int max = i;
    for (int j = i + 1; j < 5; j++) {
      if (numeros[j] > numeros[max]) {
        max = j;
      }
    }
    int aux = numeros[i];
    numeros[i] = numeros[max];
    numeros[max] = aux;
  }

  Serial.println("Números ordenados en orden descendente:");
  for (int i = 0; i < 5; i++) {
    Serial.print(numeros[i]);
    Serial.print(" ");
  }
  Serial.println();
}

void loop() {

}