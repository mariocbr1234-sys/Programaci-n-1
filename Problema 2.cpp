# include <iostream>
using namespace std;
int main () {
    int dia ;
    int mes ;
    int año ;
    bool fecha = true ;
    bool bisiesto = true ;
    cout << "ingrese dia de nacimiento" << endl ;
    cin >> dia ;
    cout << "ingrese mes de nacimiento" << endl ;
    cin >> mes ;
    cout << "ingrese año de nacimiento" << endl ;
    cin >> año ;

    if  (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12){
        if (dia < 1 || dia > 31) {
        fecha = false;
        }
    if (fecha){
                    cout << "la fecha es valida" << endl ;
                }
                 else {
                    cout << "la fecha no es valida" << endl ;
              }
         }
    else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
        if (dia < 1 || dia > 30){
        fecha = false;
        }
        if (fecha){
                    cout << "la fecha es valida" << endl ;
                }
                else {
                    cout << "la fecha no es valida" << endl ;
              }
         }
               else if (mes == 2){
        bisiesto = (año % 4 == 0 && (año % 100 != 0 || año % 400 == 0));
        if (bisiesto) {
            if (dia < 1 || dia > 29){
                fecha = false ;
            }
        }
             if (fecha){
                    cout << "la fecha es valida" << endl ;
                }
         else {
                    cout << "la fecha no es valida" << endl ;
              }
            }
            else{
                cout << "la fecha no es valida" << endl ;
            }
    }