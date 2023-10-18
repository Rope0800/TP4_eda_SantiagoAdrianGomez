// Haga un programa en C++ que devuelva la parte fraccionaria de cualquier número introducido por el
// usuario. Ejemplo, si introducís el número 256.879, debería desplegarse el número 0.879.

#include <iostream>
#include <cmath>

using namespace std;


double obtenerParteFraccionaria(double numero) {
    
    int parteEntera = static_cast<int>(numero);

    
    double parteFraccionaria = numero - parteEntera;

    return parteFraccionaria;
}

int main() {
    
    cout << "Ingrese un numero: ";
    double numero;
    cin >> numero;

    
    double parteFraccionaria = obtenerParteFraccionaria(numero);
    cout << "La parte fraccionaria de " << numero << " es: " << parteFraccionaria << endl;

    return 0;
}

