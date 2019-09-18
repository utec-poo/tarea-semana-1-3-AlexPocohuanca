#include <iostream>
#include <cmath>
#include "Tipos.h"
using namespace std;
typedef int entero;
typedef long int l_enteros;
#include <vector>
int main() {
   entero numero;

  cout << "Ingrese el numero:";
  cin >> numero;
  int n=numero;
  vector<int>invertido={};
  while(numero>0){
    int digit;
    digit=numero%10;
    numero/=10;
    invertido.push_back(digit);
  }
  
  int invertfinal=0;
  int aux=10;
  for(int c=invertido.size()-1;c>-1;c--){
    
    invertfinal+=invertido[c]*pow(aux,invertido.size()-c-1);
    
  }
  
  if(invertfinal==n){
    cout<<"El numero es capicua";
  }
  else{
    cout<<"No es capicua";
  }
  return 0;
}
