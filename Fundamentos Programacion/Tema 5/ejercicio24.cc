#include <iostream>
using namespace std;

int main() {

string cadena;
cout << "Inserte una cadena de texto: \n";
getline (cin,cadena);

int a=0, e=0,ocu_i=0,o=0,u=0;

for (int i=0;i<cadena.length();i++){
    switch (cadena[i]) {
        case 'a':
            a++;
            break;
        case 'e':
            e++;
            break;
        case 'i':
            ocu_i++;
            break;
        case 'o':
            o++;
            break;
        case 'u':
            u++;
            break;
    };
}

if (a!=0)
cout << "El numero de ocurrencias de a es: " << a << endl;
if (e!=0)
cout << "El numero de ocurrencias de e es: " << e << endl;
if (ocu_i!=0)
cout << "El numero de ocurrencias de i es: " << ocu_i << endl;
if (o!=0)
cout << "El numero de ocurrencias de o es: " << o << endl;
if (u!=0)
cout << "El numero de ocurrencias de u es: " << u << endl;
return 0;
}
