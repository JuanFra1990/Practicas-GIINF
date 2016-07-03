#include <iostream>
using namespace std;

int main() {
int num;
int i;
cout << "Inserte un numero \n";
cin >> num;
cout << "La Tabla de Multiplicar del: " << num << endl;
for (i=1;i<=10;i++)
    cout << num << "*" << i <<"="<<num*i<<endl;
return 0;
}
