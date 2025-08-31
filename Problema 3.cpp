# include <iostream>
using namespace std;
int main () {
    char eleccion ;
    int productos ;
    double precio ;
    double total ;
    double descuento = 0.0;
    double descuento2 = 0.0;

    cout << "¿ Que tipo de cliente es usted? " << endl ;
    cout << " ¿si es un cliente VIP, seleccione a " << endl ;
    cout << "si es un cliente normal, seleccione b" << endl ;
    cin >> eleccion ;

    cout << " cuantos productos trae consigo?" << endl ;
    cin >> productos ;

    cout << " ingrese el precio unitario" << endl ;
    cin >> precio ;

    total = precio * productos ;

    switch (eleccion){
        case 'a' :
        cout << "usted es un cliente VIP" << endl ;
        descuento = total * 0.2 ;
        cout << " su descuento es de " << descuento << endl ;
        break;
        case 'b' :
        if (productos < 4){
            cout << "usted no tiene el descuento" << endl ;
            cout << " su precio es de " << total << endl ;
            break ;
        }
        cout << "usted es un cliente normal" << endl ;
        descuento2 = total * 0.1 ;
        cout << " su descuento es de " << descuento2 << endl ;
        break;
    }
} 