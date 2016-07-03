#include <iostream>
using namespace std;

struct Fecha {
int dia,mes,anio;
};

int Menu() {
int opcion=0;
do {
    cout << "Elige una opcion;"<<endl;
    cout << "******************"<<endl;
    cout << "1.Leer Fecha" << endl;
    cout << "2.Mostrar fecha"<< endl;
    cout << "3.Dadas dos fechas cual es posterior "<< endl;
    cout << "4.El incremento en un ano de una fecha"<<endl;
    cout << "5. Salir"<<endl;
    cout << "******************"<<endl;
    cin >> opcion;
}while (opcion<=0 || opcion >=6);
return opcion;
};

void LeerFecha(Fecha* fecha1){

cout << "Inserte dia, mes y anio, separados por un espacio"<< endl;
cin >> fecha1->dia >> fecha1->mes >>fecha1->anio;
cout << endl;

};

void MostrarFecha(Fecha *fecha1){

if (fecha1->dia) {
cout << "La fecha insertada es: "<< endl;
cout << fecha1->dia << "/" << fecha1->mes << "/"<< fecha1->anio<<endl;
}else {
cout << "No hay ninguna fecha insertada"<<endl;
};
};

void ComparaFecha (Fecha *fecha1, Fecha *fecha2) {
if(fecha1->dia==0 && fecha1->mes==0 && fecha1->anio==0){
    cout << "Debe insertar otra fecha al principio del programa, en la opcion 1. Leer fecha"<<endl;
}else if (fecha1->dia==fecha2->dia && fecha1->mes==fecha2->mes && fecha1->anio==fecha2->anio){
    cout << "Las fechas: " << fecha1->dia <<"/"<<fecha1->mes<<"/"<<fecha1->anio<< " y " << fecha2->dia <<"/"<<fecha2->mes<<"/"<<fecha2->anio << endl;
    cout << "Son Iguales" << endl;
}else if (fecha1->anio>fecha2->anio) {
    cout << "Las fecha: " << fecha1->dia <<"/"<<fecha1->mes<<"/"<<fecha1->anio << " es Posterior que la fecha: " << fecha2->dia <<"/"<<fecha2->mes<<"/"<<fecha2->anio << endl;
}else if (fecha2->anio>fecha1->anio) {
    cout << "Las fecha: " << fecha1->dia <<"/"<<fecha1->mes<<"/"<<fecha1->anio << " es Anterior que la fecha: " << fecha2->dia <<"/"<<fecha2->mes<<"/"<<fecha2->anio << endl;
}else if (fecha1->anio==fecha2->anio && fecha1->mes>fecha2->mes ) {
    cout << "Las fecha: " << fecha1->dia <<"/"<<fecha1->mes<<"/"<<fecha1->anio << " es Posterior que la fecha: " << fecha2->dia <<"/"<<fecha2->mes<<"/"<<fecha2->anio << endl;
}else if (fecha1->anio==fecha2->anio && fecha2->mes>fecha1->mes) {
    cout << "Las fecha: " << fecha1->dia <<"/"<<fecha1->mes<<"/"<<fecha1->anio << " es Anterior que la fecha: " << fecha2->dia <<"/"<<fecha2->mes<<"/"<<fecha2->anio << endl;
}else if (fecha1->anio==fecha2->anio && fecha1->mes==fecha2->mes && fecha1->dia>fecha2->dia ) {
    cout << "Las fecha: " << fecha1->dia <<"/"<<fecha1->mes<<"/"<<fecha1->anio << " es Posterior que la fecha: " << fecha2->dia <<"/"<<fecha2->mes<<"/"<<fecha2->anio << endl;
}else if (fecha1->anio==fecha2->anio && fecha1->mes==fecha2->mes && fecha2->dia>fecha1->dia) {
    cout << "Las fecha: " << fecha1->dia <<"/"<<fecha1->mes<<"/"<<fecha1->anio << " es Anterior que la fecha: " << fecha2->dia <<"/"<<fecha2->mes<<"/"<<fecha2->anio << endl;
}else {
    cout << "Ha habido un error en la ejecución";
}
;

};

bool bisiesto (int anio)
{
	return (anio % 4 == 0) && (!(anio % 100 == 0) || (anio % 400 == 0));
};

void incrementaAnio(Fecha *fecha1, Fecha *fecha2) {
int fechaelegida;
cout << "Que fecha desea incrementar?"<<endl;
cin >> fechaelegida;
if (fechaelegida==1){
if ( bisiesto(fecha1->anio) && fecha1->mes==2 && fecha1->dia==29)
    fecha1->dia==28;
fecha1->anio += 1;
cout << "La fecha incrementada es: " << fecha1->dia << "/" << fecha1->mes << "/" << fecha1->anio<<endl;
}else if (fechaelegida==2) {
if ( bisiesto(fecha2->anio) && fecha2->mes==2 && fecha2->dia==29)
    fecha2->dia=28;
fecha2->anio += 1;
cout << "La fecha incrementada es: " << fecha2->dia << "/" << fecha2->mes << "/" << fecha2->anio<<endl;
}else {
cout << "Ha elegido una fecha no existente, debe estar entre 1 y 2\n";
};
};



int main() {
Fecha fecha1, fecha2;
int opcion;
do {
switch (Menu()){
case 1:
    LeerFecha(&fecha1);
    break;
case 2:
    MostrarFecha(&fecha1);
    break;
case 3:
    LeerFecha(&fecha2);
    ComparaFecha(&fecha1,&fecha2);
    break;
case 4:
    incrementaAnio(&fecha1,&fecha2);
    break;
case 5:
    cout << "Gracias por usar nuestro programa";
    opcion=5;
    break;
};
}while(opcion!=5);




return 0;
}
