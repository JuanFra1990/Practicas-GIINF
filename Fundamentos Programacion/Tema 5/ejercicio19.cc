#include <iostream>
using namespace std;

int main() {

int filas=3,columnas=3,sumando1,sumando2,suma;

int m[filas][columnas],n[filas][columnas];

for (int i=filas-1; i>=0;i--){
 for (int j=columnas-1;j>=0;j--){
        cout << "Inserta el valor para la matriz X(" << i <<"," <<j <<")"<<endl;
        cin >> m[i][j];
 };
};

for (int i=filas-1; i>=0;i--){
 for (int j=columnas-1;j>=0;j--){
        cout << "Inserta el valor para la matriz Y(" << i <<"," <<j <<")"<<endl;
        cin >> n[i][j];
 };
};
cout << "La Matriz resultante es:\n";

for (int i=filas-1; i>=0;i--){
       cout << endl <<"{";
    for (int j=columnas-1;j>=0;j--){
        cout <<m[i][j] << "+"<< n[i][j] <<"="<< m[i][j]+n[i][j]<< " ";
        suma+=m[i][j]+n[i][j];
    };
cout <<"}";
};
cout << endl << "La Suma total de las dos matrices es: "<< suma-1 << endl;




return 0;
}
