#include <iostream>
#include "Tipos.h"
using namespace std;

int main() {

entero numero;
  do{
     cout<<"Ingresa un numero: "<<endl;
     cin >> numero;
  }while(numero>30 || numero<1);
  for (int c=0;c<numero;c++){
   if(c==0){
     cout<<"* "<<endl;
   }
   if(c==numero-1){
     for(int f=0;f<numero;f++){
       cout<<"*";
     }
   }
   else{
     for(int g=0;g<=c;g++){
       if(g==0){
         cout<<"* ";
       }
       if(g==c){
         cout<<"* "<<endl;
       }
       else{
         cout<<" ";
       }


     }


   }
  }

  return 0;
}
