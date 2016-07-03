#include <iostream>

using namespace std;

int main () {
float num1, num2, num3, num4;
cout << "Introduce tres numeros separados por espacios" << endl;
cin >> num1 >> num2 >> num3;
cout << "Introduce otro numero, para compararlo" << endl;
cin >> num4;
if (num4==num1 || num4==num2 || num4==num3)
    cout << "El numero "<< num4 <<" es igual que uno de los numeros elegidos " << num1 <<"," << num2 <<" y " << num3 << endl;
else
    cout << "El numero "<< num4 <<" no coincide con ninguno de los numeros elegidos " << num1 <<"," << num2 <<" y " << num3 << endl;
return 0;
}

