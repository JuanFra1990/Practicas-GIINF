#include <iostream>
#include <string>

using namespace std;

int main() {
const int TAM=10;
string cadena;
string nombres[TAM]={"Juan","Pepe","Federico"};
bool esta=false;
cout << "Inserte una cadena de texto: \n";
getline (cin,cadena);
for (int i=0;i<TAM && !esta ;i++){
        if (nombres[i] == cadena) {
            esta=true;
        }
}
if (esta)
cout << "El nombre introducido esta entre los del vector" <<endl;
else
cout << "El nombre introducido no esta entre los del vector" << endl;
return 0;
}
