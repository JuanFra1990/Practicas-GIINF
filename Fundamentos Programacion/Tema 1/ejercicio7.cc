#include <iostream>
using namespace std;

int main () {
    float nota1;
    float nota2;
    float nota3;
    float nota4;
    cout << "Introduce nota del primer alumno" <<endl;
    cin >> nota1;
    cout << "Introduce nota del segundo alumno" <<endl;
    cin >> nota2;
    cout << "Introduce nota del tercer alumno" <<endl;
    cin >> nota3;
    cout << "Introduce nota del cuarto alumno" <<endl;
    cin >> nota4;
    cout << "La nota media de los 4 alumnos es: " <<(nota1+nota2+nota3+nota4)/4<<endl;
    return 0;
}
