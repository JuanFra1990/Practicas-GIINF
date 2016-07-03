/* 
 * File:   Persona.h
 * Author: Juan Francisco Abán Fontecha
 *
 * Created on 12 de febrero de 2015, 15:55
 */

#ifndef PERSONA_H
#define	PERSONA_H
#include <string> 

using namespace std;

namespace POO_PERS {

    //Estructura necesaria para las funciones

    struct personas {
        string nombre;
        string apellidos;
        string NIF;
        int edad;
    };
    personas leerpersona(personas &persona);
    personas leerpersona(personas *persona);
    void muestradatos(personas &persona);
    void muestradatos(personas *persona);
    int menu();
    int rellenarVector(personas *vp[],int &max, int &contador);
    void mostrarenPantalla(personas *vp[],const int &max);
    float mediaEdad(POO_PERS::personas *vp[],int &max);
    int buscar(POO_PERS::personas *vp[],int &max);
    int mayorEdad(POO_PERS::personas *vp[],int &max);
    int menorEdad(POO_PERS::personas *vp[],int &max);
    int ordenar(POO_PERS::personas *vp[],int &max);
}


#endif	/* PERSONA_H */
