#include <iostream>
#include <string>

using namespace std;

string intropalabra () {
    cout << "Introduzca una Palabra: " << endl;
    cin >> palabra;
    return palabra;
}

void  adivina(string palabra) {
if (palabra=="") {
	cout << "Primero debe insertar una palabra";
	cout << "Introduzca una Palabra: " << endl;
    cin >> palabra;
}
    string adivinarpalabra;
	cout << "Vamos adivinar la palabra" << endl;
    for(int i=0;i<palabra.length();i++){
        cout << "_ ";
    };
	do {cout <<endl<< "¿Que palabra crees que es?" << endl;
	cin >> adivinarpalabra;
	if (adivinarpalabra==palabra)
		cout << "Has adivinado la palabra"<< endl;
	else
		cout << "Prueba de nuevo" << endl;
		}while (adivinarpalabra!=palabra);
}

void menu (){
int opcion;
do {
cout << "Menu\n";
cout << " 0. Introducir Palabra" << endl;
cout << " 1. Adivinar Palabra" << endl;
cout << " 2. Salir" << endl;
cout << " Seleccione Opcion: ";
cin >> opcion;
string palabra;
switch (opcion){
 case 0:intropalabra(palabra);
        break;
 case 1:adivina(palabra);
        break;
 case 2: cout << "Gracias por Usar nuestro programa"<< endl;
 break;
 default: cout <<"Inserte una opcion valida" << endl;
};
}while (opcion!=2);
};




int main() {
menu();
return 0;
}

