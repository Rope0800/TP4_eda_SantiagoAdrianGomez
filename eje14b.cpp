// Escriba una función nombrada funpot() que eleve un número entero que se le transmita a una potencia
// en número entero positivo y despliegue el resultado. El número entero positivo deberá ser el segundo
// valor transmitido a la función.

#include <iostream>

using namespace std;


int funpot(int base, int exponente) {
    int resultado = 1;

    for (int i = 0; i < exponente; ++i) {
        resultado *= base;
    }

    return resultado;
}

int main() {
    
    int base, exponente;

    
    cout << "Ingrese la base: ";
    cin >> base;

    cout << "Ingrese el exponente (debe ser un numero entero positivo): ";
    cin >> exponente;

    
    if (exponente >= 0) {
        
        int resultado = funpot(base, exponente);
        cout << base << " elevado a la " << exponente << " es: " << resultado << endl;
    } else {
        cout << "El exponente debe ser un numero entero positivo." << endl;
    }

    return 0;
}
