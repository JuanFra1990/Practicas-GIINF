#include <iostream>
using namespace std;


int main() {
int edad,num=0,menos25=0, fem=0, mascedad=0;
char sexo, codigoreg, sexom='M', sexof='F';
cout <<"El programa cojera datos de conductores y dara unos resultados"<<endl<<"*Introduzca 0 en la edad del conductor/a para salir" << endl;
cout << "*El programa solo contabilizara los conductores con todos los datos rellenos"<<endl<<endl;
cout<<"Introduzca la edad de un conductor/a \n";
cin >> edad;
while (edad!=0) {
    cout << "Introduzca el sexo del o de la conductor/a (M-Masculino, F-Femenino) \n";
    cin >> sexo;
    if (edad <25) {
        menos25++;
    }
    if (sexo==sexom || sexo==sexof) {
        cout << "Introduzca el codigo de registro (1 Jaen y 0 Fuera de Jaen)\n";
        cin >> codigoreg;
        num++;
        if (sexo==sexof) {
            fem++;
        }
        if (sexo==sexom) {
            if (edad >18 && edad<25) {
                mascedad++;
            }
        }
    }
    else {
        cout << "El sexo no es valido \n";
    }
    cout<<"Introduzca la edad de un conductor\n";
    cin >> edad;

}
// cout << "menos25: " << menos25 << "; fem: " << fem << "; mascedad: " << mascedad << "; num: "<< num << endl;
cout << endl<< "El porcentaje de Conductores/as menores de 25 anios es: " << (menos25*100/num)<<"%" <<endl;
cout << "El porcentaje de Conductoras Femeninas es: " << (fem*100/num) << "%" <<endl;
cout << "El porcentaje de Conductores Masculinos entre 18 y 25 anios es: " << (mascedad*100/num)<<"%"<<endl;



return 0;
}
