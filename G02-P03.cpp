//
// Guión 2 - Tema 3
// 3. Diseñe un programa que resuelva una ecuación de segundo grado ax2+bx+c = 0. Debe pedir al usuario que introduzca
// los valores de a, b y c de tipo entero y el programa indicará los valores de las raíces solución (una o dos raíces
// según corresponda), o bien un mensaje indicando que no tiene raíces reales.
//
// @izzzhan
//

#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main(){
    double a, b, c, solucion1, solucion2;

    // PEDIMOS LOS VALORES AL USUARIO
    cout << "Introduzca el valor de a: ";
    cin >> a;
    cout << "Introduzca el valor de b: ";
    cin >> b;
    cout << "Introduzca el valor de c: ";
    cin >> c;
    
    // HACEMOS LA ECUACIÓN DE SEGUNDO GRADO
    if(pow(b,2) - (4*a*c) == 0){
        solucion1 = (-b) / (2*a);

        cout << "\nLas unica solucion posible es: " << solucion1 << "\n\n";
    }else if(pow(b,2) - (4*a*c) > 0){
        solucion1 = ((-b) + sqrt(pow(b,2) - (4*a*c))) / (2*a);
        solucion2 = ((-b) - sqrt(pow(b,2) - (4*a*c))) / (2*a);

        cout << "\nLas dos soluciones posibles son: \n\tx1: " << solucion1 << "\n\tx2: " << solucion2 << "\n\n";
    }else
        cout << "\nEl sistema no tiene tiene soluciones reales.\n\n";

    system("pause");
    return 0;
}
