#include <iostream>

using namespace std;

int main() {

const int TAM=10;
int v[TAM], suma;

for (int i=0; i<TAM;i++) {
    cout << "Inserta un numero"<<endl;
    cin >> v[i];
    suma+=v[i];
}


cout << "La suma de los numeros del vector es " << suma << "\n";
return 0;
}
