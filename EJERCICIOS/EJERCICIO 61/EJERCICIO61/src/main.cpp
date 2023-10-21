#include <Arduino.h>

struct Promedio {
  float nota1;
  float nota2;
  float nota3;
};

struct Alumno {
  char nombre[20];
  char sexo[10];
  int edad;

  struct Promedio prom;
};

void setup() {
  Serial.begin(9600);

  struct Alumno alumno1; 

  Serial.println("Digite su nombre: ");
  float promedio_alumno;
  int contador = 0;
  while (contador < 19) {
    if (Serial.available()) {
      char caracter = Serial.read();
      if (caracter == '\n') {
        alumno1.nombre[contador] = '\0';
        break;
      }
      alumno1.nombre[contador] = caracter;
      contador++;
    }
  }

  
  Serial.println("Digite su sexo (masculino o femenino): ");
  contador = 0;
  while (contador < 9) {
    if (Serial.available()) {
      char caracter = Serial.read();
      if (caracter == '\n') {
        alumno1.sexo[contador] = '\0';
        break;
      }
      alumno1.sexo[contador] = caracter;
      contador++;
    }
  }


  Serial.println("Digite su edad: ");
  while (!Serial.available()) {}
  alumno1.edad = Serial.parseInt();

  
  Serial.println("Digite la nota 1: ");
  while (!Serial.available()) {}
  alumno1.prom.nota1 = Serial.parseFloat();
  
  Serial.println("Digite la nota 2: ");
  while (!Serial.available()) {}
  alumno1.prom.nota2 = Serial.parseFloat();

  
  Serial.println("Digite la nota 3: ");
  while (!Serial.available()) {}
  alumno1.prom.nota3 = Serial.parseFloat();

  Serial.println("Datos del alumno");
  Serial.print("Nombre: ");
  Serial.println(alumno1.nombre);
  Serial.print("Sexo: ");
  Serial.println(alumno1.sexo);
  Serial.print("Edad: ");
  Serial.println(alumno1.edad);
  Serial.print("Nota 1: ");
  Serial.println(alumno1.prom.nota1);
  Serial.print("Nota 2: ");
  Serial.println(alumno1.prom.nota2);
  Serial.print("Nota 3: ");
  Serial.println(alumno1.prom.nota3);
  promedio_alumno=((alumno1.prom.nota1+alumno1.prom.nota2+alumno1.prom.nota3)/3);
  Serial.print("SU promedio es de: ");
  Serial.println(promedio_alumno);
 
}

void loop() {
  
}