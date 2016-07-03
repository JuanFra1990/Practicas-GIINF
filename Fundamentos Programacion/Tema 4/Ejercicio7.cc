#include <iostream>
using namespace std;

int main() {
   int suma, media, mayor, menor;
   menor=10000;
for (int i=4; i<=24; i=i+4) {
    int temperatura;
    cout << "Inserte la temperatura que habia a las " << i << ":00 horas" <<endl;
    cin >> temperatura;
    suma+=temperatura;
    if (mayor < temperatura)
        mayor=temperatura;
    if (menor > temperatura)
        menor=temperatura;
    }
media=suma/6;
cout <<endl << "La Temperatura media del dia es: " << media << " grados" << endl;
cout << "La Temperatura mas alta del dia es: " << mayor << " grados" << endl;
cout << "La Temperatura mas baja del dia es: " << menor << " grados" << endl;
return 0;
}
