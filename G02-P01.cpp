//
// Guión 2 - Tema 3
// 1. Diseñe un programa que lea una nota con decimales por teclado y muestre por pantalla la
// calificación que tiene.
//
// @izzzhan
//

#include <iostream>
#include <cstdlib>

using namespace std;

int main(void){
    double nota;

    cout << "Introduzca una nota: ";
    cin >> nota;

    if(nota > 10)
        cout << "Error en la nota\n\n";
    else if(nota >= 9)
        cout << "Sobresaliente\n\n";
    else if(nota >= 7)
        cout << "Notable\n\n";
    else if(nota >= 5)
        cout << "Aprobado\n\n";
    else if(nota >= 0)
        cout << "SUSPENSO\n\n";
    else
        cout << "Error en la nota\n\n";

    system("pause");
    return 0;
}
