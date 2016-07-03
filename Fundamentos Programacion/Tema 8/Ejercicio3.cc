#include <iostream>

using namespace std;

struct persona {
string nombre;
int edad;
string localidad;
};

int BuscaPersonas(const persona* v, int tamv, string* m, const string& localidadbuscada){
int tamm=0;
for (int i=0;i<tamv;i++){
 if (v[i].localidad == localidadbuscada) {
        tamm++;
 };
};

m=new string[tamm];

for (int i=0;i<tamv&&tamm<0;i++){
 if (v[i].localidad==localidadbuscada) {
        m[tamm]=v[i];
        tamm--;
 };
};
return tamm;
}

int main() {
persona v[3];
string localidadbuscada;
string *m;
cout << "¿De que localidad desea que sean las personas de su vector?" << endl;
getline(cin>>ws,localidadbuscada);

tamm=BuscaPersonas(v,3,m,localidadbuscada);
cout << "Las personas de la localidad" << localidad <<  "son:\n";
for (int i=0;i<tamm;i++){
        cout << m[i];
};



return 0;
}
