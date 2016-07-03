/* 
 * File:   Empleado.h
 * Author: usuario
 *
 * Created on 21 de marzo de 2015, 12:30
 */

#include "Persona.h"
#ifndef EMPLEADO_H
#define	EMPLEADO_H

class Empleado:public Persona {
private:
    int salario;
public:
    Empleado();
    Empleado(string primerApellido,string nombre, string segundoApellido,int telefono, string correo,
            Fecha fechanacimiento, int DNI,   char letraDNI, Fecha *fechaAlta, Fecha *fechaBaja, int salario);
    Empleado(const Empleado& orig);
    void SetSalario(const int nuevosalario);
    int GetSalario();
    void SetPersona(const Persona *NuevaPersona);
    Persona* GetPersona();
    Empleado& operator=(const Empleado& e);
    virtual string toCSV();
    virtual bool fromCSV(const string &cadena);
    virtual ~Empleado();


};

#endif	/* EMPLEADO_H */
