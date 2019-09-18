#include <iostream>
#include "tipos.h"
#include "MyFunc.h"
using namespace std;
int main() {
   l_enteros segundos;
    enteros horas, min, seg;

    do {
        cout << "Segundos: ";
        cin >> segundos;
    } while (segundos <1);

    horas=segundos/3600;
    segundos=segundos%3600;
    min=segundos/60;
    segundos=segundos%60;
    seg=segundos;
    cout<<horas<<" "<<" "<<min<<" "<<seg<<endl;
    return 0;
}
