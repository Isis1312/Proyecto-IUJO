#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

// Estructura para representar un artículo
struct Articulo {
    string titulo;
    string fecha;
    string directorio;
};

// Función para agregar un nuevo artículo al arreglo
void agregarArticulo(vector<Articulo>& articulos) {
    Articulo nuevoArticulo;
    cout << "Ingrese el título del articulo: ";
    getline(cin, nuevoArticulo.titulo);
    cout << "Ingrese la fecha de publicacion (AA-MM-DD): ";
    getline(cin, nuevoArticulo.fecha);
    cout << "Ingrese el directorio del archivo PDF: ";
    getline(cin, nuevoArticulo.directorio);
    articulos.push_back(nuevoArticulo);
    cout << "Articulo agregado correctamente." << endl;
}

// Función para actualizar un artículo del arreglo
void actualizarArticulo(vector<Articulo>& articulos) {
    int indice;
    cout << "Ingrese el índice del artículo a actualizar: ";
    cin >> indice;
    cin.ignore(); // Limpiar el buffer de entrada
    if (indice >= 0 && indice < articulos.size()) {
        cout << "Ingrese el nuevo título del artículo: ";
        getline(cin, articulos[indice].titulo);
        cout << "Ingrese la nueva fecha de publicación (AA-MM-DD): ";
        getline(cin, articulos[indice].fecha);
        cout << "Ingrese el nuevo directorio del archivo PDF: ";
        getline(cin, articulos[indice].directorio);
        cout << "Articulo actualizado correctamente." << endl;
    } else {
        cout << "Indice invalido." << endl;
    }
}

// Función para eliminar un artículo del arreglo
void eliminarArticulo(vector<Articulo>& articulos) {
    int indice;
    cout << "Ingrese el indice del articulo a eliminar: ";
    cin >> indice;
    cin.ignore(); // Limpiar el buffer de entrada
    if (indice >= 0 && indice < articulos.size()) {
        articulos.erase(articulos.begin() + indice);
        cout << "Articulo eliminado correctamente." << endl;
    } else {
        cout << "Indice invalido." << endl;
    }
}

// Función para mostrar la lista de artículos
void mostrarArticulos(const vector<Articulo>& articulos) {
    if (articulos.empty()) {
        cout << "No hay articulos en la lista." << endl;
        return;
    }
    cout << "Lista de artículos:" << endl;
    for (size_t i = 0; i < articulos.size(); i++) {
        cout << "Articulo " << i + 1 << ":" << endl;
        cout << "  Titulo: " << articulos[i].titulo << endl;
        cout << "  Fecha: " << articulos[i].fecha << endl;
        cout << "  Directorio: " << articulos[i].directorio << endl;
    }
}

// Función para ejecutar el archivo PDF asociado a un artículo
void ejecutarArticulo(const Articulo& articulo) {
    string comando = "start " + articulo.directorio; 
    system(comando.c_str());
}

int main() {
    vector<Articulo> articulos; // Arreglo para almacenar los artículos

    int opcion;
    char opcion2;
    
    do {
        cout << " Menu de opciones: " << endl;
        cout << "1. Agregar articulo" << endl;
        cout << "2. Actualizar articulo" << endl;
        cout << "3. Eliminar articulo" << endl;
        cout << "4. Mostrar lista de articulos" << endl;
        cout << "5. Ejecutar articulo" << endl;
        cout << "0. Salir" << endl;
        cout << "Ingrese una opcion: ";
        cin >> opcion;
        cin.ignore(); // Limpiar el buffer de entrada

        switch (opcion) {
            case 1:
                agregarArticulo(articulos);
                break;
            case 2:
                actualizarArticulo(articulos);
                break;
            case 3:
                eliminarArticulo(articulos);
                break;
            case 4:
                mostrarArticulos(articulos);
                break;
            case 5: {
                mostrarArticulos(articulos);
                int indice;
                cout << "Ingrese el indice del articulo a ejecutar: ";
                cin >> indice;
                cin.ignore(); // Limpiar el buffer de entrada
                if (indice >= 0 && indice < articulos.size()) {
                    ejecutarArticulo(articulos[indice]);
                } else {
                    cout << "Indice invalido." << endl;
                }
                break;
            }
            case 0:
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opcion invalida." << endl;
        }
        
        cout << endl;
        cout << "Desea volver a ejecutar el programa? (S/N): ";
        cin >> opcion2;
        cout << endl;
    } while (opcion2 == 's' or opcion2 == 'S');
    
    cout << endl;
    cout << "Gracias por haber iniciado el programa :D"<<endl;
    cout << endl;

    return 0;
}