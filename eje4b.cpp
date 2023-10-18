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

int main() {
    const int tamano = 5;
    int miVector[tamano] = {1, -2, 3, -4, 5};

  
    cout << "Antes de cambiar el signo:\n";
    mostrarVector(miVector, tamano);


    cambiarSigno(miVector, tamano);

   
    cout << "Después de cambiar el signo:\n";
    mostrarVector(miVector, tamano);

    return 0;
}
