// Realice una función que dada una matriz y un número de fila de la matriz devuelva el menor de los
// elementos almacenados en dicha fila.

#include <iostream>
#include <climits>

const int FILAS = 3;
const int COLUMNAS = 4;


int encontrarMenorEnFila(const int matriz[FILAS][COLUMNAS], int fila) {
    int menor = INT_MAX;  

    for (int j = 0; j < COLUMNAS; ++j) {
        if (matriz[fila][j] < menor) {
            menor = matriz[fila][j];
        }
    }

    return menor;
}

int main() {
    
    int miMatriz[FILAS][COLUMNAS] = {
        {5, 8, 2, 1},
        {3, 9, 7, 4},
        {6, 2, 8, 0}
    };

    
    int numeroFila;
    std::cout << "Ingrese el numero de fila (0-" << FILAS - 1 << "): ";
    std::cin >> numeroFila;

    
    if (numeroFila >= 0 && numeroFila < FILAS) {
        
        int menorEnFila = encontrarMenorEnFila(miMatriz, numeroFila);

      
        std::cout << "El menor elemento en la fila " << numeroFila << " es: " << menorEnFila << std::endl;
    } else {
        std::cout << "Numero de fila no valido.\n";
    }

    return 0;
}
