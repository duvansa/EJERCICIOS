#include <Arduino.h>

struct NodoArbol {
  int dato;
  NodoArbol* izquierdo;
  NodoArbol* derecho;
};

NodoArbol* arbol = NULL; // Declarar el árbol globalmente

void insertarArbol(NodoArbol*&, int);
void mostrarArbol(NodoArbol*);
bool buscarArbol(NodoArbol*, int);

void setup() {
  Serial.begin(9600);
  menu();
}

void menu() {
  int opcion, dato;
  do {
    Serial.println("MENU:");
    Serial.println("1. Insertar elemento en el arbol");
    Serial.println("2. Mostrar arbol");
    Serial.println("3. Buscar elemento en el arbol");
    Serial.println("4. Salir");
    Serial.print("Opcion: ");
    while (!Serial.available());

    opcion = Serial.parseInt();

    switch (opcion) {
      case 1:
        Serial.println("Digite un numero: ");
        while (!Serial.available());
        dato = Serial.parseInt();
        insertarArbol(arbol, dato);
        break;

      case 2:
        mostrarArbol(arbol);
        break;

      case 3:
        Serial.println("Digite el elemento a buscar: ");
        while (!Serial.available());
        dato = Serial.parseInt();
        if (buscarArbol(arbol, dato)) {
          Serial.println("El elemento " + String(dato) + " se encuentra en el arbol.");
        } else {
          Serial.println("El elemento " + String(dato) + " no se encuentra en el arbol.");
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

void insertarArbol(NodoArbol*& arbol, int n) {
  if (arbol == NULL) {
    NodoArbol* nuevo_nodo = new NodoArbol();
    nuevo_nodo->dato = n;
    nuevo_nodo->izquierdo = NULL;
    nuevo_nodo->derecho = NULL;
    arbol = nuevo_nodo;
  } else {
    if (n < arbol->dato) {
      insertarArbol(arbol->izquierdo, n);
    } else {
      insertarArbol(arbol->derecho, n);
    }
  }
}

void mostrarArbol(NodoArbol* arbol) {
  if (arbol != NULL) {
    mostrarArbol(arbol->izquierdo);
    Serial.println(arbol->dato);
    mostrarArbol(arbol->derecho);
  }
}

bool buscarArbol(NodoArbol* arbol, int elemento) {
  if (arbol == NULL) {
    return false;
  }
  if (arbol->dato == elemento) {
    return true;
  }
  if (elemento < arbol->dato) {
    return buscarArbol(arbol->izquierdo, elemento);
  } else {
    return buscarArbol(arbol->derecho, elemento);
  }
}

void loop() {
  
}
