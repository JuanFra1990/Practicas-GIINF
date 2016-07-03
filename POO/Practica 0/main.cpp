/**
 * @file main.cpp (Practica 0)
 * @author Juan Francisco Abán Fontecha
 * @date 07/02/2015
 * @brief Distintas Funciones para aprender uso de C++ Orientado Objetos (Practica 0)
 */
#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

//Estructura necesaria para las funciones
struct personas {
    string nombre;
    string apellidos;
    string NIF;
    int edad;
};

/**
 * @brief Esta funcion pide que insertemos datos a una variable por paso de referencia
 * @param persona variable de tipo personas (estructura creada con anterioridad)
 * @pre que la variable que asignemos sea del tipo personas
 * struct personas {
    string nombre;
    string apellidos;
    string NIF;
    int edad;
};
 * @post nos devuelve una variable con los datos introducidos por teclado del tipo personas
 * @return si la variable es de otro tipo dara error
 */
personas leerpersona(personas &persona) {
do {
    cout << "Dale nombre (recuerda minimo 3, maximo 50)"<<endl;
    getline(cin>>ws,persona.nombre);
}while(persona.nombre.length()<3 || persona.nombre.length()>50);
do {
    cout << "Dale apellidos a "<< persona.nombre<< " (recuerda minimo 3, maximo 70)"<<endl;
    getline(cin>>ws,persona.apellidos);
}while(persona.apellidos.length()<3 || persona.apellidos.length()>70);
do {
    cout << "Dale NIF a " << persona.nombre<< " (recuerda 8 digitos y una letra)"<<endl;
    getline(cin>>ws,persona.NIF);
}while(persona.NIF.length()!=9);
cout << "Dale edad a "<< persona.nombre <<endl;
 cin >> persona.edad;
 return persona;
}

/**
 * @brief Esta funcion pide que insertemos datos a una variable por punteros
 * @param persona variable de tipo personas (estructura creada con anterioridad)
 * @pre que la variable apuntada sea del tipo personas
 * struct personas {
    string nombre;
    string apellidos;
    string NIF;
    int edad;
};
 * @post cambia valor de la variable apuntada con los datos introducidos por teclado del tipo personas
 * @return si apuntamos a otra variable de distinto tipo dara error
 */
personas leerpersona(personas *persona) {
do {
    cout << "Dale nombre (recuerda minimo 3, maximo 50)"<<endl;
    getline(cin>>ws,persona->nombre);
}while(persona->nombre.length()<3 || persona->nombre.length()>50);
do {
    cout << "Dale apellidos a "<< persona->nombre<< " (recuerda minimo 3, maximo 70)"<<endl;
    getline(cin>>ws,persona->apellidos);
}while(persona->apellidos.length()<3 || persona->apellidos.length()>70);
do {
    cout << "Dale NIF a " << persona->nombre<< " (recuerda 8 digitos y una letra)"<<endl;
    getline(cin>>ws,persona->NIF);
}while(persona->NIF.length()!=9);
cout << "Dale edad a "<< persona->nombre <<endl;
 cin >> persona->edad;
}


/**
 * @brief Esta funcion muestra los datos de la variable persona
 * @param persona variable de tipo personas (estructura creada con anterioridad)
 * @pre que la variable que asignemos sea del tipo personas
 * struct personas {
    string nombre;
    string apellidos;
    string NIF;
    int edad;
};
 * @post muestra por pantalla los datos de la variable persona
 * @return si la variable es de otro tipo puede funcionar de manera anomala
 */
void muestradatos(personas &persona) {
    cout << "LOS DATOS DE "<< persona.nombre <<" SON: " << endl;
    cout << "Se llama: " <<persona.nombre << " " << persona.apellidos <<endl;
    cout << "Su DNI es: "<< persona.NIF<<endl;
    cout << "Su edad es: "<< persona.edad <<endl;

}

/**
 * @brief Esta funcion muestra los datos de la variable a la que apunta nuestro puntero
 * @param persona puntero que apunta a una variable de tipo personas (estructura creada con anterioridad)
 * @pre que la variable que asignemos sea del tipo personas
 * struct personas {
    string nombre;
    string apellidos;
    string NIF;
    int edad;
};
 * @post muestra por pantalla los datos de la variable apuntada por el puntero persona
 * @return si la variable es de otro tipo puede funcionar de manera anomala
 */
void muestradatos(personas *persona) {
    cout << endl << "LOS DATOS DE "<< persona->nombre <<" SON: " << endl;
    cout << "Se llama: " <<persona->nombre << " " << &persona->apellidos <<endl;
    cout << "Su DNI es: "<< persona->NIF<<endl;
    cout << "Su edad es: "<< persona->edad <<endl;

}

int main() {
    // Ejercicio 5 
    
    personas persona;
    //Llamada para la funcion sobrecargada leerpersona con paso por Referencia
    persona=leerpersona(persona);
    //Llamada a la funcion sobrecargada  muestradatos con paso por Referencia
    muestradatos(persona);
    //Llamada para la funcion sobrecargada leerpersona con paso por punteros
    leerpersona(&persona);
    //Llamada a la funcion sobrecargada  muestradatos con paso por Referencia
    muestradatos(&persona);
    
    // Ejercicio 6 
    
    int numpersonas=1000000,suma=0,contador=0;
    cout << "Que numero de personas desea meter en el programa"<<endl;
    cin >> numpersonas;
    //usamos memoria dinamica para asignar valor al numero de personas
    personas *v=new personas[numpersonas];
    
    for (int i=0;i<numpersonas;i++){
        v[i]=leerpersona(v[i]);
    };
    
    for (int i=0;i<numpersonas;i++){
        muestradatos(v[i]);
        //vamos sumando las edades de todos los usuarios para hacer la media
        suma+=v[i].edad;
    };
    cout << "La media de Edad de las personas es: " << suma/numpersonas << endl;
    return 0;
}
