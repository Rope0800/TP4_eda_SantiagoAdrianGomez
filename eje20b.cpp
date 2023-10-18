// . Escriba las siguientes funciones:
// A. Tasa de natalidad: cantidad de nacimientos en proporción con el total de la población, recibe estos
// datos como parámetros y devuelve la tasa.
// B. Tasa de mortalidad: porcentaje de fallecimientos en relación al total de la población, recibe estos
// datos como parámetros y devuelve la tasa.
// C. Población en crecimiento: devuelve true, si la tasa de natalidad es mayor a la de mortalidad, utilice
// las funciones descriptas en A y B
// D. Densidad Poblacional: habitantes por km 2
// Realice un programa que permita ingresar, el nombre de un país, su población, su superficie, y luego
// de la opción de calcular: Densidad poblacional, Tasa de natalidad, Tasa de Mortalidad y Evolución
// demográfica, mientras el usuario lo desee.

#include <iostream>
#include <string>
using namespace std;


double tasaNatalidad(int nacimientos, int poblacion) {
    return (static_cast<double>(nacimientos) / poblacion) * 100;
}


double tasaMortalidad(int fallecimientos, int poblacion) {
    return (static_cast<double>(fallecimientos) / poblacion) * 100;
}


bool poblacionEnCrecimiento(double tasaNatalidad, double tasaMortalidad) {
    return tasaNatalidad > tasaMortalidad;
}


double densidadPoblacional(int poblacion, double superficie) {
    return poblacion / superficie;
}

int main() {
    string pais;
    int poblacion, nacimientos, fallecimientos;
    double superficie;

    do {
        cout << "Ingrese el nombre del pais: ";
        cin >> pais;

        cout << "Ingrese la poblacion del pais: ";
        cin >> poblacion;

        cout << "Ingrese la superficie del pais en km^2: ";
        cin >> superficie;

        cout << "Ingrese la cantidad de nacimientos: ";
        cin >> nacimientos;

        cout << "Ingrese la cantidad de fallecimientos: ";
        cin >> fallecimientos;

       
        cout << "\nResultados para " << pais << ":\n";
        cout << "Densidad poblacional: " << densidadPoblacional(poblacion, superficie) << " habitantes/km^2\n";
        cout << "Tasa de natalidad: " << tasaNatalidad(nacimientos, poblacion) << "%\n";
        cout << "Tasa de mortalidad: " << tasaMortalidad(fallecimientos, poblacion) << "%\n";

        if (poblacionEnCrecimiento(tasaNatalidad(nacimientos, poblacion), tasaMortalidad(fallecimientos, poblacion))) {
            cout << "La poblacion esta en crecimiento.\n";
        } else {
            cout << "La poblacion no esta en crecimiento.\n";
        }

        cout << "\nDesea calcular para otro pais? (s/n): ";
        char opcion;
        cin >> opcion;

        if (opcion != 's' && opcion != 'S') {
            break;
        }

    } while (true);

    cout << "Hasta luego!\n";

    return 0;
}
