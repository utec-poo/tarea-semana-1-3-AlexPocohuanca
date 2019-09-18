#include <iostream>
#include "Tipos.h"
using namespace std;

int main() {

entero numero;
vector<int> numeroo={};
do{
  numeroo={};
cout << "ingrese un numero:";
cin >> numero;

while(numero>0){
  int digit;
  digit=numero%10;
  numero=numero/10;
  numeroo.push_back(digit);
}
}while(numeroo.size()!=3);
int pares=0;
int impares=0;
for(int c=0;c<numeroo.size();c++){
  if(numeroo[c]%2==0){
    pares=pares+1;
  }
  if(numeroo[c]%2!=0){
    impares=impares+1;
  }
}
cout<<numeroo.size()<<endl;
cout<<pares<<endl;
cout<<impares<<endl;
  return 0;
}
