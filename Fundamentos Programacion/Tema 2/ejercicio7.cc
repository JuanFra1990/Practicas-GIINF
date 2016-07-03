
#include <iostream>

using namespace std;

int main () {
float num1, num2,num3,num4;
cout << "Introduce cuatro numeros, separados por espacios" << endl;
cin >> num1 >> num2 >> num3 >> num4;

if (num1>num2 && num1>num3 && num1>num4)
    cout << "El numero mayor es " << num1 << endl;
else
        if (num2>num1 && num2>num3 && num2>num4)
            cout << "El numero mayor es " << num2 << endl;
        else
            if (num3>num1 && num3>num2 && num3>num4)
                cout << "El numero mayor es " << num3 << endl;
            else
                 if (num4>num1 && num4>num2 && num4>num3)
                    cout << "El numero mayor es " << num4 << endl;
                else
                    cout << "No has introducido un numero"<<endl;
return 0;
}
