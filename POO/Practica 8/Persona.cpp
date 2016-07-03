/**
 * @file Persona.cpp (Practica 6)
 * @author Juan Francisco Abán Fontecha
 * @date 07/02/2015
 * @brief Implementacion de la clase Persona
 */

#include <iostream>
#include <sstream>
#include "Persona.h"

using namespace std;

int NUMPERSONAS=0;

/** 
 * @brief Constructor Por defecto de clase Persona
 * @post nos devuelve una variable de clase persona y nos muestra por pantalla con que ID se crea
 */
Persona::Persona():ID(++NUMPERSONAS),primerApellido(),
        nombre(),
        segundoApellido(),
        telefono(),
        correo(),
        fechanacimiento(),
        DNI(), letraDNI(),
        fechaAlta( new Fecha),fechaBaja( new Fecha )
{
        
    cout << "Objeto Creado con id " << ID << endl;

}


Persona::Persona(string primerApellido, string nombre, string segundoApellido, 
        int telefono, string correo, Fecha fechanacimiento, int DNI, char letraDNI, 
        Fecha* fechaAlta, Fecha* fechaBaja):
primerApellido(primerApellido),nombre(nombre),segundoApellido(segundoApellido),
        telefono(telefono),correo(correo),fechanacimiento(fechanacimiento),DNI(DNI),
        letraDNI(letraDNI),fechaAlta(fechaAlta),fechaBaja(fechaBaja){};
/** 
 * @brief Constructor Por copia de clase Persona
 * @post nos devuelve una variable de clase persona copiando los datos de la Persona que le pasamos excepto el ID
 */
Persona::Persona(const Persona& orig):ID(++NUMPERSONAS),primerApellido(orig.primerApellido),
        nombre(orig.nombre),
        segundoApellido(orig.segundoApellido),
        telefono(orig.telefono),
        correo(orig.correo),
        fechanacimiento(orig.fechanacimiento),
        DNI(orig.DNI), letraDNI(orig.letraDNI),
        fechaAlta(orig.fechaAlta),fechaBaja(orig.fechaBaja) {
}



/** 
 * @brief Destructor de clase Persona
 * @post borra los espacios reservados para las fechas y nos indica los datos de la persona que estamos borrando b
 */
Persona::~Persona() {
    delete fechaAlta;
    delete fechaBaja;
    cout << "Se esta borrando la persona con dni: " << this->GetDNI() << this->GetLetraDNI() << endl;
    cout << "y nombre: " << this->GetNombre() << endl;
}

/** 
 * @brief Modifica la Letra del DNI
 * @param letraDNI un char
 * @return si letraDNI no es char dara error
 */
void Persona::SetLetraDNI(char letraDNI) {
    this->letraDNI = letraDNI;
}

/**
 * @brief Devuelve la letra del DNI
 * @post devuelve la letra del DNI
 */

char Persona::GetLetraDNI() const {
    return letraDNI;
}
/** 
 * @brief Modifica el DNI
 * @param DNI un int
 * @return si DNI no es int dara error
 */
void Persona::SetDNI(int DNI) {
    this->DNI = DNI;
}
/**
 * @brief Devuelve el DNI
 * @post devuelve el DNI
 */
int Persona::GetDNI() const {
    return DNI;
}
/** 
 * @brief Modifica la fecha de Nacimiento
 * @param fechanacimiento es clase Fecha
 * @return si fechanacimiento no es Fecha dara error
 */
void Persona::SetFechanacimiento(Fecha fechanacimiento) {
    this->fechanacimiento = fechanacimiento;
}
/** 
 * @brief Devuelve fecha de nacimiento
 * @post Devuelve fechanacimiento para posteriores operaciones
 */
Fecha Persona::GetFechanacimiento() const {
    return fechanacimiento;
}
/** 
 * @brief Modifica correo electronico 
 * @param correo un string
 * @return si correo no es string dara error
 */
void Persona::SetCorreo(string correo) {
    this->correo = correo;
}
/** 
 * @brief Devuelve correo
 * @post Devuelve correo para posteriores operaciones
 */
string Persona::GetCorreo() const {
    return correo;
}
/** 
 * @brief Modifica el telefono
 * @param telefono un int
 * @return si telefono no es int dara error
 */
void Persona::SetTelefono(int telefono) {
    this->telefono = telefono;
}
/** 
 * @brief Devuelve telefono
 * @post Devuelve telefono para posteriores operaciones
 */
int Persona::GetTelefono() const {
    return telefono;
}

void Persona::SetSegundoApellido(string segundoApellido) {
    this->segundoApellido = segundoApellido;
}

string Persona::GetSegundoApellido() const {
    return segundoApellido;
}

void Persona::SetNombre(string nombre) {
    this->nombre = nombre;
}

string Persona::GetNombre() const {
    return nombre;
}

void Persona::SetPrimerApellido(string primerApellido) {
    this->primerApellido = primerApellido;
}

string Persona::GetPrimerApellido() const {
    return primerApellido;
}

int Persona::GetID() const {
    return ID;
}

void Persona::SetFechaBaja(Fecha *fechaBaja) {
    *this->fechaBaja = *fechaBaja;
}

Fecha* Persona::GetFechaBaja() const {
    return fechaBaja;
}

void Persona::SetFechaAlta(Fecha *fechaAlta) {
    *this->fechaAlta = *fechaAlta;
}

Fecha* Persona::GetFechaAlta() const {
    return fechaAlta;
}

/** 
 * @brief Esta funcion permite pasar informacion de las personas a archivo CSV
* @post nos devuelve un archivo CSV con la informacion de las personas
 */

string Persona::toCSV(){
 //nombre, apellidos, dni y fecha de nacimiento
    string datos;
    stringstream ss;
    ss << nombre << ";" << primerApellido << ";" << segundoApellido << ";" << DNI << ";" 
            << fechanacimiento.toCSV();
    getline(ss,datos);
     return datos;
};

/** 
 * @brief Esta funcion permite pasar informacion de un archivo CSV a una variable clase Persona
 * @param cadena string cuyo valor es el nombre del archivo CSV
* @post nos devuelve una variable Persona con la informacion que hay almacenada en un archivo
 */

bool Persona::fromCSV(string cadena){
    std::stringstream ss;
    string datos;
    ss.str(cadena);
    getline(ss,datos,';');
    ss.ignore(1);
    return true;
}



/** 
 * @brief Redefinir el operador igual (=)
 * @param p paso por referencia un tipo Persona
 * @pre que p sea tipo Persona
 * @return Iguala dos tipos Persona y copia toda la informacion
 */
Persona& Persona::operator=(const Persona &p){
    if(this!=&p) {
            primerApellido=p.primerApellido;
            nombre=p.nombre;
            segundoApellido=p.segundoApellido;
            telefono=p.telefono;
            correo=p.correo;
            fechanacimiento=p.fechanacimiento;
            DNI=p.DNI;
            letraDNI=p.letraDNI;
            fechaAlta=p.fechaAlta;
            fechaBaja=p.fechaBaja;
    }
    return *this;
};