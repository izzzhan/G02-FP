//
// Guión 2 - Tema 3
// 5. Implemente un programa que pida por teclado un año y muestre un mensaje por pantalla indicando si es bisiesto o
// no. Nota: Un año es bisiesto si es múltiplo de 400 o bien, si es múltiplo de 4 y no de 100.
//
// @izzzhan
//

#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

class Fecha{
    private:
        int agno;
    public:
        bool bisiesto();
        void leer();
};

bool Fecha::bisiesto(){
    return agno%400 == 0 or (agno%4 == 0 and agno%100 != 0);
}

void Fecha::leer(){
    cout << "Introduzca un anyo: ";
    cin >> agno;
    cout << "\n";
}

int main(){
    Fecha f;

    f.leer();
    cout << "El anyo introducido " << (f.bisiesto()?"si":"no") << " es bisiesto.\n\n";

    system("pause");
    return 0;
}
