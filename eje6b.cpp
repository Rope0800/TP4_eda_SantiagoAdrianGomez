////En este ejemplo, tenemos una estructura Abuela que contiene un nombre, edad, y hobby. La función
//modificarAbuela recibe una referencia a una estructura Abuela, y cambia nombre, edad, y hobby
//(tejer, amasar, bordar). En la función main, creamos una instancia de Abuela llamada abue1 con su
///nombre, edad, y hobby inicial. Luego, imprimimos los valores originales. Después, llamamos a la
///función modificarAbuela pasando abue1 por referencia. Esto significa que los cambios realizados
////dentro de la función afectarán directamente a la estructura original. Finalmente, imprimir los valores
//de abue1 después de la modificación para mostrar que los cambios han sido aplicados

#include <iostream>
#include <string>

using namespace std;


struct Abuela {
    string nombre;
    int edad;
    string hobby;
};


void modificarAbuela(Abuela& abuela) {
    
    abuela.nombre = "Teodora";
    abuela.edad = 70;
    abuela.hobby = "Bordar";
}

int main() {
   
    Abuela abue1;
    abue1.nombre = "Carmen";
    abue1.edad = 75;
    abue1.hobby = "Tejer";


    cout << "Valores originales de abue1:\n";
    cout << "Nombre: " << abue1.nombre << "\n";
    cout << "Edad: " << abue1.edad << "\n";
    cout << "Hobby: " << abue1.hobby << "\n";


    modificarAbuela(abue1);

 
    cout << "\nValores de abue1 despues de la modificacion:\n";
    cout << "Nombre: " << abue1.nombre << "\n";
    cout << "Edad: " << abue1.edad << "\n";
    cout << "Hobby: " << abue1.hobby << "\n";

    return 0;
}
