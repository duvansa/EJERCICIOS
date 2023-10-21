#include <Arduino.h>

struct Nodo {
  int dato;
  Nodo *siguiente;
};

void agregarPila(Nodo *&, int);
void sacarPila(Nodo *&, int&);

Nodo *pila = NULL; // Declarar pila globalmente

void setup() {
  Serial.begin(9600);

  int dato1, dato2;

  Serial.println("Digite un numero: ");
  while (!Serial.available()) {}
  dato1 = Serial.parseInt();
  agregarPila(pila, dato1);

  Serial.println("Digite otro numero: ");
  while (!Serial.available()) {}
  dato2 = Serial.parseInt();
  agregarPila(pila, dato2);

  Serial.println("Sacando los elementos de la pila:");
  while (pila != NULL) {
    sacarPila(pila, dato1);
    if (pila != NULL) {
      Serial.print(String(dato1) + ", ");
    } else {
      Serial.print(String(dato1) + ".");
    }
  }
}

void agregarPila(Nodo *&pila, int n) {
  Nodo *nuevo_nodo = new Nodo();
  nuevo_nodo->dato = n;
  nuevo_nodo->siguiente = pila;
  pila = nuevo_nodo;
  Serial.println("Elemento " + String(n) + " ha sido agregado a la PILA correctamente");
}

void sacarPila(Nodo *&pila, int &n) {
  Nodo *aux = pila;
  n = aux->dato;
  pila = aux->siguiente;
  delete aux;
}
void loop() {
  // Tu código en el loop, si es necesario.
}

