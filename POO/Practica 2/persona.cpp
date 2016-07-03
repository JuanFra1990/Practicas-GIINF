/* 
 * File:   Persona.cpp
 * Author: Juan Francisco Abán Fontecha
 * 
 * Created on 7 de febrero de 2015, 14:53
 */


#include <stdio.h>
#include <time.h>
#include <iostream>
#include "persona.h"


using namespace std;


int id=0;

Persona::Persona():ID(++id),primerApellido(),
        nombre(),
        segundoApellido(),
        telefono(),
        correo(),
        diaNacimiento(),
        mesNacimiento(),
        anioNacimiento(),
        DNI(), letraDNI(){
        
    cout << "Objeto Creado con id " << ID << endl;

}

Persona::Persona(const Persona& orig):nombre(orig.nombre),
        segundoApellido(orig.segundoApellido),
        telefono(orig.telefono),
        correo(orig.correo),
        diaNacimiento(orig.diaNacimiento),
        mesNacimiento(orig.mesNacimiento),
        anioNacimiento(orig.anioNacimiento),
        DNI(orig.DNI), letraDNI(orig.letraDNI){}



string Persona::getprimerApellido() const{
        return primerApellido;
    };
    
string Persona::setprimerApellido (string nuevoprimerApellido) {
    if (nuevoprimerApellido.length()<0 || nuevoprimerApellido.length()>40)
        return "Error";
    return primerApellido=nuevoprimerApellido;
    };
    
string Persona::getNombre() const{
        return nombre;
    };
    
string Persona::setNombre (string nuevoNombre) {
    if (nuevoNombre.length()<0 || nuevoNombre.length()>30)
        return "Error";    
    return nombre=nuevoNombre;
};

string Persona::getsegundoApellido() const{
        return segundoApellido;
};

string Persona::setsegundoApellido (string nuevosegundoApellido) {
    return segundoApellido=nuevosegundoApellido;
    }
    
int Persona::gettelefono()const{
        return telefono;
    }
    
int Persona::settelefono (int nuevotelefono) {
        return telefono=nuevotelefono;
    }
    
string Persona::getcorreo() const{
        return correo;
}
    
string Persona::setcorreo (string nuevocorreo) {
        return correo=nuevocorreo;
    }

int Persona::getdiaNacimiento() const{
        return diaNacimiento;
}
    
int Persona::setdiaNacimiento (int nuevodiaNacimiento) {
    if (nuevodiaNacimiento>0 && nuevodiaNacimiento<32 ) 
        return diaNacimiento=nuevodiaNacimiento;
     return -1;
    }
    
int Persona::getmesNacimiento() const{
        return mesNacimiento;
    }
    
int Persona::setmesNacimiento (int nuevomesNacimiento) {
    if (nuevomesNacimiento>0 && nuevomesNacimiento<13 ) 
        return mesNacimiento=nuevomesNacimiento;
    }
    
int Persona::getanioNacimiento() const{
        return anioNacimiento;
    }

int Persona::setanioNacimiento (int nuevoanioNacimiento) {
    if (nuevoanioNacimiento>0000 && nuevoanioNacimiento<9999 ) 
        return anioNacimiento=nuevoanioNacimiento;
    }
    
int Persona::getDNI() const{
        return DNI;
    }
    
int Persona::setDNI (int nuevoDNI) {
        return DNI=nuevoDNI;
    }
    
char Persona::getletraDNI() const{
        return letraDNI;
    }
    
char Persona::setletraDNI (char nuevoletraDNI) {
        return letraDNI=nuevoletraDNI;
    }

bool Persona::compara(Persona otro){
        if (otro.DNI==Persona::DNI)
            return true;
        return false;
    };
    
   
int Persona::calcularEdad (const int &anioactual) const {
        int edad=anioactual-anioNacimiento;
        return edad;
    };
   
int Persona::calcularEdadMejora () {
        time_t tiempo = time(0);
        struct tm *tlocal = localtime(&tiempo);
        int actual = tlocal->tm_year + 1900;
        int edad=actual-anioNacimiento;
        return edad;
    };

Persona::~Persona() {
}

