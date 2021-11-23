//
// Guión 2 - Tema 3
// 6. Diseñar un programa que solicite por teclado dos números enteros y la operación a realizar con ellos:
//      - Si el usuario pulsa ‘+’, ‘s’ o ‘S’ el programa mostrará el resultado de sumar los números indicados.
//      - Si el usuario pulsa ‘-‘, ‘r’ o ‘R’ mostrará la resta.
//      - Para cualquier otra pulsación se mostrará el siguiente mensaje de error “operación no
//        disponible”.
//
// @izzzhan
//

#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

class Calculadora{
    private:
        int a, b;
    public:
        void informacion();
        void operacion();
};

void Calculadora::informacion(){
    cout << "Introduzca el primer numero: ";
    cin >> a;
    cout << "Introduzca el segundo numero: ";
    cin >> b;
}

void Calculadora::operacion(){
    char operacion;
    cout << "\nIntroduzca la operacion que desea realizar: ";
    cin >> operacion;

    if(operacion == '+' or operacion == 'S' or operacion == 's')
        cout << "\n" << a << " + " << b << " = " << (a+b) << "\n\n";
    else if(operacion == '-' or operacion == 'R' or operacion == 'r')
        cout << "\n" << a << " - " << b << " = " << (a-b) << "\n\n";
    else
        cout << "\nOperacion no disponible.\n\n";
}

int main(){
    Calculadora c;

    c.informacion();
    c.operacion();

    system("pause");
    return 0;
}
