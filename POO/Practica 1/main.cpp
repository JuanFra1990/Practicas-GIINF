/**
 * @file main.cpp (Practica 0)
 * @author Juan Francisco Abán Fontecha
 * @date 07/02/2015
 * @brief Distintas Funciones para aprender uso de C++ Orientado Objetos (Practica 0)
 */
#include <cstdlib>
#include <iostream>
#include "persona.h"


using namespace std;

int main() {
    // Ejercicio 5 
 /*   
    POO_PERS::personas persona;
    POO_PERS::personas persona2;
    
    //Llamada para la funcion sobrecargada leerpersona con paso por Referencia
     persona=POO_PERS::leerpersona(persona);
    //Llamada a la funcion sobrecargada  muestradatos con paso por Referencia
    POO_PERS::muestradatos(persona);
    
    //Llamada para la funcion sobrecargada leerpersona con paso por punteros
    persona2=POO_PERS::leerpersona(&persona2);
    //Llamada a la funcion sobrecargada  muestradatos con paso por Referencia
    POO_PERS::muestradatos(&persona2);
    
 */
    
    //Practica 1
    int numpersonas=10000;
    POO_PERS::personas *v;
    bool salir=false;
    //do {
    int opcion=POO_PERS::menu();
    switch(opcion){ 
        case 1: 
        {
                cout << "Que numero de personas desea meter en el programa"<<endl;
                cin >> numpersonas;
    
                //usamos memoria dinamica para asignar valor al numero de personas
              v=new POO_PERS::personas[numpersonas];
                 
                 //Llamada a la funcion rellenarVector
                int contador,media;
                contador=POO_PERS::rellenarVector(&v,numpersonas,contador);
                opcion=1;
            
        }
        break;
        case 2: 
        {
                //Llamada a la funcion mostrarPantalla
                POO_PERS::mostrarenPantalla(&v,numpersonas);
                opcion=2;
        
        }
        break;
        case 3: 
        {
            int media;
            //Llamada a la funcion mediaEdad
                media=POO_PERS::mediaEdad(&v,numpersonas);
                opcion=3;
        }
        break;
        case 4:
        {
            //LLamada a funcion buscar, si devuelve -1 la persona no se encuentra en la lista
            int posicion;
            posicion=POO_PERS::buscar(&v,numpersonas);
            if (posicion==-1){
                cout << "No existe ninguna persona con los apellidos que busca"<< endl;
                }else {
                    cout << "La posicion que ocupa la persona con ese apellido es: " << posicion;
                };
                opcion=4;
        }
            break;
        case 5: 
        {
        
            int personamayoredad=0;
                //Llamada a la funcion mediaEdad
                personamayoredad=POO_PERS::mayorEdad(&v,numpersonas);
                opcion=5;
        }
            break;
        case 6: 
        {
            int personamenoredad=0;
                //Llamada a la funcion mediaEdad
                personamenoredad=POO_PERS::menorEdad(&v,numpersonas);
                opcion=6;
        }
            break;
        case 7:
        {
            POO_PERS::ordenar(&v,numpersonas);
            opcion=7;
        }
            break;
        
        case 8:
        {
            salir=true;
            opcion=8;
            delete [] v;
        }
            break;
        default:
            cout << "Opcion no existente "<<endl;
            break;
    };
    //}while(!salir);
    return 0;
}

