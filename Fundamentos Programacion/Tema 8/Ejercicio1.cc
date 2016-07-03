#include <iostream>
using namespace std;

int main() {
int tamanio;

cout << "Inserte un tamaño de vector"<<endl;
cin >> tamanio;
int* v  = new int[tamanio];

for (int i=0;i<tamanio;i++){
    cout << "Inserte un valor para la posicion " << i+1 << " del vector" << endl;
    cin >> v[i];
};
cout << endl;
cout << "Los Valores del vector son: " << endl;

for (int i=0;i<tamanio;i++){
    cout << "Valor para la posicion " << i+1 << " del vector" << endl;
    cout << v[i] << endl;
};


return 0;
}
