#include <iostream>

using namespace std;

double SumaNumeros(const int v[], int tam){
int suma=0;
for (int i=0; i<tam;i++){
        suma+=v[i];
};
return suma;
};

int main() {
const int TAM=5;
int v[TAM];
int contador;

cout << "Introduce Valores para el array" << endl;

for (int i=0; i<TAM; i++) {
    cout << "Valor para el numero " << i+1 << endl;
    cin >> v[i];
};

cout << "La suma de los numeros introducidos es: " << SumaNumeros(v,TAM)<<endl;

return 0;
}
