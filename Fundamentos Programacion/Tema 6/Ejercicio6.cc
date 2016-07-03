#include <iostream>
#include <cmath>

using namespace std;

bool EsPrimo(int numero){
    for (int i=2; i<numero;i++)
        if (numero%i==0)
            return false;
    return true;
}

int main() {
int numero;
cout << "¿Que numero Quiere comprobar si es primo?";
cin >> numero;
if (EsPrimo(numero))
    cout << "El numero " << numero<<  " es primo"<<endl;
else
    cout << "El numero "<< numero <<" no es primo"<<endl;
return 0;
}
