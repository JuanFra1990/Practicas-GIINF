#include <iostream>

using namespace std;

int main() {
const int TAM=10;
int v[TAM], num=0;
cout << "¿Cuantos Numeros desea insertar?" << endl;
cin >> num;
for (int i=1;i<=num;i++){
    cout << "Inserte un numero para el vector en la posicion " << i << endl;
    cin >> v[i];
};

cout <<"Los numeros en orden inverso son:\n";

for (int j=num; j>=1;j--) {
        cout << v[j] << " ";
}



return 0;
}
