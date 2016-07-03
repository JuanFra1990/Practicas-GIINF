#include <iostream>

using namespace std;

bool intervalo(double extremo1, double extremo2, double valor) {
bool pertenece=false;
if (valor >=extremo1 && valor<=extremo2)
    pertenece=true;
return pertenece;
}


int main() {
double extremo1, extremo2,valor;

    cout << "Inserte un intervalo " << endl;
    cin >> extremo1 >> extremo2;
    cout << "Inserte un valor para ver si esta en el extremo" << endl;
    cin >> valor;
bool esta=intervalo(extremo1,extremo2,valor);
if (esta)
    cout << "El valor " << valor << " Pertenece al intervalo (" << extremo1 << "," << extremo2 << ")"<< endl;
 else
    cout << "El valor " << valor << " No Pertenece al intervalo (" << extremo1 << "," << extremo2 << ")"<< endl;
return 0;
}
