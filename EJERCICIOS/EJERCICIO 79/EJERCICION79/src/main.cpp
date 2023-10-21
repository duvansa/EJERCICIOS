#include <Arduino.h>

int factoria(int n) {
  if (n == 0) {
    return 1;
  } else {
    return n * factoria(n - 1);
  }
}

void setup() {
  Serial.begin(9600);
  while (!Serial) {
     
  }

  Serial.println("Ingrese un número para calcular el factorial:");
}

void loop() {
  if (Serial.available() > 0) {
    int num1 = Serial.parseInt();
    if (num1 >= 0) {
      Serial.print("El factorial de ");
      Serial.print(num1);
      Serial.print(" es: ");
      Serial.println(factoria(num1));
    } else {
      Serial.println("Ingrese un número no negativo.");
    }
  }
}
