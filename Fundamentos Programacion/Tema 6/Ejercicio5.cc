#include <iostream>
using namespace std;

bool esdigito (char digito ){
if (digito=='0' || digito=='1' || digito=='2' || digito=='3' || digito=='4' || digito=='5' || digito=='6' || digito=='7' || digito=='8' || digito=='9')
    return true;
return false;
}

int nDigitos(const string& cadena){
int digito=0;
for (int i=0;i<cadena.length();i++) {
    if (esdigito(cadena[i]))
        digito++;
};
return digito;
}

int main() {
string cadena;
cout << "Inserte una cadena de texto" << endl;
getline(cin>>ws,cadena);
int digito=nDigitos(cadena);
if (digito==0)
    cout << "No hay digitos en esta cadena"<<endl;
else
    cout << " Hay " << digito << " digitos en esta cadena"<<endl;
return 0;
}
