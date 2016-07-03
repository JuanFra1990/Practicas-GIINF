#include <iostream>

using namespace std;

int numerosimpares (const int v[],const int tamv, int w[], int tamw) {
int j=0;
int tamanio=0;
for (int i=0;i<tamv;i++) {
    if (v[i]%2!=0) {
        w[j]=v[i];
        j++;
        tamanio++;}
};
return tamanio;
}


int main() {
int TAM=5, v[TAM],TAMW=100, w[TAMW];

cout << "Introduce Valores para el array" << endl;
for (int i=0; i<TAM; i++) {
    cout << "Valor para el numero " << i+1 << endl;
    cin >> v[i];
};

int tamanio=numerosimpares(v,TAM,w,TAMW);

cout << "Los valores del vector v son: " << endl;

for(int i=0;i<TAM;i++){
    cout << v[i]<<endl;
};
if (tamanio!=0) {
cout << "Los valores del vector w son: " << endl;

for(int i=0;i<tamanio;i++){
    cout << w[i]<<endl;
};
}else {
cout << "El vector no tenia numeros impares";
};
return 0;
}
