#include <Arduino.h>

void setup() {
Serial.begin(9600);
Serial.println();

  Serial.println("Digite su edad");
while (!Serial.available()) {}
int edad = Serial.parseInt();
Serial.println ("SU EDAD ES :"+ String(edad));

Serial.println("DIGITE N1");
while (!Serial.available()) {}
int N1 = Serial.parseInt();
Serial.println ("SU N1 ES :"+ String(N1));

Serial.println("DIGITE N2");
while (!Serial.available()) {}
int N2 = Serial.parseInt();
Serial.println ("SU N2 ES :"+ String(N2));

Serial.println("DIGITE N3");
while (!Serial.available()) {}
int N3 = Serial.parseInt();
Serial.println ("SU N3 ES :"+ String(N3));

Serial.println("DIGITE N4");
while (!Serial.available()) {}
int N4 = Serial.parseInt();
Serial.println ("SU N4 ES :"+ String(N4));


if((edad>=18)&&(edad<=25)) {
 Serial.println("SU EDAD ESTA EN EL RANGO DE 18 A 25");
  }
else {
  Serial.println("SU EDAD NO ESTA EN DICHO RANGO");
  }
if ((N4=N1)&&((N4=N2)&&(N4=N3))){
  Serial.println("ESTE NUMERO NO CONINCIDE CON LOS ANTERIORES");
  }
else{
  Serial.println("SU NUMERO CONINCIDE CON LOS NUMEROS ");
  }
}

void loop() {
 

}

