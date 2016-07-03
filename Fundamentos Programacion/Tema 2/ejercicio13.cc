#include <iostream>

using namespace std;

int main () {
float a,b,c;
cout << "Introduce el valor de los tres lados de un triangulo, Primero el lado mas largo separados por espacios" << endl;
cin >> a >> b >> c;

if (a >= b+c)
    cout << "No es un triangulo " << endl;
else
        if (a*a==(b*b)+(c*c))
            cout << "El Triangulo es Rectangulo " << endl;
        else
            if ((a*a) <(b*b)+(c*c))
                cout << "El Triangulo es acutangulo " << endl;
            else
                if ((a*a) >(b*b)+(c+c))
                    cout << "El Triangulo es obtusangulo " << endl;
                else
                    cout << "No has introducido un numero"<<endl;
return 0;
}
