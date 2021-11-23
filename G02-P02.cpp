//
// Guión 2 - Tema 3
// 2. Diseñe un programa que lea dos números enteros por teclado y determine cuál es el mayor y cuál es el menor.
// También deberá considerar el caso en el que los dos números sean iguales.
//
// @izzzhan
//

#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    int a, b;

    cout << "Introduzca el primer numero: ";
    cin >> a;
    cout << "Introduzca el segundo numero: ";
    cin >> b;

    if(a > b)
        cout << "\n" << a << " es mayor que " << b << ".\n\n";
    else if(b > a)
        cout << "\n" << b << " es mayor que " << a << ".\n\n";
    else
        cout << "\n" << a << " es igual a " << b << ".\n\n";

    system("pause");
    return 0;
}
