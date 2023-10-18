// Declare un vector Vec de tamaño TAM constante. Cree una función Cuadrado, a la cual se le envíe Vec
//// y lo modifique con el cuadrado de sus valores. Otra función que lo muestre. Reutilice.

#include <iostream>
using namespace std;

const int TAM = 5;


void Cuadrado(int vec[TAM]) {
    for (int i = 0; i < TAM; ++i) {
        vec[i] = vec[i] * vec[i];
    }
}

void MostrarVector(const int vec[TAM]) {
    cout << "Vector: ";
    for (int i = 0; i < TAM; ++i) {
        cout << vec[i] << " ";
    }
    cout << endl;
}

int main() {
  
    const int Vec[TAM] = {1, 2, 3, 4, 5};

 
    int VecMod[TAM];
    for (int i = 0; i < TAM; ++i) {
        VecMod[i] = Vec[i];
    }

    
    Cuadrado(VecMod);

    
    cout << "Vector Original:\n";
    MostrarVector(Vec);

   
    cout << "Vector Despues de Cuadrado:\n";
    MostrarVector(VecMod);

    return 0;
}

