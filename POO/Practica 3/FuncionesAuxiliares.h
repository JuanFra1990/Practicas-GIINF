/* 
 * File:   FuncionesAuxiliares.h
 * Author: usuario
 *
 * Created on 26 de febrero de 2015, 10:15
 */

#ifndef PERSONAUTIL_H
#define	PERSONAUTIL_H
#include "Persona.h"
#include "Fecha.h"

namespace FuncionesUtiles {
    void rellenarvector(Persona personas[],int tampersonas);
    void muestradatos(Persona *persona);
    void muestradatosvector(Persona *persona[],int tampersonas);
    void muestrafecha(Fecha &fecha);
    int calcularedad(Persona* persona);
    int personaMasEdad(Persona *personas[],const int &tampersonas,int &personaReciente);
}

#endif	/* PERSONAUTIL_H */



