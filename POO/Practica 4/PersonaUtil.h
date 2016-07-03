/* 
 * File:   PersonaUtil.h
 * Author: usuario
 *
 * Created on 28 de febrero de 2015, 10:19
 */

#ifndef PERSONAUTIL_H
#define	PERSONAUTIL_H
#include <iostream>
#include "Persona.h"
#include "Pedido.h"

using namespace std;

namespace PersonaUtil {
    void almacenaEnCSV(Persona *v[], int tamv, string nombreFlujo);
    void rellenarvector(Persona personas[], int tampersonas);
    void anadirpedido(Pedido *pedidos, const int numerodepedidos);
    void borrarpedido(Pedido *pedidos,const int numerodepedidos, const int idpedido);
};

#endif	/* PERSONAUTIL_H */

