#include <iostream>

using namespace std;

string maslarga (string uno, string dos) {
string ninguna="Ninguna, La cadena " + uno + " y la cadena " + dos + " Son Iguales";
if (uno.length() > dos.length())
    return uno;
else if (uno.length() < dos.length())
    return dos;
else
    return ninguna;
}

int main() {
string cadena1, cadena2;
cout << "Inserte una cadena de texto " << endl;
getline(cin>>ws, cadena1);
cout << "Inserte otra cadena de texto " << endl;
getline(cin>>ws, cadena2);

cout << "La cadena mas larga es: " << maslarga(cadena1,cadena2)<<endl;
return 0;
}
