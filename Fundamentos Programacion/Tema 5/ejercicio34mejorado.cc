 #include <iostream>
 #include <string>

 using namespace std;

 struct persona {
 string nombre;
 double peso,altura,imc;
 };


 int main(){
 const int TAM=1000;
 int datos;
 persona personas[TAM];
double imcmayor=0,imcmenor=10000;
 cout << "¿Cuantos datos de personas va a insertar?" <<endl;
cin >> datos;

for (int i=0; i<datos; i++){
    cout << "Inserte nombre de " << i+1 << " persona\n";
    getline(cin>>ws,personas[i].nombre);
    cout << "Inserte peso de la " << i+1 << " persona\n";
    cin >> personas[i].peso;
    cout << "Inserte altura de la " << i+1 << " persona\n";
    cin >> personas[i].altura;
    personas[i].imc=personas[i].peso/(personas[i].altura*personas[i].altura);
     if (personas[i].imc>imcmayor)
        imcmayor=personas[i].imc;
    if (personas[i].imc<imcmenor)
        imcmenor=personas[i].imc;
};
cout << "Listado de personas con peso y altura"<<endl;

for (int m=0; m<datos;m++) {
    cout << "Nombre: " <<personas[m].nombre<<endl;
    cout << "Peso: " << personas[m].peso <<endl;
    cout << "Altura: " << personas[m].altura <<endl;
    cout << "IMC: " << personas[m].imc <<endl;
};

//Muestra la Persona con mayor IMC, y coje el imcmenor
cout << endl << "PERSONA CON MAYOR IMC:"<<endl;



for (int n=0; n<datos;n++) {
    if (personas[n].imc==imcmayor) {
       cout << "Nombre: " <<personas[n].nombre<<endl;
       cout << "IMC: " << personas[n].imc <<endl;
    };
};


//Muestra Personas que superan altura introducida por usuario.
double alturaus;

cout << "Introduce tu altura"<<endl;
cin >> alturaus;

cout << endl << "PERSONAS QUE SUPERAN TU ALTURA:"<<endl;

for (int m=0; m<datos;m++) {
    if (personas[m].altura>alturaus)
        cout << "Nombre: " <<personas[m].nombre<<endl;
    };


cout << endl << "DATOS CONCLUYENTES:"<<endl;
string menor;

for (int m=0; m<datos;m++) {
    if (personas[m].imc==imcmenor)
        menor=personas[m].nombre;
    };
bool personamenorimc="FALSE";
for (int m=0; m<datos;m++) {
    if (personas[m].imc==imcmenor && personas[m].nombre==menor)
       personamenorimc="TRUE";
};

 if (personamenorimc)
    cout << "La persona con menor imc es la persona mas pequeña";
else
    cout << "La persona con menor imc no es la persona mas pequeña";
 return 0;
 }
