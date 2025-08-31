# include <iostream>
using namespace std;
int main () {
    double minuto1 ;
    double minuto2 ;
    double hora1 ;
    double hora2 ;

    cout << " ingrese hora de entrada (0-23) " << endl ;
    cin >> hora1 ;
    cout << " ingrese minuto de entrada (0-59) " << endl ;
    cin >> minuto1 ;

    cout << " ingrese hora de salida (0-23) " << endl ;
    cin >> hora2 ;
    cout << " ingrese minuto de salida (0-59) " << endl ;
    cin >> minuto2 ;

    if (hora1 >= 0 && hora1 <= 23 && minuto1 >= 0 && minuto1 <= 59 &&
    hora2 >= 0 && hora2 <= 23 && minuto2 >= 0 && minuto2 <= 59) {

    if (hora2 < hora1 || (hora2 == hora1 && minuto2 <= minuto1)) {
        cout << "La hora de salida tiene que ser despues de la hora de entrada" << endl;
    } else {
        cout << "Las horas son validas" << endl;
        cout << "Horario registrado correctamente" << endl;
    }

    } else {
    cout << "Alguna de las horas ingresadas no es valida" << endl;
   }
}