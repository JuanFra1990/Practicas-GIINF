#include <iostream>

using namespace std;

int main () {
int edad;
cout << "Introduce tu edad " << endl;
cin >> edad;

if (edad>=18 && edad<=25)
    cout << "Estas entre los 18 y los 25" << endl;
else
    if (edad<18 || edad>25)
        cout << "Estas fuera del rango " << endl;
        else
            cout << "El numero introducido no es una edad entera";
return 0;
}
