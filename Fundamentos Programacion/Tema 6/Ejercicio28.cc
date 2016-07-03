#include <iostream>

using namespace std;

struct fecha {
int dia;
int mes;
int anio;
};

string fechacorrecta ( fecha fecha1) {
string Bien;
cout << fecha1.dia<<endl;
Bien=fecha1.dia;
cout <<Bien<<endl;
Bien+="/";
Bien+=fecha1.mes;
Bien+="/";
Bien+=fecha1.anio;
return Bien;
}


int main() {
fecha fecha1;
string fechabien;
cout << "Introduce un dia"<< endl;
cin >> fecha1.dia;
cout << "Introduce un mes"<< endl;
cin >> fecha1.mes;
cout << "Introduce un año"<< endl;
cin >> fecha1.anio;

fechabien=fechacorrecta(fecha1);
cout << "La Fecha correcta es: " << fechabien;

return 0;
}
