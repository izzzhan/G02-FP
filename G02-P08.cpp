//
// Guión 2 - Tema 3
// 8. Modificar el código solución al ejercicio 24 del guion práctico no 1, de modo que el usuario pueda introducir
//  el valor de la carga en cualquiera de las siguientes unidades:
//      a) Miliculombios (mC = 10-3C)
//      b) Microculombios(μC=10-6C)
//      c) Nanoculombios (nC = 10-9C)
//  La distancia también podrá ser suministrada por parte del usuario en:
//      a) Decímetros (dm)
//      b) Centímetros (cm)
//      c) Milímetros (mm)
//  Cuando el usuario indique el valor numérico de la carga, el programa le ofrecerá mediante un menú las diferentes
//  opciones en cuanto a unidades, para que seleccione la correcta. Del mismo modo se trabajará con la distancia. Si
//  el usuario pulsa una opción incorrecta se tomará por defecto la unidad de almacenamiento (μC y m) y se le
//  avisará con un mensaje
//
// @izzzhan
//

#include <iostream>
#include <stdlib.h>
#include <cmath>

#define pi 3.14159
#define cd 8.85e-12

using namespace std;

class leyCoulomb {
    double q;
    double r;
    
public:
    void getDatos();
    double calcular();
};

void leyCoulomb::getDatos(){
    char menuC;
    char menuD;
    cout << "Vamos a aplicar la Ley de Coulomb." << endl;
    cout << "\nDigite el valor de la carga: ";
    cin >> q;
    cout << "\nSeleccione la unidad de la carga intoducida: ";
    cout << "\n\ta) Miliculombios (mC = 10-3C). ";
    cout << "\n\tb) Microculombios(μC=10-6C). ";
    cout <<"\n\tc) Nanoculombios (nC = 10-9C). ";
    cout << "\nOpcion: ";
    cin >> menuC;
    switch (menuC) {
        case 'a':
        case 'A':
            q *= 1e-3;
            break;
        case 'b':
        case 'B':
            q *= 1e-6;
            break;
        case 'c':
        case 'C':
            q *= 1e-9;
            break;
        default:
            q *= 1e-6;
            break;
    }
    cout << "\n\nDigite el valor de la distancia puntual: ";
    cin >> r;
    cout << "\nSeleccione la unidad de los metros intoducida: ";
    cout << "\n\ta) Decímetros (dm).";
    cout << "\n\tb) Centímetros (cm).";
    cout <<"\n\tc) Milímetros (mm).";
    cout << "\nOpcion: ";
    cin >> menuD;
    switch (menuD) {
        case 'a':
        case 'A':
            r /= 10;
            break;
        case 'b':
        case 'B':
            r /= 100;
            break;
        case 'c':
        case 'C':
            r /= 1000;
            break;
        default:
            break;
    }
    cout << endl << endl;
}

double leyCoulomb::calcular(){
    return (q)/(4*pi*cd*(pow(r, 2)));
}

int main(){
    leyCoulomb ley;
    
    ley.getDatos();
    cout << "La intensidad del campo electrico creado por la carga es: \n\t\t" << ley.calcular() << " N/C";
    cout << endl << endl;
    
    system("pause");
    return 0;
}
