/* 
 * File:   Articulo.cpp
 * Author: usuario
 * 
 * Created on 16 de abril de 2015, 12:03
 */
#include "Productos.h"

#include "Articulo.h"

Articulo::Articulo(float pvpUni, std::string nom,int pe, int uniEnva):
Productos(pvpUni,nom),
        peso(pe),
unidadesEnvase(uniEnva){
}

Articulo::Articulo(const Articulo& orig): Productos(orig),peso(orig.peso),
unidadesEnvase(orig.unidadesEnvase) {
}

Articulo::~Articulo() {
}

void Articulo::SetUnidadesEnvase(int unidadesEnvase) {
    this->unidadesEnvase = unidadesEnvase;
}

int Articulo::GetUnidadesEnvase() const {
    return unidadesEnvase;
}

void Articulo::SetPeso(int peso) {
    this->peso = peso;
}

int Articulo::GetPeso() const {
    return peso;
}

 float Articulo::GetPvpUnitario(){
    float pvp=this->Productos::GetPvpUnitario();
    if(this->peso!=0)
        return pvp ;
    return this->unidadesEnvase*pvp;
};
