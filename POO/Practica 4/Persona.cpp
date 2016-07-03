/* 
 * File:   Persona.cpp
 * Author: usuario
 * 
 * Created on 26 de febrero de 2015, 10:40
 */




#include <iostream>
#include <sstream>
#include "Persona.h"

using namespace std;

int NUMPERSONAS=0;

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

Persona::Persona(const Persona& orig) {
}

Persona::~Persona() {
    delete fechaAlta;
    delete fechaBaja;
    cout << "Se esta borrando la persona con dni: " << this->GetDNI() << this->GetLetraDNI() << endl;
    cout << "y nombre: " << this->GetNombre() << endl;
}

void Persona::SetLetraDNI(char letraDNI) {
    this->letraDNI = letraDNI;
}

char Persona::GetLetraDNI() const {
    return letraDNI;
}

void Persona::SetDNI(int DNI) {
    this->DNI = DNI;
}

int Persona::GetDNI() const {
    return DNI;
}

void Persona::SetFechanacimiento(Fecha fechanacimiento) {
    this->fechanacimiento = fechanacimiento;
}

Fecha Persona::GetFechanacimiento() const {
    return fechanacimiento;
}

void Persona::SetCorreo(string correo) {
    this->correo = correo;
}

string Persona::GetCorreo() const {
    return correo;
}

void Persona::SetTelefono(int telefono) {
    this->telefono = telefono;
}

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

string Persona::toCSV(){
 //nombre, apellidos, dni y fecha de nacimiento
    string datos;
    stringstream ss;
    ss << nombre << ";" << primerApellido << ";" << segundoApellido << ";" << DNI << ";" 
            << fechanacimiento.toCSV();
    getline(ss,datos);
     return datos;
};



