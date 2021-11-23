//
// Guión 2 - Tema 3
// 7. Implementar un programa que ayude a calcular los descuentos que aplica una agencia de viajes en sus billetes de
// avión. El programa comenzará pidiendo los siguientes datos:
//      • Distancia del viaje a realizar.
//      • Número de días que dura dicho viaje.
//      • Edad del turista.
// A continuación mostrará el precio del viaje sin descuento y un mensaje indicando si tiene derecho a un descuento
// que, en caso afirmativo, irá acompañado de la cantidad a la que asciende dicho descuento y del precio final del
// viaje.
// El precio del viaje se obtiene en función de los kilómetros recorridos, a razón de 0.75€/km. Una persona tendrá
// derecho a una reducción del 25% del precio del billete si el número de días de estancia es superior a 7 y la
// distancia superior a 800km, o bien si es mayor de 55 años.
//
// @izzzhan
//

#include <iostream>
#include <cstdlib>

using namespace std;

class Billete{
    private:
        int distancia, dias, edad;
    public:
        void informacion();
        int comparador();
        float operacionSin();
        float operacionCon();
};

void Billete::informacion(){
    cout << "Introduzca la distancia del viaje: ";
    cin >> distancia;
    cout << "Introduzca el numero de dias que dura: ";
    cin >> dias;
    cout << "Introduzca la edad del turista: ";
    cin >> edad;
}

int Billete::comparador(){
    if ((dias >= 7 && distancia >= 800) || edad >= 55) {
        return 1;
    } else {
        return 0;
    }
}

float Billete::operacionSin(){
    float precio = distancia * 0.5;
    return precio;
}

float Billete::operacionCon(){
    float precio = distancia * 0.5;
    precio *= 0.75;
    return precio;
}

int main(){
    Billete b;

    b.informacion();
    
    if (b.comparador() == 0) {
        //SIN DESCUENTO APLICADO
        cout << "\nNo se ha aplicado ningun descuento.";
        cout << "\nEl precio del billete de ida y vuelta es de: " << b.operacionSin() << " euros.\n\n";
    } else {
        //CON DESCUENTO
        cout << "\nSe le ha aplicado un descuento." << endl;
        cout << "El precio sin descuento es de: " << b.operacionSin() << " euros.\n";
        cout << "El precio con el descuento aplicado es de: " << b.operacionCon() << " euros.\n\n";
    }
    

    system("pause");
    return 0;
}
