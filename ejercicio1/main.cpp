
#include <iostream>
#include "Tipos.h"
#include <iomanip>

using namespace std;

typedef int entero;

int main() {
    entero base=0, altura=0;
    cout << "\ningrese la base:";
    cin >> base;
    cout << "\ningrese la altura:";
    cin >> altura;

    float area;

    area=base*altura/2.0;

    cout<<fixed<<setprecision(4)<<area;
    return 0;
}
