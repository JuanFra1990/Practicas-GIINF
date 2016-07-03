/* 
 * File:   Pedido.cpp
 * Author: usuario
 * 
 * Created on 28 de febrero de 2015, 10:38
 */

#include "Pedido.h"

int NUMPEDIDO=0;

Pedido::Pedido():IDPedido(++NUMPEDIDO),
    fecha(),
    estado(recibido),
    gastosdeenvio(),
    importe(),
    cliente(){
};

Pedido::Pedido(const Pedido& orig):IDPedido(++NUMPEDIDO),
    fecha(orig.fecha),
    estado(orig.estado),
    gastosdeenvio(orig.gastosdeenvio),
    importe(orig.importe),
    cliente(orig.cliente){
}

Pedido::~Pedido() {
}

void Pedido::SetCliente(Persona* cliente) {
    this->cliente = cliente;
}

Persona* Pedido::GetCliente() const {
    return cliente;
}

void Pedido::SetImporte(float importe) {
    if (importe>=0)
        this->importe = importe;
}

float Pedido::GetImporte() const {
    return importe;
}

void Pedido::SetGastosdeenvio(float gastosdeenvio) {
    if (gastosdeenvio>=0)
        this->gastosdeenvio = gastosdeenvio;
}

float Pedido::GetGastosdeenvio() const {
    return gastosdeenvio;
}

void Pedido::SetFecha(Fecha fecha) {
    this->fecha = fecha;
}

Fecha Pedido::GetFecha() const {
    return fecha;
}

void Pedido::SetEstado(Estado estado){
    this->estado=estado;
}

Pedido::Estado Pedido::GetEstado() const {
    return estado;
}


int Pedido::GetIDPedido() const {
    return IDPedido;
}

float Pedido::GetTotal() const{
    float importetotal=importe+gastosdeenvio;
    return importetotal;
}
