///////Realice un programa permita elegir entre contar palabras de una frase y contar la ocurrencia de una
////////palabra en la frase, mientras el usuario lo desee. Para ello valerse de lo siguiente:
//////• Una función que permita conocer cuantas palabras hay en una frase recibida como parámetro.
///////////• Otra función que determine cuantas veces se encuentra una palabra en una frase.

#include <iostream>
#include <string>
#include <sstream>

using namespace std;


int contarPalabras(const string& frase) {
    stringstream ss(frase);
    string palabra;
    int contador = 0;
    while (ss >> palabra) {
        contador++;
    }
    return contador;
}


int contarOcurrencias(const string& frase, const string& palabraBuscada) {
    int contador = 0;
    size_t pos = frase.find(palabraBuscada);
    while (pos != string::npos) {
        contador++;
        pos = frase.find(palabraBuscada, pos + 1);
    }
    return contador;
}

int main() {
    char opcion;
    do {
        cout << "Elija una opcion:\n";
        cout << "a. Contar palabras en una frase.\n";
        cout << "b. Contar ocurrencias de una palabra en una frase.\n";
        cout << "c. Salir.\n";
        cout << "Opcion: ";
        cin >> opcion;
        cin.ignore(); // Limpiar el buffer de entrada

        switch (opcion) {
            case 'a': {
                string frase;
                cout << "Ingrese una frase: ";
                getline(cin, frase);
                int numPalabras = contarPalabras(frase);
                cout << "Numero de palabras en la frase: " << numPalabras << "\n";
                break;
            }
            case 'b': {
                string frase, palabra;
                cout << "Ingrese una frase: ";
                getline(cin, frase);
                cout << "Ingrese la palabra a buscar: ";
                cin >> palabra;
                int numOcurrencias = contarOcurrencias(frase, palabra);
                cout << "Numero de veces que aparece  '" << palabra << "' es: " << numOcurrencias << "\n";
                break;
            }
            case 'c':
                cout << "Saliendo del programa.\n";
                break;
            default:
                cout << "Opcion no valida. Por favor, elija a, b o c.\n";
        }
    } while (opcion != 'c');

    return 0;
}
