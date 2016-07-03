#include <iostream>;
#include <cmath>;
using namespace std;

int main () {
    double ccontiguo;
    double copuesto;
    cout << "Introduce la longitud del cateto contiguo"<<endl;
    cin >> ccontiguo;
    cout << "Introduce la longitud del cateto opuesto"<<endl;
    cin >> copuesto;
    cout << "La longitud de la hipotenusa es: " << sqrt(ccontiguo*ccontiguo+copuesto*copuesto)<<endl;

    return 0;

}
