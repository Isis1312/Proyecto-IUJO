#include <iostream>
#include <cmath>
#include <cstdlib> // Para usar system("cls") o system("clear")

using namespace std;

// Funcion para calcular el logaritmo con una base especificada
double logBase(double a, double base) {
    if (base <= 0) {
        cerr << "Error: La base debe ser un numero positivo." << endl;
        return NAN; // Devuelve No es un Numero si la base no es v�lida
    }
    return log(a) / log(base);
}

// Funcion para calcular el logaritmo con una raiz como base
double logRoot(double a, double root) {
    if (root <= 0) {
        cerr << "Error: La raiz debe ser un numero positivo." << endl;
        return NAN; 
    }
    return logBase(a, pow(root, 1.0 / root));
}

// Funci�n para calcular el logaritmo con una fraccion como base
double logFraction(double a, double nume, double deno) {
    if (deno == 0) {
        cerr << "Error: El denominador no puede ser cero." << endl;
        return NAN; // Devuelve No es un Nomero si el denominador es cero
    }
    return logBase(a, nume / deno);
}

// Funcion para limpiar la pantalla dependiendo del sistema operativo
void limpiarPantalla() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

int main() {
    char respuesta;
    int opcion;
    double x, base, nume, deno, root, resultado;
    bool respuesta_valida = false;

    do {
        limpiarPantalla();  // Limpiar la pantalla antes de mostrar el menu
        cout << "Bienvenido a la calculadora de logaritmos" << endl;
        cout << "1. Calcular logaritmo con una base especificada" << endl;
        cout << "2. Calcular logaritmo con una raiz como base" << endl;
        cout << "3. Calcular logaritmo con una fraccion como base" << endl;
        cout << "Ingrese una opcion: ";
        cin >> opcion;

        limpiarPantalla();  // Limpiar la pantalla cuando se selecciona una opcion

        switch (opcion) {
            case 1:
                cout << "Opcion seleccionada: Calcular logaritmo con una base especificada" << endl;
                cout << "Ingrese un numero: ";
                cin >> x;
                cout << "Ingrese la base: ";
                cin >> base;

                resultado = logBase(x, base);
                cout << "El resultado del logaritmo es: " << resultado << endl;
                break;

            case 2:
                cout << "Opcion seleccionada: Calcular logaritmo con una raiz como base" << endl;
                cout << "Ingrese un numero: ";
                cin >> x;
                cout << "Ingrese una raiz: ";
                cin >> root;

                resultado = logRoot(x, root);
                cout << "El resultado del logaritmo en base de raiz es: " << resultado << endl;
                break;

            case 3:
                cout << "Opción seleccionada: Calcular logaritmo con una fraccion como base" << endl;
                cout << "Ingrese un número: ";
                cin >> x;
                cout << "Ingrese un numerador: ";
                cin >> nume;
                cout << "Ingrese un denominador: ";
                cin >> deno;

                resultado = logFraction(x, nume, deno);
                cout << "El resultado del logaritmo en base de fraccion es: " << resultado << endl;
                break;

            default:
                cout << "ERROR! Esta opcion no esta disponible." << endl;
                break;
        }

        cout << endl;
        cout << "Desea volver a ejecutar la calculadora? (s/n): ";
        cin >> respuesta;

          while (!respuesta_valida) {
            if (respuesta == 's' || respuesta == 'S' || respuesta == 'n' || respuesta == 'N') {
                respuesta_valida = true;
            } else {
                std::cout << "Respuesta no valida. Por favor, ingrese 's' o 'n': ";
                std::cin >> respuesta;
            }
        }

        respuesta_valida = false; 
    } while (respuesta == 's' || respuesta == 'S');

    limpiarPantalla();
    cout << "Gracias por utilizar nuestra calculadora" << endl;

    return 0;
}