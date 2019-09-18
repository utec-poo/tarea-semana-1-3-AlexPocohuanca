#include <iostream>
#include "Tipos.h"
#include <vector>
using namespace std;

int main() {

entero numero;
vector<int> listaa={};
  entero aux;
do{
  
  cout<<"Ingresa un numero";
  cin>>aux;
  listaa.push_back(aux);
}while(aux!=0);
  entero pares=0;
  entero impares=0;
  

  for (int c;c<listaa.size()-1;c++){
   if(listaa[c]%2==0)
     pares++;
   else
     impares++;
    
  }
  
  
  cout<<"La cantidad de pares es: "<<pares<<endl;
  cout<<"La cantidad de impares es: "<<impares<<endl;
  cout<<"Los numeros ingresados son: "<<listaa.size()-1<<endl;
  return 0;
}

