#include <iostream>
using namespace std;

bool esdigito (char digito ){
if (digito=='0' || digito=='1' || digito=='2' || digito=='3' || digito=='4' || digito=='5' || digito=='6' || digito=='7' || digito=='8' || digito=='9')
    return true;
return false;
}

int main() {
char letra;
cout << "Inserte una letra o un digito" << endl;
cin >> letra;

if (esdigito(letra))
    cout << "El caracter " << letra << " es digito"<<endl;
else
    cout << "El caracter " << letra << " no es digito"<<endl;


return 0;
}
