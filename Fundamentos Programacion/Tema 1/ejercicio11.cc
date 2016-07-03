#include <iostream>;
#include <cmath>;
using namespace std;

int main () {
    double a;
    double b;
    double c;
    cout << "Introduce el valor de a"<<endl;
    cin >> a;
    cout << "Introduce el valor de b"<<endl;
    cin >> b;
    cout << "Introduce el valor de c"<<endl;
    cin >> c;
    cout << "Su ecuacion de segundo grado es: " << a << "x^2 " << b << "x " << c <<endl;
    cout << "El primer valor de x en la ecuacion es: " <<(-b+(sqrt(pow(b,2)-(4*a*c))))/(2*a)<<endl;
    cout << "El primer valor de x en la ecuacion es: " <<(-b-(sqrt(pow(b,2)-(4*a*c))))/(2*a)<<endl;
    return 0;

}
