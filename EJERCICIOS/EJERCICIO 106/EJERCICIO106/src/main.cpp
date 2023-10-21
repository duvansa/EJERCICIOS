#include <Arduino.h>

struct Nodo {
  int dato;
  Nodo* siguiente;
};

void menu();
void insertarLista(Nodo*&, int);
void mostrarLista(Nodo*);
bool buscarLista(Nodo*, int);

Nodo* lista = NULL; // Declarar lista globalmente

void setup() {
  Serial.begin(9600);
  menu();
}

void menu() {
  int opcion, dato;
  do {
    Serial.println("MENU:");
    Serial.println("1. Insertar elemento en la lista");
    Serial.println("2. Mostrar lista");
    Serial.println("3. Buscar elemento en la lista");
    Serial.println("4. Salir");
    Serial.print("Opcion: ");
    while (!Serial.available());

    opcion = Serial.parseInt();

    switch (opcion) {
      case 1:
        Serial.println("Digite un numero: ");
        while (!Serial.available());
        dato = Serial.parseInt();
        insertarLista(lista, dato);
        break;

      case 2:
        mostrarLista(lista);
        break;

      case 3:
        Serial.println("Digite el elemento a buscar: ");
        while (!Serial.available());
        dato = Serial.parseInt();
        if (buscarLista(lista, dato)) {
          Serial.println("El elemento " + String(dato) + " se encuentra en la lista.");
        } else {
          Serial.println("El elemento " + String(dato) + " no se encuentra en la lista.");
        }
        break;

      case 4:
        break;

      default:
        Serial.println("Opcion no valida. Por favor, ingrese una opcion valida.");
        break;
    }
  } while (opcion != 4);
}

void insertarLista(Nodo*& lista, int n) {
  Nodo* nuevo_nodo = new Nodo();
  nuevo_nodo->dato = n;
  nuevo_nodo->siguiente = lista;
  lista = nuevo_nodo;
}

void mostrarLista(Nodo* lista) {
  Serial.println("Elementos de la lista:");
  Nodo* actual = lista;
  while (actual != NULL) {
    Serial.println(actual->dato);
    actual = actual->siguiente;
  }
}

bool buscarLista(Nodo* lista, int elemento) {
  Nodo* actual = lista;
  while (actual != NULL) {
    if (actual->dato == elemento) {
      return true;
    }
    actual = actual->siguiente;
  }
  return false;
}

void loop() {
 
}


