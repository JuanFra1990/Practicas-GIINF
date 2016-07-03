#include <iostream>

using namespace std;

int main () {
float num1, num2;
cout << "Introduce un numero" << endl;
cin >> num1;
cout << "Introduce otro numero" << endl;
cin >> num2;
if (num1>num2)
    cout << "El numero mayor es" << num1 << endl;
else
        if (num2>num1)
            cout << "El numero mayor es " << num2 << endl;
        else
            cout << "Los numeros " << num1 << " y " << num2 << " son iguales";
return 0;
}
