#include <iostream>
using namespace std;

int main() {

int i,suma,cuadrado;
for (i=0;i<=10;i++) {
    cuadrado=i*i;
    suma+=cuadrado;
}

cout << "La suma de los 10 primeros numeros mayores que 0 es: " << suma << endl;
return 0;
}
