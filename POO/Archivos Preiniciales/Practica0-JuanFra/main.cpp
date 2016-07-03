/* 
 * File:   main.cpp
 * Author: Juan Fra
 * Practica: 0
 *
 * Creado a 5 de febrero de 2015, 16:08
 *  */

/*Ejemplos Comentarios no usados en Doxigen*/
//

/// Ejemplo Comentarios usados en Doxigen
/**
 * @file main.cpp
 * @author Juan Francisco Abán Fontecha
 * @date 05/02/2015
 * @brief Primera practica realizada en POO
 * @desc
 */

#include <cstdlib>
#include <iostream>

using namespace std;

///Almacena edad del usuario
int edad;


/**
 * @brief Funcion Principal
 * @param argc Numero de Argumentos pasados por línea de ordenes
 * @param argv Vector con dichos parametros
 * @pre "Lo Que debe de cumplir antes, de 0 a mas" argc no puede ser negativo
 * @post "Lo Que Cumple, de 1 a mas" Devuelve 0 si todo va bien; otro valor en otro caso
 * @return
 */
int main(int argc, char** argv) {

    edad=25;
    //Variable para el año en el que estamos
    int anioactual=2015;
    
    //Imprimo el resultado
    cout << "Usted nació en " << anioactual-edad << endl;
    
//Explicación Punteros
    
    //Se usa para gestionar datos que estan en memoria dinamica
    //Los punteros son variables que guardan 
 
    int *pEdad=0;
    
    //float es facilmente transformable desde un string, por ello estaria bien
    float patata=87;
    
    //un int no puede convertirse en string
    //string molecula=96;
    
    //Estaria mal porque no puede apuntar a un dato.
    //pEdad=67;
    
    //Se puede asignar de 3 formas
    
        //Asignandole direccion(&) de una variable del mismo tipo que el puntero, definida anteriormente.
        pEdad=&edad;
    
        //Definir Puntero y pedir que nos reserve memoria al SO, mediante new <tipo>, y nos devuelve la primera 
            // direccion de memoria dinamica reservada.
        int *pSala=0;
        pSala=new int;
            //Despues debemos devolver la memoria reservada con new, mediante un delete
        delete pSala;
     
        
        // Definimos Puntero y le damos el mismo valor que un puntero, para que eso apunte a la misma dirección
        int *pContador=0;
        pContador=pEdad;
  
   //Si seguimos usando una posicion de memoria que no nos pertenece, tras hacerle un delete,
   //se produce una violacion de segmento
           pSala=0;
           
           
           
    // Punteros se complica al usar vectores
           
           float alturas[10];
           
        //Definir un vector mediante punteros, guarda una direccion de memoria
           //estatica que contiene la primera direccion reservada en memoria dinamica
           float *alturasDin=0;
           alturas=new float[10];
           
           delete [] alturasDin;
        // Vector de punteros a floats en memoria estatica 
           float *alturasDam[30];
           
           
        // Vector de punteros a float en memoria dinamica (Este es la mejor Opcion, pero la mas dificil)
           float **alturasDem=0;
           alturasDem=new float*[1000];
           
           alturasDem[5]=new float;
           *alturasDem[5]=67.4;
           
           delete alturasDem[5];
           delete [] alturasDem; 
           
           
    return 0;
}

