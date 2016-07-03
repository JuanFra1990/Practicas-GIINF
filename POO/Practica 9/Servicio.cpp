/* 
 * File:   Servicio.cpp
 * Author: usuario
 * 
 * Created on 16 de abril de 2015, 12:30
 */

#include "Servicio.h"

Servicio::Servicio(int pvpUni, std::string nom, float hor, std::string des): 
Productos(pvpUni,nom), horas(hor), descripcion(des){
}

Servicio::Servicio(const Servicio& orig): Productos(orig),horas(orig.horas),descripcion(orig.descripcion) {
}

Servicio::~Servicio() {
}

float Servicio::GetHoras(){
    return this->horas;
};
    
void Servicio::SetHoras(float horasnuevas){
    if (horasnuevas!=this->horas && horasnuevas>0)
        horas=horasnuevas;
};

std::string Servicio::GetDescripcion(){
    return this->descripcion;
};
   
void Servicio::SetDescripcion(std::string nuevadescrip){
    if (this->descripcion!=nuevadescrip)
        this->descripcion=nuevadescrip;
};

float Servicio::GetPvpUnitario() {
    int pvp=this->GetPvpUnitario();
    return this->horas*pvp;
};
