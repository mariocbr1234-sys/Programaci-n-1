#include <iostream>
using namespace std;
int main () {
    char eleccion;
    float x;
    float y;
    cout << "coloca un numero";
    cin >> x;
    cout << "coloca segundo valor";
    cin >> y;
    float suma = x+y ;
    float resta = x-y ;
    float multiplicacion = x * y ;
    float division = x / y;
    cout << "que operacion quieres hacer?" << endl ;
    cout << "si quieres sumar, presiona a" << endl ;
    cout << "si quieres restar, presiona b" << endl ;
    cout << "si quieres multiplicar, presiona c" << endl ;
    cout << "si quieres dividir, presiona d" << endl ;
    cin >> eleccion ;

    switch (eleccion){
        case 'a':
        cout << suma << endl ;
        break;
        case 'b':
        cout << resta << endl ;
        break;
        case 'c' :
        cout << multiplicacion << endl ;
        break;
        case 'd':
        if (y == 0){
        cout << "no se puede dividir entre cero" << endl ;
        break;
        }
        cout << division << endl ;
        break;
    }
}