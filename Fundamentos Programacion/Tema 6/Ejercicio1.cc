#include <iostream>

using namespace std;

int valor(int num1) {
if (num1<0)
    return -num1;
return num1;
}

int main() {
int numero;
cout << "Introduzca un numero para saber su valor absoluto" << endl;
cin >> numero;
cout << "El valor absoluto de " << numero << " es " << valor(numero) << endl;
return 0;
}
