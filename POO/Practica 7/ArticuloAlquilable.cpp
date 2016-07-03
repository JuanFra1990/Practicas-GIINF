/* 
 * File:   ArticuloAlquilable.cpp
 * Author: usuario
 * 
 * Created on 16 de abril de 2015, 11:54
 */

#include "ArticuloAlquilable.h"

ArticuloAlquilable::ArticuloAlquilable(int pvpUni, std::string nom,int pe, int uniEnva,
        int hor, std::string des): Articulo(pvpUni,nom,pe,uniEnva), Servicio(pvpUni,nom,hor,des){
}

ArticuloAlquilable::ArticuloAlquilable(const ArticuloAlquilable& orig):Articulo(orig), Servicio(orig) {
}

ArticuloAlquilable::~ArticuloAlquilable() {
}

float ArticuloAlquilable::GetPvpUnitario(){
    float precio=this->GetPvpUnitario();
    float numhoras=this->GetHoras();
    return precio*numhoras;
};