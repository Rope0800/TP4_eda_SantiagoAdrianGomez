// Realice un programa que mientras el usuario lo desee pueda realizar estas operaciones, llamando a la
// función correspondiente, según las que siguen: A. Calcula la multiplicación por sumas sucesivas. Ej. 2
// x 4 = 2 + 2 + 2 + 2 (suma 4 veces el numero 2 generalizando nxm =n+n+…(m veces). B. Calcula la división
// por restas sucesivas Ej. 10/2=5 (5 indica la cantidad de veces que pude restar 2 al 10. Y C. Calcule la
// potencia por multiplicaciones sucesivas Ej 2 3= 2*2*2 (multiplica 2 por si mismo 3 veces)

#include <iostream>

using namespace std;


int multiplicacionPorSumas(int a, int b) {
    int resultado = 0;
    for (int i = 0; i < b; ++i) {
        resultado += a;
    }
    return resultado;
}


int divisionPorRestas(int a, int b) {
    int cociente = 0;
    while (a >= b) {
        a -= b;
        cociente++;
    }
    return cociente;
}


int potenciaPorMultiplicaciones(int base, int exponente) {
    int resultado = 1;
    for (int i = 0; i < exponente; ++i) {
        resultado *= base;
    }
    return resultado;
}

int main() {
    char opcion;
    do {
        cout << "Seleccione una opcion:\n";
        cout << "A. Multiplicacion por sumas sucesivas\n";
        cout << "B. Division por restas sucesivas\n";
        cout << "C. Potencia por multiplicaciones sucesivas\n";
        cout << "D. Salir\n";

        cin >> opcion;

        switch (opcion) {
            case 'A':
                
                int num1, num2;
                cout << "Ingrese dos numeros para la multiplicacion: ";
                cin >> num1 >> num2;
                cout << "El resultado es: " << multiplicacionPorSumas(num1, num2) << endl;
                break;

            case 'B':
                
                int dividend, divisor;
                cout << "Ingrese el dividendo y el divisor: ";
                cin >> dividend >> divisor;
                cout << "El cociente es: " << divisionPorRestas(dividend, divisor) << endl;
                break;

            case 'C':
                
                int base, exponente;
                cout << "Ingrese la base y el exponente: ";
                cin >> base >> exponente;
                cout << "El resultado es: " << potenciaPorMultiplicaciones(base, exponente) << endl;
                break;

            case 'D':
                
                cout << "Saliendo del programa. Hasta luego.\n";
                break;

            default:
                cout << "Opcion no valida. Intentelo de nuevo.\n";
        }

    } while (opcion != 'D');

    return 0;
}

