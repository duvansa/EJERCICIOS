#include <Arduino.h>

int hallarMax(int *dirVec, int nElement);

void setup() {
  Serial.begin(9600);
  const int nElementos = 5;
  int numeros[nElementos];

  Serial.println("Ingresa " + String(nElementos) + " números en desorden:");

  for (int i = 0; i < nElementos; i++) {
    while (!Serial.available()) {
      // Espera a que el usuario ingrese un número
    }
    int numero = Serial.parseInt();
    
    if (numero >= 0) {
      numeros[i] = numero;
    } else {
      Serial.println("Ingresa un número no negativo.");
      i--;  
    }
  }

  Serial.print("El mayor elemento es: ");
  Serial.println(hallarMax(numeros, nElementos));
}

int hallarMax(int *dirVec, int nElement) {
  int max = 0;

  for (int i = 0; i < nElement; i++) {
    if (*(dirVec + i) > max) {
      max = *(dirVec + i);
    }
  }

  return max;
}

void loop() {
}
