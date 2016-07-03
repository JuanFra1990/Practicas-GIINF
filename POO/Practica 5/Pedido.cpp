/* 
 * 
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
    cliente(), 
    productos(0),
    tamnproductos(0),
    tammaxproductos(0){
};

Pedido(int fecha, Estado estado, float gastosdeenvio, float importe, Persona *cliente, 
    Producto **productos, int tamnproductos, int tammaxproductos):IDPedido(++NUMPEDIDO),
    fecha(fecha),
    estado(estado),
    gastosdeenvio(gastosdeenvio),
    importe(importe),
    cliente(cliente), 
    productos(productos),
    tamnproductos(tamnproductos),
    tammaxproductos(tammaxproductos){
};
    
    
Pedido::Pedido(const Pedido& orig):IDPedido(++NUMPEDIDO),
    fecha(orig.fecha),
    estado(orig.estado),
    gastosdeenvio(orig.gastosdeenvio),
    importe(orig.importe),
    cliente(orig.cliente),
    productos(orig.productos),
    tamnproductos(orig.tamnproductos),
    tammaxproductos(orig.tammaxproductos){
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

Producto Pedido::GetProductos(){
    return productos;
};

Producto Pedido::SetProductos(Producto **nuevosproductos){
    this->productos=nuevosproductos;
};

int Pedido::GetTamNProductos(){
    return tamnproductos;
};
    
int Pedido::SetTamNProductos(int nuevotamnproductos){
    this->tamnproductos=nuevotamnproductos;
};
    
int Pedido::GetTamMaxProductos(){
    return tammaxproductos;
};
    
int Pedido::SetTamMaxProductos(int nuevotammaxproductos) {
    this->tammaxproductos=nuevotammaxproductos;
};

void Pedido::anadirproducto(int numproductos) {

};