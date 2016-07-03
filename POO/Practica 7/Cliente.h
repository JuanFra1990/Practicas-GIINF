/* 
 * File:   Cliente.h
 * Author: usuario
 *
 * Created on 21 de marzo de 2015, 12:02
 */

#ifndef CLIENTE_H
#define	CLIENTE_H

#include "Persona.h"
#include <string>

using namespace std;

class Cliente: public Persona {
private:
    std::string direccionPostal;
public:
    Cliente();
    Cliente(const Cliente& orig);
    void SetDireccionPostal(const std::string nuevadireccionpostal);
    std::string GetDireccionPostal();
    void SetPersona(const Persona *NuevaPersona);
    Persona GetPersona();
    virtual ~Cliente();
    Cliente& operator=(const Cliente &c);

};

#endif	/* CLIENTE_H */

