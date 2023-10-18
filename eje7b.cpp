// En la función main, llamar a otra función Friends que reciba un arreglo de estructuras y registre datos
// de 6 amigo/as con: nombre, sexo, si es soltero, y su Instagram. Luego un procedimiento muestra los
// datos de los soltera/os. Y una función medioPomelo, que carga el amigoElegido=“ ” (paso por
// referencia) el primer soltero menor a 30 años; debe además, retornar su Instagram.

#include <iostream>
#include <string>
using namespace std;

struct Amigo {
  string nombre;
  char sexo;
  bool soltero;
  string instagram;
  int edad; 
};

void Friends(Amigo amigos[], int cantidad){

  for(int i=0; i < cantidad; i++){

    cout << "Amigo " << i+1 << endl; 
    cout << "Nombre: ";
    cin >> amigos[i].nombre;

    cout << "Sexo (M/F): ";
    cin >> amigos[i].sexo;

    cout << "Soltero (1/0): ";
    cin >> amigos[i].soltero;

    cout << "Instagram: ";
    cin >> amigos[i].instagram;
    
    cout << "Edad: "; 
    cin >> amigos[i].edad;

  }

}

void mostrarSolteros(Amigo amigos[], int cantidad){

  cout << "\nAmigos solteros: \n";

  for(int i=0; i < cantidad; i++){

    if(amigos[i].soltero){
      cout << amigos[i].nombre << "\n";
      cout << amigos[i].sexo << "\n"; 
      cout << amigos[i].instagram << "\n\n";
    }

  }

}

string medioPomelo(Amigo amigos[], int cantidad, int edadLimite){

  for(int i=0; i < cantidad; i++){
  
    if(amigos[i].soltero && amigos[i].edad < edadLimite){
    
      return amigos[i].instagram;
      
    }
  
  }

  return "";

}

int main() {

  const int CANT_AMIGOS = 5;
  Amigo amigos[CANT_AMIGOS];

  Friends(amigos, CANT_AMIGOS);

  mostrarSolteros(amigos, CANT_AMIGOS);

  int limite = 30;
  string amigoElegido = medioPomelo(amigos, CANT_AMIGOS, limite);

  if(!amigoElegido.empty()){
    cout << "Instagram soltero < " << limite << " es: " << amigoElegido;
  }
  else {
    cout << "No se encontro soltero menor a " << limite; 
  }

  return 0;

}