#include <iostream>
#include "Tipos.h"
using namespace std;

int main() {
    entero zona;
    string claro;
    cout<<"Ingresa el numero de zona"<<endl;
    cin>>zona;
    cout<<"Ingresa SI o NO  en caso de ser usuario de Claro";
    cin>>claro;
    switch(zona){
      case 1:
        if(claro=="SI")
          cout<<"Monto: 169.6";
        else
          cout<<"Monto: 212";
        break;
       case 2:
        if(claro=="SI")
          cout<<"Monto: 136";
        else
          cout<<"Monto: 170";
      break;
     case 3:
        if(claro=="SI")
          cout<<"Monto: 108.8";
        else
          cout<<"Monto: 136";
      break;
      case 4:
        if(claro=="SI")
          cout<<"Monto: 47.2";
        else
          cout<<"Monto: 59";
      break;
           
        
        
    }
  
    return 0;
}
