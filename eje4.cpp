///La función Hogwarts recibirá un puntero a cadena “hechizo”, y muestra por pantalla cuantas vocales y consonantes tiene. Testear con ‘Expelliarmus’, nos muestra: 5 vocales, 7 consonantes
#include <iostream>
using namespace std;

void Hogwarts(char* hechizo) {

  int vocales = 0;
  int consonantes = 0;

  while (*hechizo != '\0') {
    switch(*hechizo) {
      case 'a':
      case 'e':
      case 'i': 
      case 'o':
      case 'u':
        vocales++;
        break;
      default:
        consonantes++;  
    }
    hechizo++; 
  }

  cout << vocales << " vocales, " << consonantes << " consonantes" << std::endl;
}

int main() {

  char hechizo[] = "Expelliarmus";
  Hogwarts(hechizo);

  return 0;
}