/* 
 * File:   UtilesItemCSV.cpp
 * Author: admin
 * 
 * Created on 23 de abril de 2015, 16:18
 */

#include "UtilesItemCSV.h"
#include "Persona.h"
#include "Cliente.h"
#include "Empleado.h"
#include <string>
#include <sstream>
#include <fstream>
#include <typeinfo>

void UtilesItemCSV::AlmacenaObjetosCSV(std::vector<itemCSV*> v, int numObjs, std::string nomArchivo){
   int contador=0;
   std::ofstream fo;
    
    fo.open(nomArchivo.c_str());
    if( fo.good() ) {
        for( int i=0; i<numObjs; ++i ) {
            fo << v[i]->toCSV()<<std::endl;
        }
        fo.close();
    } 
};
    
int UtilesItemCSV::RecuperaObjetosCSV(std::vector<itemCSV*> v, int tamV, std::string nomArchivo){
    int contador=0;
    std::ifstream fi;
    std::string linea;
    fi.open(nomArchivo.c_str());
    if( fi.good() ) {
        while (!fi.eof()) {
            getline(fi,linea);
            v[contador++]->fromCSV(linea);
        }
        fi.close();
    } 
    return contador;
};


void UtilesItemCSV::AlmacenaObjetosCSV2(std::vector<itemCSV*> v, int numObjs, std::string nomArchivo){
   int contador=0;
    std::ofstream fo;
    fo.open(nomArchivo.c_str());
    if( fo.good() ) {
        for( int i=0; i<numObjs; ++i ) {
            if(typeid(*(v[i]))==typeid(Persona)){
                fo << "Persona:" << ";";
                fo << v[i]->toCSV()<<std::endl;
            }
            if(typeid(*(v[i]))==typeid(Cliente)){
                fo << "Cliente:" << ";";
                fo << v[i]->toCSV()<<std::endl;
            }
            if(typeid(*(v[i]))==typeid(Empleado)){
                fo << "Empleado:" << ";";
                fo << v[i]->toCSV()<<std::endl;
            }
        }
        fo.close();
    } 
};

//Espacio de Nombre Generalizacion. Cuestiones:
/*¿Podría utilizarse para cualquier tipo de dato? ¿por qué?
 
 * No podria usarse para cualquier tipo de dato que no tenga definidos los operadores
 * mayor que(>) y operador igual(=), ya que los usamos en dicha funcion y si este dato
 * no los tuviera definidos no podriamos usarlos.
 * 
 *Daria error en la implementacion del main si definimos un tipo de los que hemos dicho.
 
 */

template <typename T>
    T Generalizacion::mayorque(const std::vector<T> &v){
        T mayor=v[0];
        for (int i=1;i<v.size();i++){
            if(v[i]>mayor){
                mayor=v[i];
            };
        }
        return mayor;
    };