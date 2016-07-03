#include <iostream>

using namespace std;

int main () {
char letra;
char minuscula1,minuscula2,minuscula3,minuscula4,minuscula5;
cout << "Introduce una letra" << endl;
cin >>letra;
if (letra=='a' || letra=='e' || letra=='i' || letra=='o' || letra=='u')
    cout << "La letra " << letra << " es una vocal minuscula" << endl;
else
    cout << "La letra " << letra << " no es una vocal minuscula" << endl;
return 0;
}
