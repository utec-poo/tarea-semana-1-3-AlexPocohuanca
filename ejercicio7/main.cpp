#include <iostream>
#include "Tipos.h"
using namespace std;

int main() {

entero numero;
  do{
     cout<<"Ingresa un numero: "<<endl;
     cin >> numero;
  }while(numero>30 || numero<10);
  for (int c=0;c<numero;c++){
   cout<<"*"; 
  }

  return 0;
}
