#include <iostream>

using namespace std;

void Intercambio (string* valor, string* valor2) {
string valorx;
valorx=*valor;
*valor=*valor2;
*valor2=valorx;
}


int main() {
string v1="hola",v2="Manolo";
cout << "El valor inicial de v1 es: " << v1 << endl;
cout << "El valor inicial de v2 es: " << v2 << endl;
Intercambio(&v1,&v2);
cout << "El valor despues del cambio de v1 es: " << v1 << endl;
cout << "El valor despues del cambio de v2 es: " << v2 << endl;
return 0;
}
