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
    Empleado(const Empleado& orig);
    void SetSalario(const int nuevosalario);
    int GetSalario();
    void SetPersona(const Persona *NuevaPersona);
    Persona GetPersona();
    Empleado& operator=(const Empleado& e);
    virtual ~Empleado();


};

#endif	/* EMPLEADO_H */

