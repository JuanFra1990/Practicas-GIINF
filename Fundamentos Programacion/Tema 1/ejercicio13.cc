#include <iostream>
#include <cmath>
using namespace std;

int main () {

double factura, iva, precio, years;

cout << "Inserte el importe de la factura de este ano" <<endl;
cin >> factura;

cout << "Inserte despues de cuantos anos cuanto se incrementaria" << endl;
cin >> years;

iva=0.03;
precio=(iva*years*factura)+factura;

cout << "Su factura tras " << years << " anos, su valor seria " << precio << " Euros" <<endl;
return 0;

}
