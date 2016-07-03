#include <iostream>
using namespace std;

int main() {
const string centinela="Fin";
string larga="", corta="oooooooooooooooooo", cadena;
    do{
        cout << "Inserte una cadena de texto: \n";
        getline (cin,cadena);
         if(cadena.length () > larga.length () ) {
           larga=cadena;
        }
        if (cadena < corta ) {
            corta=cadena;
        }


    }while (cadena != centinela );
cout << "La cadena mas larga es: " << larga <<endl;
cout << "La cadena mas corta es: " << corta <<endl;
return 0;
}
