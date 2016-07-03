#include <iostream>
using namespace std;

int main() {
int num;
cout << "Inserte un numero (Para terminar introduzca 0, o numero entre 20 y 30) \n";
cin >> num;
while (num!=0) {

    cout << "Inserte un numero (Para terminar introduzca 0, o numero entre 20 y 30) \n";
    cin >> num;
    if (num>=20 && num<=30)
    break;
    }
return 0;
}
