// . Escriba una función llamada maximo() que devuelva el valor máximo de tres argumentos que se
// transmitan a la función cuando sea llamada. Suponga que los 3 argumentos serán del tipo float.

#include <iostream>

using namespace std;


float maximo(float a, float b, float c) {
    if (a >= b && a >= c) {
        return a;
    } else if (b >= a && b >= c) {
        return b;
    } else {
        return c;
    }
}

int main() {
    
    float num1, num2, num3;

    cout << "Ingrese el primer numero: ";
    cin >> num1;

    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    cout << "Ingrese el tercer numero: ";
    cin >> num3;

    
    float resultado = maximo(num1, num2, num3);

    cout << "El valor maximo es: " << resultado << endl;

    return 0;
}
