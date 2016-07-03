/* 
 * File:   PerUtil.cpp
 * Author: admin
 * 
 * Created on 19 de febrero de 2015, 15:57
 */
#include <iostream>
#include "PersonaUtil.h"
#include "persona.h"

using namespace std;

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
Persona PerUtil::leerpersona(Persona persona) {

    string cad;
    int ced;
    char nuevaletraDNI;

    cout << "Dale nombre (recuerda minimo 3, maximo 50)" << endl;
    getline(cin>>ws, cad);
    persona.setNombre(cad);

    cout << "Dale primer apellido a " << persona.getNombre() << " (recuerda minimo 3, maximo 70)" << endl;
    getline(cin>>ws, cad);
    persona.setprimerApellido(cad);

    cout << "Dale segundo apellido a " << persona.getNombre() << endl;
    getline(cin>>ws, cad);
    persona.setsegundoApellido(cad);
    
    cout << "Dale correo a " << persona.getNombre() << endl;
    cin >> cad;
    persona.setcorreo(cad);

    cout << "Dale telefono a " << persona.getNombre() << endl;
    cin >> ced;
    persona.settelefono(ced);
    
    cout << "Dia de nacimiento " << persona.getNombre() << endl;
    cin >> ced;
    persona.setdiaNacimiento(ced);
        
    cout << "Mes de nacimiento " << persona.getNombre() << endl;
    cin >> ced;
    persona.setmesNacimiento(ced);
    
    cout << "Año de nacimiento " << persona.getNombre() << endl;
    cin >> ced;
    persona.setanioNacimiento(ced);
    
    cout << "Dale DNI a " << persona.getNombre() << " (recuerda 8 digitos y una letra)" << endl;
    cin >> ced;
    persona.setDNI(ced);
            
    cout << "Dale letra DNI a " << persona.getNombre() << " (recuerda 8 digitos y una letra)" << endl;
    cin >> nuevaletraDNI;
    persona.setletraDNI(nuevaletraDNI);
    
    return persona;
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

void PerUtil::muestradatos(Persona persona) {
    cout << endl << "LOS DATOS DE " << persona.getNombre() << " SON: " << endl;
    cout << "Se llama: " << persona.getNombre() << " " << persona.getprimerApellido() << persona.getsegundoApellido() << endl;
    cout << "Su DNI es: " << persona.getDNI() << persona.getletraDNI() << endl;
    cout << "Su fecha de nacimiento es: " << persona.getdiaNacimiento() << "/" << persona.getmesNacimiento() << "/" << persona.getanioNacimiento() << endl;
    cout << "Sus datos de contacto son:" << endl;
    cout << "correo: " << persona.getcorreo();
    cout << "telefono: " << persona.gettelefono();
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
int PerUtil::rellenarVector(Persona vp[], int max, int contador) {
    contador = 0;
    for (int i = 0; i < max; i++) {
        
        string nuevoNombre, nuevoprimerApellido, nuevosegundoApellido, nuevocorreo;
        int nuevotelefono, nuevoDNI, nuevodiaNacimiento, nuevomesNacimiento, nuevoanioNacimiento;
        char nuevaletraDNI;
        
        cout << "Inserte nombre para la " << i + 1 << " persona" << endl;
        cin >> nuevoNombre;
        vp[i].setNombre(nuevoNombre);
        
        cout << "Inserte Primer apellido para " << vp[i].getNombre() << endl;
        cin >> nuevoprimerApellido;
        vp[i].setprimerApellido(nuevoprimerApellido);
        
        cout << "Inserte Segundo apellido para " << vp[i].getNombre() << endl;
        cin >> nuevosegundoApellido;
        vp[i].setsegundoApellido(nuevosegundoApellido);
        
        cout << "Inserte DNI para " << vp[i].getNombre() << endl;
        cin >>nuevoDNI ;
        vp[i].setDNI(nuevoDNI);
        
        cout << "Inserte letra DNI para " << vp[i].getNombre() << endl;
        cin >> nuevaletraDNI;
        vp[i].setletraDNI(nuevaletraDNI);
        
        cout << "Inserte dia nacimiento para " << vp[i].getNombre() << endl;
        cin >> nuevodiaNacimiento;
        vp[i].setdiaNacimiento(nuevodiaNacimiento);
        
        cout << "Inserte mes nacimiento para " << vp[i].getNombre() << endl;
        cin >> nuevomesNacimiento;
        vp[i].setmesNacimiento(nuevomesNacimiento);
        
        cout << "Inserte anio nacimiento para " << vp[i].getNombre() << endl;
        cin >>nuevoanioNacimiento;
         vp[i].setanioNacimiento(nuevoanioNacimiento);
        
        cout << "Inserte correo para " << vp[i].getNombre() << endl;
        cin >> nuevocorreo;
        vp[i].setcorreo(nuevocorreo);
        
        cout << "Inserte telefono para " << vp[i].getNombre() << endl;
        cin >> nuevotelefono;
        vp[i].settelefono(nuevotelefono);
        
        contador = i;
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
void PerUtil::mostrarenPantalla(Persona vp[], const int &max) {
    for (int i = 0; i < max; i++) {
        int tecla;
        cout << endl << "LOS DATOS DE " << vp[i].getNombre() << " SON: " << endl;
        cout << "Se llama: " << vp[i].getNombre() << " " << vp[i].getprimerApellido() << vp[i].getsegundoApellido() << endl;
        cout << "Su DNI es: " << vp[i].getDNI() << endl;
        cout << "Su fecha de nacimiento es: " << vp[i].getdiaNacimiento() << "/" << vp[i].getmesNacimiento() << "/" << vp[i].getanioNacimiento() << endl;
        cout << "Sus datos de contacto son:" << endl;
        cout << "Correo:" << vp[i].getcorreo();
        cout << "Telefono:" << vp[i].gettelefono();
        if (i % 5 == 0)
            cout << "Pulse tecla para continuar" << endl;
        cin>>tecla;
    };
};

Persona PerUtil::crea() {

    Persona personacreada;
    string cad;
    int ced;
    char letranueva;

    cout << "Dale nombre (recuerda minimo 3, maximo 50)" << endl;
    getline(cin>>ws, cad);
    personacreada.setNombre(cad);

    cout << "Dale primer apellido a " << personacreada.getNombre() << " (recuerda minimo 3, maximo 70)" << endl;
    getline(cin>>ws, cad);
    personacreada.setprimerApellido(cad);

    cout << "Dale segundo apellido a " << personacreada.getNombre() << endl;
    getline(cin>>ws, cad);
    personacreada.setsegundoApellido(cad);

    cout << "Dale correo a " << personacreada.getNombre() << endl;
    cin >> cad;
    personacreada.setcorreo(cad);

    cout << "Dale telefono a " << personacreada.getNombre() << endl;
    cin >> ced;
    personacreada.settelefono(ced);
    
    cout << "Dia de nacimiento " << personacreada.getNombre() << endl;
    cin >> ced;
    personacreada.setdiaNacimiento(ced);
    
    
    cout << "Mes de nacimiento " << personacreada.getNombre() << endl;
    cin >> ced;
    personacreada.setmesNacimiento(ced);
    
    cout << "Año de nacimiento " << personacreada.getNombre() << endl;
    cin >> ced;
    personacreada.setanioNacimiento(ced);

    cout << "Dale DNI a " << personacreada.getNombre() << " (recuerda 8 digitos y una letra)" << endl;
    cin >> ced;
    personacreada.setDNI(ced);
    
    cout << "Dale letra DNI a " << personacreada.getNombre() << " (recuerda 8 digitos y una letra)" << endl;
    cin >> letranueva;
    personacreada.setletraDNI(letranueva);
    
    return personacreada;

};

