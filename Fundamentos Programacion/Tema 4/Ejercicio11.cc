#include <iostream>
#include <cmath>
using namespace std;

int main() {

int grado;
double cuenta,raiz,potencia,resultado;
cout << "Inserte el grado de aproximacion de pi \n";
cin >> grado;

for (int i=1; i<=grado; i++) {
        potencia=i*i;
        cuenta=6/potencia;
        resultado+=cuenta;
}
raiz=sqrt(resultado);

cout << "La aproximacion de pi con grado " << grado << " es: " << raiz << endl;

return 0;
}
