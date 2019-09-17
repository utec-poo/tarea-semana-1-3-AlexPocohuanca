#include <iostream>
#include "Tipos.h"
using namespace std;

int main() {

entero numero;
caracter crt;
string color;
cout << "ingrese el caracter:";
cin >> crt;
cout << "\ningrese el numero:";
cin >> numero;

if (crt=="a"||crt=="c"||crt=="e"||crt=="g")
	if (numero%2!=0)
		color = "black"

	else
		color = "white"
else
	if (numero%2==0)
		color = "black"
	else
		color = "white"
  return 0;
  cout<<color;
}
