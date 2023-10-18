////Paso por referencia de un puntero: Crea una función que reciba un puntero a un entero y modifique el valor al que apunta.//

#include <iostream>

using namespace std;


void modificarValor(int* ptr) {
    if (ptr) {
      
        *ptr = 42;  
    }
}

int main() {
  
    int numero = 10;

   
    int* ptrNumero = &numero;

   
    cout << "Antes de la modificación: " << *ptrNumero << "\n";

   
    modificarValor(ptrNumero);

    
    cout << "Después de la modificación: " << *ptrNumero << "\n";

    return 0;
}
