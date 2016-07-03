
#include <iostream>

using namespace std;

int main () {
float num1, num2,num3;
cout << "Introduce un numero" << endl;
cin >> num1;
cout << "Introduce otro numero" << endl;
cin >> num2;
cout << "Introduce el ultimo numero" << endl;
cin >> num3;

if (num1>num2 && num1>num3)
    cout << "El numero mayor es " << num1 << endl;
else
        if (num2>num1 && num2>num3)
            cout << "El numero mayor es " << num2 << endl;
        else
            if (num3>num1 && num3>num2)
                cout << "El numero mayor es " << num3 << endl;
            else
                cout << "No has introducido un numero"<<endl;
return 0;
}
