#include <iostream>

using namespace std;

void CambiaNumeros(int v[], int tam ){
for (int i=0;i<tam;i++){
    v[i]=-(v[i]);
};
return;};

int main() {
const int TAM=5;
int v[TAM];

cout << "Introduce Valores para el array" << endl;

for (int i=0; i<TAM; i++) {
    cout << "Valor para el numero " << i+1 << endl;
    cin >> v[i];
};

cout << "Los valores del vector son: " << endl;

CambiaNumeros(v,TAM);

for(int i=0;i<TAM;i++){
    cout << v[i]<<endl;
};

return 0;
}
