/**
 * @file Empleado.cpp (Practica 6)
 * @author Juan Francisco Abán Fontecha
 * @date 24/03/2015
 * @brief Especificacion de la Clase Empleado
 */

#include "Empleado.h"
/** 
 * @brief Constructor por defecto
 * @return construir un objeto de la clase Empleado
 */
Empleado::Empleado():Persona(),salario(0) {
}

/** 
 * @brief Constructor por copia
 * @param orig es llamada por referencia a tipo Empleado
 * @pre que orig sea de la clase Empleado
 * @return construir un objeto de la clase Empleado
 */
Empleado::Empleado(const Empleado& orig):Persona(orig),salario(orig.salario) {
}

/** 
 * @brief Cambiar Salario
 * @param nuevosalario un int 
 * @pre que nuevo salario sea un numero entero (int)
 * @return cambiar el salario de un empleado, si nuevosalario no es int dara error.
 */
void Empleado::SetSalario(const int nuevosalario){
    if (nuevosalario>600)
        this->salario=nuevosalario;
};

/** 
 * @brief Devolver salario de un Empleado
 * @return Devolver salario de un Empleado
 */
int Empleado::GetSalario(){
    return this->salario;
};

/** 
 * @brief Cambiar datos persona del empleado
 * @param NuevaPersona puntero a Persona 
 * @pre que NuevaPersona sea puntero a Persona
 * @return cambiar la informacion personal de un empleado, si NuevaPersona no es puntero a persona dara error.
 */
void Empleado::SetPersona(const Persona *NuevaPersona){
    this->SetPersona(NuevaPersona);
};
    
/** 
 * @brief Devolver Persona
 * @return devuelve informacion persona de un empleado
 */
Persona Empleado::GetPersona(){
    return this->GetPersona();
};

/** 
 * @brief Redefinir el operador igual (=)
 * @param c paso por referencia un tipo Empleado 
 * @pre que e sea tipo Empleado
 * @return Iguala dos tipos empleado y copia toda la informacion
 */
Empleado& Empleado::operator=(const Empleado &e){
    /*if(this!=e){*/
        this->Persona::operator=(e);
        salario=e.salario;
    /*}*/
};

Empleado::~Empleado() {
}

