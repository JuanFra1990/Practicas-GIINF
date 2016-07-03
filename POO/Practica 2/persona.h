/* 
 * File:   Persona.h
 * Author: usuario
 *
 * Created on 7 de febrero de 2015, 14:53
 */

#include <string>
#ifndef PERSONA_H
#define	PERSONA_H


using namespace std; 

class Persona {
private:
    int ID;
    string primerApellido;
    string nombre;
    string segundoApellido;
    int telefono;
    string correo;
    int diaNacimiento;
    int mesNacimiento;
    int anioNacimiento;
    int DNI;
    char letraDNI;
public:
    Persona();
    Persona(const Persona& orig);
    string getprimerApellido() const;
    string setprimerApellido (string nuevoprimerApellido);
    string getNombre() const;
    string setNombre (string nuevoNombre);
    string getsegundoApellido() const;
    string setsegundoApellido (string nuevosegundoApellido);
    int gettelefono()const;
    int settelefono (int nuevotelefono);
    string getcorreo() const;
    string setcorreo (string nuevocorreo);
    int getdiaNacimiento() const;
    int setdiaNacimiento (int nuevodiaNacimiento);
    int getmesNacimiento() const;
    int setmesNacimiento (int nuevomesNacimiento);
    int getanioNacimiento() const;
    int setanioNacimiento (int nuevoanioNacimiento);
    int getDNI() const;
    int setDNI (int nuevoDNI);
    char getletraDNI() const;
    char setletraDNI (char nuevoletraDNI);
    bool compara (Persona otro);
    int calcularEdad (const int &anioactual) const;
    int calcularEdadMejora () ;
    virtual ~Persona();
};

#endif	/* PERSONA_H */
