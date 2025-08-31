#include <iostream>
using namespace std;
int main () {
    int i = 1 ;
    int PIN ;
    int PIN_ingresado ;
    int intentos = 4 ;
    double saldo ;
    double saldo_ingresado ;
    double saldo_final ;
    bool validar = true ;

    cout << " ingrese su PIN correcto (solo 4 digitos) " << endl ;
    cin >> PIN ;

    cout << " ingrese su saldo correcto " << endl ;
    cin >> saldo ;

    for (int i = 1; i <= intentos; i++) {

    cout << " ingrese PIN (tiene 4 intentos) " << endl ;
    cin >> PIN_ingresado ;

    if (PIN_ingresado == PIN){
        cout << "su pin es correcto" << endl ;
        validar = true;
     break;
    }
    else {
        cout << "su pin es incorrecto" << endl ;
        validar = false ;
    }
}
    if (validar){
    cout << " ingrese saldo que quiere retirar " << endl ;
    cin >> saldo_ingresado ;

    if (saldo_ingresado <= saldo){
        saldo_final = saldo - saldo_ingresado ;
        cout << " retiro exitoso, su saldo es de " << saldo_final << endl ;
    }

    else {
        cout << "saldo insuficiente" << endl ;
    }
}
  else {
    cout << " no tiene mas intentos " << endl ;
  }
  }
