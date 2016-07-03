/* 
 * File:   Persona.cpp
 * Author: admin
 * 
 * Created on 12 de febrero de 2015, 15:55
 */
#include <iostream>
#include "persona.h"


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
POO_PERS::personas POO_PERS::leerpersona(POO_PERS::personas &persona) {
    do {
        cout << "Dale nombre (recuerda minimo 3, maximo 50)" << endl;
        getline(cin>>ws, persona.nombre);
    } while (persona.nombre.length() < 3 || persona.nombre.length() > 50);
    do {
        cout << "Dale apellidos a " << persona.nombre << " (recuerda minimo 3, maximo 70)" << endl;
        getline(cin>>ws, persona.apellidos);
    } while (persona.apellidos.length() < 3 || persona.apellidos.length() > 70);
    do {
        cout << "Dale NIF a " << persona.nombre << " (recuerda 8 digitos y una letra)" << endl;
        getline(cin>>ws, persona.NIF);
    } while (persona.NIF.length() != 9);
    cout << "Dale edad a " << persona.nombre << endl;
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
POO_PERS::personas POO_PERS::leerpersona(POO_PERS::personas *persona) {
    do {
        cout << "Dale nombre (recuerda minimo 3, maximo 50)" << endl;
        getline(cin>>ws, persona->nombre);
    } while (persona->nombre.length() < 3 || persona->nombre.length() > 50);
    do {
        cout << "Dale apellidos a " << persona->nombre << " (recuerda minimo 3, maximo 70)" << endl;
        getline(cin>>ws, persona->apellidos);
    } while (persona->apellidos.length() < 3 || persona->apellidos.length() > 70);
    do {
        cout << "Dale NIF a " << persona->nombre << " (recuerda 8 digitos y una letra)" << endl;
        getline(cin>>ws, persona->NIF);
    } while (persona->NIF.length() != 9);
    cout << "Dale edad a " << persona->nombre << endl;
    cin >> persona->edad;
    return *persona;
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
void POO_PERS::muestradatos(POO_PERS::personas &persona) {
    cout << "LOS DATOS DE " << persona.nombre << " SON: " << endl;
    cout << "Se llama: " << persona.nombre << " " << persona.apellidos << endl;
    cout << "Su DNI es: " << persona.NIF << endl;
    cout << "Su edad es: " << persona.edad << endl;

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
void POO_PERS::muestradatos(POO_PERS::personas *persona) {
    cout << endl << "LOS DATOS DE " << persona->nombre << " SON: " << endl;
    cout << "Se llama: " << persona->nombre << " " << &persona->apellidos << endl;
    cout << "Su DNI es: " << persona->NIF << endl;
    cout << "Su edad es: " << persona->edad << endl;
};

/**
 * @brief Esta funcion pide datos por teclado para rellenar un vector
 * @param vp vector tipo personas (estructura creada con anterioridad)
 * @param max numero de personas maxima que usemos para rellenar el vector
 * @pre que la variable max sea mayor que 0 y que el vector sea tipo personas
 * struct personas {
    string nombre;
    string apellidos;
    string NIF;
    int edad;
};
 * @post rellena el vector 
 * @return si no se cumplen los pre puede funcionar de manera anomala
 */

       /**
 * @brief Esta funcion muestra el menu 
 * @post devuelve la opcion del menu escogida;
 */
 int POO_PERS::menu () {
    int opcion=-1;
    cout << "*****************MENU DE OPCIONES: ************"<<endl;
    cout << "1. Rellenar Vector" << endl; 
    cout << "2. Mostrar Vector" << endl; 
    cout << "3. Mostrar media de edad del Vector" << endl; 
    cout << "4. Buscar posicion de la persona en el Vector" << endl; 
    cout << "5. Buscar persona con mayor edad" << endl; 
    cout << "6. Buscar persona con menor edad" << endl; 
    cout << "7. Ordenar Vector" << endl; 
    cout << "8. Salir" << endl; 
    cout << "**********************************************"<<endl;
    cout << "Eliga una opcion: ";
    cin >> opcion;
    return opcion;
    };
    
int POO_PERS::rellenarVector(personas *vp[],int &max, int &contador){
    contador=0;
    for(int i=0;i<max;i++){
   cout << "Inserte nombre para la " << i+1 <<" persona"<<endl;
   cin >> vp[i]->nombre;
   cout << "Inserte apellidos para la " << i+1 <<" persona"<<endl;
   cin >> vp[i]->apellidos;
   cout << "Inserte NIF para la " << i+1 <<" persona"<<endl;
   cin >> vp[i]->NIF;
   cout << "Inserte edad para la " << i+1 <<" persona"<<endl;
   cin >> vp[i]->edad;
   contador=i;
    };
    return contador;
};

/**
 * @brief Esta funcion muestra los datos del vector rellenado anteriormente 
 * @param persona puntero que apunta a una variable de tipo personas (estructura creada con anterioridad)
 * @pre que la variable max sea mayor que 0 y que el vector sea tipo personas
 * struct personas {
    string nombre;
    string apellidos;
    string NIF;
    int edad;
};
 * @post muestra en pantalla los datos del vector, tras cinco personas debemos pulsar una tecla
 * @return si no se cumplen los pre puede funcionar de manera anomala
 */
void POO_PERS::mostrarenPantalla(POO_PERS::personas *vp[],const int &max) {
    for (int i=0;i<max;i++){
    int tecla;
    cout << endl << "LOS DATOS DE " << vp[i]->nombre << " SON: " << endl;
    cout << "Se llama: " << vp[i]->nombre << " " << vp[i]->apellidos << endl;
    cout << "Su DNI es: " << vp[i]->NIF << endl;
    cout << "Su edad es: " << vp[i]->edad << endl;
    if (i%5==0)
        cout << "Pulse tecla para continuar"<<endl;
        cin>>tecla;
    };
};
/**
 * @brief Esta funcion muestra la media de las edades del vector rellenado anteriormente 
 * @param vp[] vector de tipo personas (estructura creada con anterioridad)
 * @param max numero de personas con datos en el vector
 * @pre que la variable max sea mayor que 0 y que el vector sea tipo personas
 * struct personas {
    string nombre;
    string apellidos;
    string NIF;
    int edad;
};
 * @post devuelve la media de edad de las personas 
 * @return si no se cumplen los pre puede funcionar de manera anomala
 */
    float POO_PERS::mediaEdad(POO_PERS::personas *vp[],int &max) {
        int suma=0;
        int media;
        for (int i=0;i<max;i++){
            suma+=vp[i]->edad;
        };
        media=suma/max;
        cout << "La media de las edades es: " << media << endl;
        return media;
    };
/**
 * @brief Esta funcion posicion del vector ocupada por una persona con apellido concreto
 * @param vp[] vector de tipo personas (estructura creada con anterioridad)
 * @param max numero de personas con datos en el vector
 * @pre que la variable max sea mayor que 0 y que el vector sea tipo personas
 * struct personas {
    string nombre;
    string apellidos;
    string NIF;
    int edad;
};
 * @post devuelve la posicion de las persona con apellido dado por teclado 
 * @return si no se cumplen los pre puede funcionar de manera anomala
 */
    int POO_PERS::buscar(POO_PERS::personas *vp[],int &max){
        string apellidobuscado;
        cout << "Inserte el apellido a buscar" << endl;
        getline(cin>>ws,apellidobuscado);
        int posicion=-1;
        for (int i=0;i<max;i++){
            if(apellidobuscado==vp[i]->apellidos)
                posicion=i;
        };
     return posicion;
     };
/**
 * @brief Esta funcion devuelve posicion del vector con la persona con mayor edad del vector
 * @param vp[] vector de tipo personas (estructura creada con anterioridad)
 * @param max numero de personas con datos en el vector
 * @pre que la variable max sea mayor que 0 y que el vector sea tipo personas
 * struct personas {
    string nombre;
    string apellidos;
    string NIF;
    int edad;
};
 * @post devuelve la posicion de las persona con mayor edad 
 * @return si no se cumplen los pre puede funcionar de manera anomala
 */
     int POO_PERS::mayorEdad(POO_PERS::personas *vp[],int &max) {
        int edadmayor=0;
        int posicion=0;
        for (int i=0;i<max;i++){
            if (vp[i]->edad>edadmayor)
                edadmayor=vp[i]->edad;
                posicion=i;
        };
        cout << "La persona con mayor edad es: " << vp[posicion]->nombre << " " << vp[posicion]->apellidos << endl;
        cout << "Con una edad de: " << vp[posicion]->edad;
        return posicion;
    };
    
/**
 * @brief Esta funcion devuelve posicion del vector con la persona con menor edad del vector
 * @param vp[] vector de tipo personas (estructura creada con anterioridad)
 * @param max numero de personas con datos en el vector
 * @pre que la variable max sea mayor que 0 y que el vector sea tipo personas
 * struct personas {
    string nombre;
    string apellidos;
    string NIF;
    int edad;
};
 * @post devuelve la posicion con menor edad 
 * @return si no se cumplen los pre puede funcionar de manera anomala
 */
     int POO_PERS::menorEdad(POO_PERS::personas *vp[],int &max) {
        int edadmenor=1000;
        int posicion=0;
        for (int i=0;i<max;i++){
            if (vp[i]->edad>edadmenor)
                edadmenor=vp[i]->edad;
                posicion=i;
        };
        cout << "La persona con menor edad es: " << vp[posicion]->nombre << " " << vp[posicion]->apellidos << endl;
        cout << "Con una edad de: " << vp[posicion]->edad;
        return posicion;
    };
    
    /**
 * @brief Esta funcion ordena el vector
 * @param vp[] vector de tipo personas (estructura creada con anterioridad)
 * @param max numero de personas con datos en el vector
 * @pre que la variable max sea mayor que 0 y que el vector sea tipo personas
 * struct personas {
    string nombre;
    string apellidos;
    string NIF;
    int edad;
};
 * @post devuelve vector ordenado 
 * @return si no se cumplen los pre puede funcionar de manera anomala
 */
     int POO_PERS::ordenar(POO_PERS::personas *vp[],int &max) {
        int edadmenor=1000;
        int posicion=0;
        for (int i=0;i<max;i++){
            if (vp[i]->edad>edadmenor)
                edadmenor=vp[i]->edad;
                posicion=i;
        };
        cout << "La persona con menor edad es: " << vp[posicion]->nombre << " " << vp[posicion]->apellidos << endl;
        cout << "Con una edad de: " << vp[posicion]->edad;
        return posicion;
    };
