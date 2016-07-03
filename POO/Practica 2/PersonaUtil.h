/* 
 * File:   PersonaUtil.h
 * Author: admin
 *
 * Created on 19 de febrero de 2015, 15:57
 */


#ifndef PERSONAUTIL_H
#define	PERSONAUTIL_H
#include "persona.h"

namespace PerUtil {
    
    Persona leerpersona(Persona persona);
    void muestradatos(Persona persona);
    int rellenarVector(Persona vp[],int max, int contador);
    void mostrarenPantalla(Persona vp[],const int &max);
    Persona crea();
}

#endif	/* PERSONAUTIL_H */

