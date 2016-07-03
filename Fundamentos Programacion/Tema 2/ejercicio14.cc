#include <iostream>

using namespace std;

int main () {
float i,j;
char c;
cout << "Introduce un numero " << endl;
cin >> i;
cout << "Introduce una letra " << endl;
cin >> c;
cout << "Introduce otro numero " << endl;
cin >> j;
switch (c){
case '+':
    cout << "La suma es: " << i+j <<endl;
    break;
case '-':
    cout << "La resta es: " << i-j <<endl;
    break;
case '*':
case 'x':
    cout << "La multiplicación es: " << i*j <<endl;
    break;
case '/':
    cout << "La division es: " << i/j <<endl;
    break;
default:
    cout << "Operación no contemplada"<<endl;

}
return 0;
}

