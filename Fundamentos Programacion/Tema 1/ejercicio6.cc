#include <iostream>
using namespace std;

int main () {
    int notapracticas;
    int notateoria;
    int notaparticipacion;
    cout << "¿Cual es su nota en practicas?"<<endl;
    cin >> notapracticas;
    cout << "¿Cual es su nota en teoria?"<<endl;
    cin >> notateoria;
    cout << "¿Cual es su nota en participacion?"<<endl;
    cin >> notaparticipacion;
    cout << "Su nota final es: " << notapracticas*0.3+notateoria*0.6+notaparticipacion*0.1<<endl;
    return 0;

}
