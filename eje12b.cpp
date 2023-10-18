// Cree una estructura Persona que tenga un vector de 30 caracteres, y su edad. Declare una variable de
// tipo Persona, y use una función pedirDatos que la cargue. Use getline para cargar el nombre. Otra
// función mostrarDatos que reciba la estructura y la muestre. Declare el prototipo de las funciones
// pedirDatos y mostrarDatos. Pruébelas desde el menú principal.

#include <iostream>
#include <string>

using namespace std;


struct Persona {
    char nombre[30];
    int edad;
};


void pedirDatos(Persona& p);
void mostrarDatos(const Persona& p);

int main() {
   
    Persona persona;

    
    int opcion;
    do {
        cout << "\nMenu Principal:\n";
        cout << "1. Ingresar datos\n";
        cout << "2. Mostrar datos\n";
        cout << "0. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                pedirDatos(persona);
                break;
            case 2:
                mostrarDatos(persona);
                break;
            case 0:
                cout << "Saliendo del programa.\n";
                break;
            default:
                cout << "Opcion no valida. Intentelo de nuevo.\n";
        }

    } while (opcion != 0);

    return 0;
}


void pedirDatos(Persona& p) {
    cin.ignore();  
    cout << "Ingrese el nombre: ";
    cin.getline(p.nombre, sizeof(p.nombre));
    cout << "Ingrese la edad: ";
    cin >> p.edad;
}


void mostrarDatos(const Persona& p) {
    cout << "\nDatos de la Persona:\n";
    cout << "Nombre: " << p.nombre << "\n";
    cout << "Edad: " << p.edad << " anios\n";
}

