//A. Intercambio de valores: Crea una función que reciba dos punteros a enteros y los intercambie.
#include <iostream>
using namespace std;

void cambiarvalor(int* num1, int* num2){    

if (num1 && num2)
{
    int x = *num1;
    *num1 = *num2;
    *num2 = x;
}
}

int main(){

    int a=  11;
    int b= 18;

    int* num1 = &a;
    int* num2 = &b;

    cout << "Antes del intercambio: \n";
    cout << "a = " << a << ", b = " << b << "\n";

    cambiarvalor(num1,num2);

    cout << "Despues del intercambio:\n";
    cout << "a = " << a << ", b = " << b << "\n";

    return 0;
}