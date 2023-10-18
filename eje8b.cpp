////Declare struct Fecha, declare FA(fecha actual) y FC(fecha cumple), luego se compruebe en una función
/////si corresponde al día del cumpleaños. Mostrar un mensaje de felicitaciones de ser así.

#include <iostream>

using namespace std;


struct Fecha {
    int dia;
    int mes;
    int anio;
};


bool esCumpleanios(const Fecha& fechaActual, const Fecha& fechaCumple) {
    return (fechaActual.dia == fechaCumple.dia) && (fechaActual.mes == fechaCumple.mes);
}

int main() {
   
    Fecha FA = {28, 9, 2023}; 
    Fecha FC = {28, 10, 2000};

   
    if (esCumpleanios(FA, FC)) {
        cout << "Feliz cumpleanios!\n";
    } else {
        cout << "Hoy no es tu cumpleanios. Feliz dia de todos modos!\n";
    }

    return 0;
}
