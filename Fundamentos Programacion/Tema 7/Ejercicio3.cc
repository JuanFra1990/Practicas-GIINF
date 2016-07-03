#include <iostream>

using namespace std;

void MaximoyMinimo(const double* v, int TAM, double* maximo, double* minimo)
{
*maximo=*minimo = v[0];
for (int i=0; i<TAM ;++i){
    if (v[i]>*maximo)
            *maximo=v[i];
    if (v[i]<*minimo)
            *minimo=v[i];
};
};

int main() {
int TAM=10, tamanio=0;
double v[TAM],maximo,minimo;

do {
cout << "Cuantos valores desea darle al vector\n";
cin >> tamanio;
}while(tamanio<=0);
for (int i=0;i<tamanio;i++){
        cout<<"Inserte valor para la posicion " << i+1 << " del vector" << endl;
        cin >> v[i];
};
MaximoyMinimo(v,tamanio,&maximo,&minimo);
cout << "El maximo del vector es: " << maximo<<endl;
cout << "El minimo del vector es: " << minimo<<endl;

return 0;
}
