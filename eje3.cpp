///Hacer una función que reciba un puntero y compruebe si el número es par o impar, y señalar la posición de memoria donde se está guardando el número.

#include <iostream>

using namespace std;


void verificarParImpar(int* ptr) {
    if (ptr) {
        
        if (*ptr % 2 == 0) {
            cout << "El numero " << *ptr << " es par.\n";
        } else {
            cout << "El numero " << *ptr << " es impar.\n";
        }

        
        cout << "La posicion de memoria donde se guarda el numero es: " << ptr << "\n";
    }
}

int main() {
    
    int numero = 7;

    int* ptrNumero = &numero;

    verificarParImpar(ptrNumero);

    return 0;
}
