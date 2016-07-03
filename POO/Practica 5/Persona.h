/* 
 * File:   Persona.h
 * Author: usuario
 *
 * Created on 26 de febrero de 2015, 10:40
 */
#include <string>
#include "Fecha.h"

#ifndef PERSONA_H
#define	PERSONA_H

using namespace std;

class Persona {
private:
    static int NumPersonas;
    int ID;
    string primerApellido;
    string nombre;
    string segundoApellido;
    int telefono;
    string correo;
    Fecha fechanacimiento;
    int DNI;
    char letraDNI;
    Fecha *fechaAlta;
    Fecha *fechaBaja;
public:
    Persona();
    Persona(const Persona& orig);
    virtual ~Persona();
    void SetLetraDNI(char letraDNI);
    char GetLetraDNI() const;
    void SetDNI(int DNI);
    int GetDNI() const;
    void SetFechanacimiento(Fecha fechanacimiento);
    Fecha GetFechanacimiento() const;
    void SetCorreo(string correo);
    string GetCorreo() const;
    void SetTelefono(int telefono);
    int GetTelefono() const;
    void SetSegundoApellido(string segundoApellido);
    string GetSegundoApellido() const;
    void SetNombre(string nombre);
    string GetNombre() const;
    void SetPrimerApellido(string primerApellido);
    string GetPrimerApellido() const;
    int GetID() const;
    void SetFechaBaja(Fecha *fechaBaja);
    Fecha* GetFechaBaja() const;
    void SetFechaAlta(Fecha *fechaAlta);
    Fecha* GetFechaAlta() const;
    string toCSV();

};

#endif	/* PERSONA_H */



