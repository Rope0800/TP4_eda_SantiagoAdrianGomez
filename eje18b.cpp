// Un número es primo si solo es divisible por la unidad y por si mismo. Defina una función que determina
// si un número es primo, debe recibir el número y retornar verdadero o falso.
// - Realice un programa que, de 2 opciones, 1). Determinar si un número es primo 2). Calcular todos los
// números primos menores a un número ingresado por el usuario. El usuario debe poder realizar estas
// opciones todas las veces que desee.

#include <iostream>

using namespace std;


bool esPrimo(int numero) {
    if (numero < 2) {
        return false; 
    }

    for (int i = 2; i <= numero / 2; ++i) {
        if (numero % i == 0) {
            return false; 
        }
    }

    return true; 
}


void primosMenoresA(int limite) {
    cout << "Numeros primos menores a " << limite << ":\n";
    for (int i = 2; i < limite; ++i) {
        if (esPrimo(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    char opcion;
    do {
        cout << "Seleccione una opcion:\n";
        cout << "1. Determinar si un numero es primo\n";
        cout << "2. Calcular todos los numeros primos menores a un numero\n";
        cout << "3. Salir\n";

        cin >> opcion;

        switch (opcion) {
            case '1':
               
                int num;
                cout << "Ingrese un numero: ";
                cin >> num;
                if (esPrimo(num)) {
                    cout << num << " es primo.\n";
                } else {
                    cout << num << " no es primo.\n";
                }
                break;

            case '2':
               
                int limite;
                cout << "Ingrese un numero limite: ";
                cin >> limite;
                primosMenoresA(limite);
                break;

            case '3':
                
                cout << "Saliendo del programa. Hasta luego.\n";
                break;

            default:
                cout << "Opcion no valida. Intentelo de nuevo.\n";
        }

    } while (opcion != '3');

    return 0;
}
