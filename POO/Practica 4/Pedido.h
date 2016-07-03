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
public:
    Pedido();
    Pedido(const Pedido& orig);
    Pedido(int fecha, Estado estado, float gastosdeenvio, float importe, Persona *cliente);
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
};

#endif	/* PEDIDO_H */

