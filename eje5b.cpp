///. Escriba una función que reciba un vector y suma sus elementos pares, reutilizar las funciones del punto 4 para cargar y mostrar los vectores.

#include <iostream>

using namespace std;


void cambiarSigno(int vector[], int tamano) {
    for (int i = 0; i < tamano; ++i) {
        vector[i] = -vector[i];
    }
}


void mostrarVector(int vector[], int tamano) {
    cout << "Vector: ";
    for (int i = 0; i < tamano; ++i) {
        cout << vector[i] << " ";
    }
    cout << endl;
}


int sumarElementosPares(int vector[], int tamano) {
    int suma = 0;
    for (int i = 0; i < tamano; ++i) {
        if (vector[i] % 2 == 0) {
            suma += vector[i];
        }
    }
    return suma;
}

int main() {
    const int tamano = 5;
    int miVector[tamano] = {1, -2, 3, -4, 5};


    cout << "Antes de cambiar el signo:\n";
    mostrarVector(miVector, tamano);

    cambiarSigno(miVector, tamano);

    cout << "Despues de cambiar el signo:\n";
    mostrarVector(miVector, tamano);

    int sumaPares = sumarElementosPares(miVector, tamano);
    cout << "La suma de elementos pares es: " << sumaPares << endl;

    return 0;
}
