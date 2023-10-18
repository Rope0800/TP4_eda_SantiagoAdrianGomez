// Realice un programa que contenga las siguientes funciones o procedimientos según sea:
// • cargaMatriz: que carga una matriz de 4 por 4 con números reales ingresados por el usuario
// • muestraMatriz: nos muestra en pantalla la matriz de 4 por 4 recibida por parámetro
// • intercambioDiagonal: recibe 2 matrices por parámetro e intercambia los valores de las diagonales
// de ambas.
// Escriba un programa que llame a las funciones en el siguiente orden: carga (para las 2 matrices),
// muestra (para las 2 matrices), intercambia, muestra (para las 2 matrices).

#include <iostream>

using namespace std;

const int FILAS = 4;
const int COLUMNAS = 4;


void cargaMatriz(float matriz[FILAS][COLUMNAS]) {
    cout << "Ingrese los elementos de la matriz " << FILAS << "x" << COLUMNAS << ":\n";
    for (int i = 0; i < FILAS; ++i) {
        for (int j = 0; j < COLUMNAS; ++j) {
            cout << "Ingrese el elemento en la posición [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }
}


void muestraMatriz(const float matriz[FILAS][COLUMNAS]) {
    cout << "Matriz " << FILAS << "x" << COLUMNAS << ":\n";
    for (int i = 0; i < FILAS; ++i) {
        for (int j = 0; j < COLUMNAS; ++j) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
}


void intercambioDiagonal(float matriz1[FILAS][COLUMNAS], float matriz2[FILAS][COLUMNAS]) {
    for (int i = 0; i < FILAS; ++i) {
        
        float temp = matriz1[i][i];
        matriz1[i][i] = matriz2[i][i];
        matriz2[i][i] = temp;
    }
}

int main() {
    float matriz1[FILAS][COLUMNAS];
    float matriz2[FILAS][COLUMNAS];

    
    cargaMatriz(matriz1);
    cargaMatriz(matriz2);

    
    cout << "Matrices antes del intercambio:\n";
    muestraMatriz(matriz1);
    cout << endl;
    muestraMatriz(matriz2);
    cout << endl;

    
    intercambioDiagonal(matriz1, matriz2);

   
    cout << "Matrices después del intercambio:\n";
    muestraMatriz(matriz1);
    cout << endl;
    muestraMatriz(matriz2);

    return 0;
}
