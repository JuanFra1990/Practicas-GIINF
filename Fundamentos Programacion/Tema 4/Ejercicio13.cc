#include <iostream>
using namespace std;

int main() {
   int nota, nota1,nota2, todos, uno, ultimo, ninguno;
for (int i=1; i<=5; i++) {
    cout << "Inserte la nota del alumno numero " << i <<endl;
    cin >>nota>>nota1>>nota2;
    if (nota >=5 && nota1 >=5 && nota2 >=5)
        todos+=1;
    if ((nota >=5 && nota1 <5 && nota2 <5) || (nota <5 && nota1 >=5 && nota2 <5))
        uno+=1;
    if (nota <5 && nota1 <5 && nota2 >=5)
        ultimo+=1;
    if (nota <5 && nota1 < 5 && nota2 < 5)
        ninguno+=1;}
if (todos!=0)
    cout <<endl << todos <<" Alumnos han aprobado todos los examenes "<< endl;
if (uno!=0)
    cout <<endl << uno <<" Alumnos han aprobado un solo examen (el primero o el segundo)"<< endl;
if (ultimo!=0)
    cout <<endl << ultimo <<" Alumnos han aprobado el ultimo examen "<< endl;
if (ninguno!=0)
    cout <<endl << ninguno <<" Alumnos no han aprobado ningun examen "<< endl;
return 0;

}
