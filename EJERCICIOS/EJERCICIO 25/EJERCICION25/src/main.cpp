#include <Arduino.h>




void setup() {
 Serial.begin(9600);
  Serial.println();
  int suma = 0;

 Serial.println("Digite el numero de elementos");
while (!Serial.available()) {}
int n = Serial.parseInt();
Serial.println ("SU NUMERO DE ELEMENTOS ES :"+ String(n));

for (int i = 1; i <= n; i++) {
    suma += i;
  }
Serial.print("LA SUMA ES: ");
  Serial.println(suma);

}

void loop() {


 
}


