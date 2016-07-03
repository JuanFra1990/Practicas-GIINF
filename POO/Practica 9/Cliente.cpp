/**
 * @file cliente.cpp (Practica 6)
 * @author Juan Francisco Abán Fontecha
 * @date 24/03/2015
 * @brief Implementacion de la clase Cliente
 */

#include "Cliente.h"
#include <sstream>

/** 
 * @brief Constructor por defecto
 * @return construir un objeto de la clase cliente, si direccionPostal no es string dara error
 */
Cliente::Cliente(): direccionPostal(0) {
}


Cliente::Cliente(string primerApellido,string nombre, string segundoApellido,int telefono, string correo,
            Fecha fechanacimiento, int DNI,   char letraDNI, Fecha *fechaAlta, Fecha *fechaBaja, std::string direccionPostal):
            Persona(primerApellido,nombre,segundoApellido,telefono,correo,
            fechanacimiento,DNI, letraDNI, fechaAlta,fechaBaja), direccionPostal(direccionPostal){};

/** 
 * @brief Constructor por copia
 * @param orig es llamada por referencia a tipo cliente 
 * @pre que direccionPostal sea una cadena (string) y orig sea tipo cliente
 * @return construir un objeto de la clase cliente, si direccionPostal no es string dara error, y si orig no es tipo cliente
 */
Cliente::Cliente(const Cliente& orig):Persona(orig),direccionPostal(orig.direccionPostal) {
}

/** 
 * @brief Cambiar direccion postal
 * @param nuevadireccionpostal un string 
 * @pre que direccionPostal sea una cadena (string)
 * @return cambiar la direccion postal de un cliente, si direccionPostal no es string dara error.
 */
void Cliente::SetDireccionPostal(const std::string nuevadireccionpostal){
    this->direccionPostal=nuevadireccionpostal;
};

/** 
 * @brief Devolver direccion postal
 * @return devuelve direccion postal de un cliente
 */
std::string Cliente::GetDireccionPostal(){
    return this->direccionPostal;
};

/** 
 * @brief Cambiar datos persona del cliente
 * @param NuevaPersona puntero a Persona 
 * @pre que NuevaPersona sea puntero a Persona
 * @return cambiar la informacion personal de un cliente, si NuevaPersona no es puntero a persona dara error.
 */
void Cliente::SetPersona(const Persona *NuevaPersona){
    //this->Persona=NuevaPersona;
};
    
/** 
 * @brief Devolver Persona
 * @return devuelve informacion persona de un cliente
 
Persona Cliente::GetPersona(){
    return this->Persona;
};
*/

/** 
 * @brief Redefinir el operador igual (=)
 * @param c paso por referencia un tipo Cliente 
 * @pre que c sea tipo Cliente
 * @return Iguala dos tipos clientes y copia toda la informacion
 */
Cliente& Cliente::operator=(const Cliente &c){
    if(this!=&c) {
        this->Persona::operator=(c);
        direccionPostal=c.direccionPostal;
    }
    return *this;
};


string Cliente::toCSV(){
 //nombre, apellidos, dni y fecha de nacimiento
    string datos;
    stringstream ss;
    ss << Persona::toCSV() << ";" << direccionPostal << ";";
    getline(ss,datos);
     return datos;
};

bool Cliente::fromCSV(const string &cadena){
    std::stringstream ss;
    string datos;
    ss.str(cadena);
    getline(ss,datos,';');
    ss.ignore(1);
    return true;
}

Cliente::~Cliente() {
}