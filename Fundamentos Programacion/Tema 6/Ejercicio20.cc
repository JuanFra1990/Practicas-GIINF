#include <iostream>

using namespace std;

const int filas=3,columnas=3;
int fila;

int Minimo (int matriz[][columnas],  int fila){
int minimo=1000000;
    for (int j=0;j<columnas;j++){
      if (matriz[fila][j]<minimo){
        minimo=matriz[fila][j];
        }
    };
return minimo;
}


int main(){

int m[filas][columnas], mnmo,fila;



cout << "Introduce Valores para la matriz" << endl;
for (int i=0; i<filas; i++) {
        for (int j=0;j<columnas;j++) {
    cout << "Valor para la posicion m[" << i+1<< "][" << j+1 <<"]" << endl;
    cin >> m[i][j];};
};


cout << "Inserte numero de fila, recuerde que hay " << filas <<" filas" << endl;
cin >> fila;

cout << "El numero menor de la fila " << fila << " es: " << Minimo(m,fila-1) << endl;



return 0;
}
