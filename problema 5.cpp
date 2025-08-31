# include <iostream>
using namespace std;
int main () {
    int dia ;
    int mes ;
    string signo ;

    cout << "ingrese dia de nacimiento" << endl ;
    cin >> dia ;
    
    cout << "ingrese mes de nacimiento (elija un numero del 1-12 dependiendo de su mes)" << endl ;
    cin >> mes ;

    if ((mes == 3 && dia >= 21) || (mes == 4 && dia <= 19)){
        cout << " su signo sodiacal es Aries " << endl ;
    }
    else if ((mes == 4 && dia >= 20) || (mes == 5 && dia <= 20)){
        cout << " su signo sodiacal es Tauro " << endl ;
    }
    else if ((mes == 5 && dia >= 21) || (mes == 6 && dia <= 20)){
        cout << " su signo sodiacal es Geminis " << endl ;
    }
    else if ((mes == 6 && dia >= 21) || (mes == 7 && dia <= 22)){
        cout << " su signo sodiacal es Cancer " << endl ;
    }
    else if ((mes == 7 && dia >= 23) || (mes == 8 && dia <= 22)){
        cout << " su signo sodiacal es Leo " << endl ;
    }
    else if ((mes == 8 && dia >= 23) || (mes == 9 && dia <= 22)){
        cout << " su signo sodiacal es Virgo " << endl ;
    }
    else if ((mes == 9 && dia >= 23) || (mes == 10 && dia <= 22)){
        cout << " su signo sodiacal es Libra " << endl ;
    }
    else if ((mes == 10 && dia >= 23) || (mes == 11 && dia <= 21)){
        cout << " su signo sodiacal es Escorpio " << endl ;
    }
    else if ((mes == 11 && dia >= 22) || (mes == 12 && dia <= 21)){
        cout << " su signo sodiacal es Sagitario " << endl ;
    }
    else if ((mes == 12 && dia >= 22) || (mes == 1 && dia <= 19)){
        cout << " su signo sodiacal es Capricornio " << endl ;
    }
    else if ((mes == 1 && dia >= 20) || (mes == 2 && dia <= 18)){
        cout << " su signo sodiacal es Acuario " << endl ;
    }
    else if ((mes == 2 && dia >= 19) || (mes == 3 && dia <= 20)){
        cout << " su signo sodiacal es Picis " << endl ;
    }
    else{
        cout << "fecha invalida" << endl ;
    }

}