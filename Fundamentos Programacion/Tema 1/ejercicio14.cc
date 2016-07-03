#include <iostream>;
#include <cmath>;
using namespace std;

int main () {
    double n1;
    double n2;
    double n3;
    double n4;
    double n5;
    cout << "Introduce el valor del primer numero"<<endl;
    cin >> n1;
    cout << "Introduce el valor del segundo numero"<<endl;
    cin >> n2;
    cout << "Introduce el valor del tercer numero"<<endl;
    cin >> n3;
    cout << "Introduce el valor del cuarto numero"<<endl;
    cin >> n4;
    cout << "Introduce el valor del quinto numero"<<endl;
    cin >> n5;
    double media;
    media=((n1+n2+n3+n4+n5)/(5));
    cout << "La media de los 5 numeros es: " << media <<endl;
    n1=pow(n1-media,2);
    n2=pow(n2-media,2);
    n3=pow(n3-media,2);
    n4=pow(n4-media,2);
    n5=pow(n5-media,2);
    double varianza;
    varianza=((n1+n2+n3+n4+n5)/(5-1));
    cout << "La Desviacion estandar de los numeros: " << sqrt (varianza) <<endl;
    return 0;

}
