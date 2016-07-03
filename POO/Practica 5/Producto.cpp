/* 
 * File:   Producto.cpp
 * Author: usuario
 * 
 * Created on 14 de marzo de 2015, 13:57
 */

#include "Producto.h"

int NUEVOID=0;

Producto::Producto():idproducto(++NUEVOID),pvpUnitario(0),nombre("abcde") {
}

Producto::Producto(const Producto& orig):idproducto(orig.idproducto),pvpUnitario(orig.pvpUnitario), 
nombre(orig.nombre){
}

Producto::~Producto() {
}

void Producto::SetNombre(string nombre) {
    if (nombre.length()>5)
        this->nombre = nombre;
}

string Producto::GetNombre() const {
    return nombre;
}

void Producto::SetPvpUnitario(float pvpUnitario) {
    if (pvpUnitario>=0)
        this->pvpUnitario = pvpUnitario;
}

float Producto::GetPvpUnitario() const {
    return pvpUnitario;
}

int Producto::GetIdproducto() const {
    return idproducto;
}

