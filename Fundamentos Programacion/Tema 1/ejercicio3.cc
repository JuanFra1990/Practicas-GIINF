#include <iostream>
using namespace std;

int main () {
    int edad;
    char sexo;
    float altura;
    cout << "¿Cual es su edad?"<<endl;
    cin >> edad;
    cout << "¿Cual es su sexo?"<<endl;
    cin >> sexo;
    cout << "¿Cual es su altura (en metros)?"<<endl;
    cin >> altura;
    cout <<endl;
    cout << "Tiene una edad de: "<<edad<<endl;
    cout << "Su sexo es: "<<sexo<<endl;
    cout << "Su altura en centimetros es: "<<altura*100<<endl;
    return 0;
}
