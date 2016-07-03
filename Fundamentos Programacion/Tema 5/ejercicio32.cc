#include <iostream>
#include <string>
using namespace std;

int main() {

const int nfilas=100, ncolumnas=2;
int datos;
struct persona {
string nombre;
char minusvalia;
};
persona personas[nfilas];
persona personasconminusvalia[nfilas];
persona personassinminusvalia[nfilas];

cout << "¿Cuantos datos de personas va a insertar?" <<endl;
cin >> datos;

for (int i=0; i<datos; i++){
    cout << "Inserte nombre de " << i+1 << " persona\n";
    cin >> personas[i].nombre;
    cout << "¿Es minusvalido?(true o false)\n";
    cin >> personas[i].minusvalia;
};

int j=0,k=0;

for (int l=0; l<datos; l++) {
    if (personas[l].minusvalia == 's'){
        personasconminusvalia[j]=personas[l];
        j++;
    }else{
        personassinminusvalia[k]=personas[l];
        k++;
    };
};
cout << "Nombre Personas con Minusvalia" <<endl;
for (int m=0; m<=datos;m++) {
    cout << personasconminusvalia[m].nombre<<endl;
};
cout << "Nombre Personas sin Minusvalia" <<endl;
for (int n=0; n<=datos; n++) {
    cout << personassinminusvalia[n].nombre<<endl;
};
return 0;
}
