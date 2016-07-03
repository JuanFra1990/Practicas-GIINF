#include <iostream>
using namespace std;

int main() {
int num,suma;
cout << "Inserte un numero (Para terminar introduzca 0) \n";
cin >> num;
while (num!=0) {
    cout << "Inserte un numero \n (Para terminar introduzca 0)";
    cin >> num;
    suma+=1;
    }
cout << "Has obtenido " << suma << " numeros mayores de 0" << endl;

return 0;
}
