#include <iostream>
#include <cmath>
using namespace std;

int main () {

int importe;
int precioexacto;
int vuelta;
int centimo50,centimo20,centimo10,centimo5;

cout << "Inserte el importe para su cajetilla de tabaco" << endl;
cin >> precioexacto;

cout << "Inserte el dinero introducido" << endl;
cin >> importe;

vuelta=importe-precioexacto;

cout << "Su vuelta es: " << vuelta << " centimos" <<endl<<endl;

centimo50=vuelta/50;
vuelta=vuelta%50;
centimo20=vuelta/20;
vuelta=vuelta%20;
centimo10=vuelta/10;
vuelta=vuelta%10;
centimo5=vuelta/5;

if (centimo50>0) {
cout << "Le devolveriamos " << centimo50 << " monedas de 50 centimos" << endl;
}
if (centimo20>0) {
cout << "Le devolveriamos " << centimo20 << " monedas de 20 centimos" << endl;
}
if (centimo10>0) {
cout << "Le devolveriamos " << centimo10 << " monedas de 10 centimos" << endl;
}
if (centimo5>0) {
cout << "Le devolveriamos " << centimo5 << " monedas de 5 centimos" <<endl;
}

return 0;
}
