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

void UtilesItemCSV::AlmacenaObjetosCSV(itemCSV **v, int numObjs, std::string nomArchivo){
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
    
int UtilesItemCSV::RecuperaObjetosCSV(itemCSV **v, int tamV, std::string nomArchivo){
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


void UtilesItemCSV::AlmacenaObjetosCSV2(itemCSV **v, int numObjs, std::string nomArchivo){
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