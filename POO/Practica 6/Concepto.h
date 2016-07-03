/* 
 * File:   Concepto.h
 * Author: usuario
 *
 * Created on 21 de marzo de 2015, 12:41
 */



#ifndef CONCEPTO_H
#define	CONCEPTO_H

#include "Productos.h"

class Concepto {
private:
    Productos *producto;
    int cantidad;
    int descuento;
public:
    Concepto(Productos *product,int cant,int desc);
    Concepto(const Concepto &orig);
    void SetProducto(const Productos *nuevoproducto);
    Productos GetProducto()const;
    void SetCantidad(const int nuevacantidad);
    int GetCantidad() const;
    void SetDescuento(const int nuevodescuento);
    int GetDescuento() const;
    int GetCoste();
    virtual ~Concepto();


};

#endif	/* CONCEPTO_H */

