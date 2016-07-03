#include <iostream>
#include <string>

using namespace std;

struct fecha{
int dia, mes, anio;
};

struct datos {
int numero;
string nombre;
string DNI;
fecha fechanacimiento;
int votos;
};


int main () {
int candidat=0;
do {
cout << "¿Inserte numero de candidatos a delegado o delegada de clase?(Recuerde que debe haber un minimo de tres)"<<endl;
cin >> candidat;
}while(candidat<1);

const int TAM=1000, votos=2;
datos datospersonales[TAM];

for (int i=1; i<=candidat; i++) {
    datospersonales[i].numero=i;
    cout << "Ahora necesitamos saber los datos del candidato o candidata numero " << i << endl;
    cout << "Nombre y apellidos: ";
    getline(cin>>ws,datospersonales[i].nombre);
    cout << "DNI: ";
    cin >> datospersonales[i].DNI;
    cout << "Fecha Nacimiento(Formato dd mm aaaa): ";
    cin >> datospersonales[i].fechanacimiento.dia >> datospersonales[i].fechanacimiento.mes >> datospersonales[i].fechanacimiento.anio;
}

int numalumn=0;

do {
cout << "¿Inserte numero de alumnos y alumnas que hay en el aula?(Recuerde que debe haber un minimo igual al numero de candidatos o candidatas)"<<endl;
cin >> numalumn;
}while(numalumn<candidat);

int voto=0, blancos=0,nulos=0,nvotos=0, vot[TAM],numvotos=0;

for (int i=1; i<=numalumn;i++) {
cout << "A quien vota el alumno numero " << i << endl;
cin >> voto;
//cout << "El numero de candidatos o candidatas es: " << candidat <<endl;
    if (voto>0 && voto<=candidat) {
        vot[voto]++;
    }else if (voto==0) {
        blancos++;
    }else {
        nulos++;
    };
numvotos++;
};

cout << "El numero de votos totales es: " << numvotos<<endl;
for (int i=1;i<=candidat;i++) {
    cout << "Nombre Candidatx: " << datospersonales[i].nombre << endl;
    cout << "Numero de votos obtenidos: " << vot[i] << endl;
}
cout << "El numero de votos nulos es: " << nulos<<endl;
cout << "El numero de votos blancos es: " << blancos<<endl;

return 0;
}
