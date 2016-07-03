#include <iostream>;
#include <cmath>;
using namespace std;

int main () {

int variable1;
int variable2;
int tmp;

cout << "Inserte el valor de la variable1" << endl;
cin >> variable1;
cout << "Inserte el valor de la variable2" << endl;
cin >> variable2;

cout << "Valores de las variables antes del intercambio " << endl;
cout << "El valor de la variable1 es: " << variable1 << endl;
cout << "El valor de la variable2 es: " << variable2 << endl;

tmp=variable1;
variable1=variable2;
variable2=tmp;

cout << "Valores de las variables despues del intercambio " << endl;
cout << "El valor de la variable1 es: " << variable1 << endl;
cout << "El valor de la variable2 es: " << variable2 << endl;



return 0;
}
