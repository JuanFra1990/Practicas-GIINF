#include <iostream>
using namespace std;

int main() {
int etapas;
int sumaminutos,sumasegundos,sumahoras;
struct tiempo{
int horas,minutos,segundos;
};

const int TAM=1000;
tiempo v;

cout << "¿Cuantas etapas ha corrido el ciclista?\n";
cin >> etapas;

for (int i=1; i<=etapas;i++){
cout << "¿En Cuantas horas ha recorrido la " << i <<"a etapa"<<endl;
cin >> v.horas;
cout << "¿En Cuantos minutos ha recorrido la " << i <<"a etapa"<<endl;
cin >> v.minutos;
cout << "¿En Cuantos segundos ha recorrido la " << i <<"a etapa"<<endl;
cin >> v.segundos;
sumahoras += v.horas;
sumaminutos += v.minutos;
sumasegundos += v.segundos;
}

while (sumasegundos >= 60){
    sumasegundos/=60;
    sumaminutos++;
}

while (sumaminutos >= 60){
    sumaminutos/=60;
    sumahoras++;
}

cout << "El ciclista ha recorrido todas las etapas en:" <<endl;
cout << sumahoras << " horas "  << sumaminutos << " minutos " << sumasegundos <<  " segundos "  << endl;
return 0;
}
