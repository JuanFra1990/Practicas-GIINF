#include <iostream>;
#include <cmath>;
using namespace std;

int main () {
    double x;
    double y;
    cout << "Introduce el valor de x"<<endl;
    cin >> x;
    cout << "Introduce el valor de y"<<endl;
    cin >> y;
    cout << "El valor de la funcion es: " << sqrt(x)/(y*y-1)<<endl;
    return 0;

}
