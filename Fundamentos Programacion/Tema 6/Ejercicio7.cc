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


int SumaNumeros (int numero) {
int suma;
for (int i=0;i<nDigitos(numero);i++){
    suma+=numero[i];
};
return suma;
}


int main(){
string cadena;
cout <<"Inserte un numero para sumar sus digitos"<<endl;
cin >> cadena;
cout << "La Suma de " << cadena << " es " << SumaNumeros(numero)<<endl;
return 0;
}
