#include <iostream>
using namespace std;

int main() {

int filas=3,columnas=3;

int m[filas][columnas];

for (int i=filas-1; i>=0;i--){
 for (int j=columnas-1;j>=0;j--){
        cout << "Inserta el valor para la matriz " << i <<"," <<j<<endl;
        cin >> m[i][j];
 };
};
cout << "La Diagonal de la matriz es:\n";
for (int k=0; k<3; k++){
    cout << m[k][k]<<" ";
};

return 0;
}
