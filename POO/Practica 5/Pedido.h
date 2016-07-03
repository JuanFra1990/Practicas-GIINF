/* 
 * File:   Pedido.h
 * Author: usuario
 *
 * Created on 28 de febrero de 2015, 10:38
 */

#ifndef PEDIDO_H
#define	PEDIDO_H

#include <iostream>
#include "Fecha.h"
#include "Persona.h"
#include "Producto.h"

using namespace std;



class Pedido {
public: 
    enum Estado
    {
    recibido, 
    preparacion, 
    enviado, 
    cerrado
    };    
private:
    static int NumPedido;
    int IDPedido;
    Fecha fecha;
    Estado estado;
    float gastosdeenvio;
    float importe;
    Persona *cliente;
    Producto **productos;
    int tamnproductos;
    int tammaxproductos;
public:
    Pedido();
    Pedido(const Pedido& orig);
    Pedido(int fecha, Estado estado, float gastosdeenvio, float importe, Persona *cliente, 
    Producto **productos, int tamnproductos, int tammaxproductos);
    virtual ~Pedido();
    void SetCliente(Persona* cliente);
    Persona* GetCliente() const;
    void SetImporte(float importe);
    float GetImporte() const;
    void SetGastosdeenvio(float gastosdeenvio);
    float GetGastosdeenvio() const;
    void SetFecha(Fecha fecha);
    Fecha GetFecha() const;
    int GetIDPedido() const;
    Estado GetEstado() const;
    void SetEstado(Estado estado1);
    float GetTotal() const;
    
    Producto GetProductos();
    Producto SetProductos(Producto **nuevosproductos);
    int GetTamNProductos();
    int SetTamNProductos(int nuevotamnproductos);
    int GetTamMaxProductos();
    int SetTamMaxProductos(int nuevotammaxproductos);
    
    void anadirproducto(int numproductos);
};

#endif	/* PEDIDO_H */

