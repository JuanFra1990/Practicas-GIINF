/* 
 * File:   Pedido.h
 * Author: usuario
 *
 * Created on 21 de marzo de 2015, 13:01
 */


#ifndef PEDIDO_H
#define	PEDIDO_H

#include "Fecha.h"
#include "Pedido.h"
#include "Cliente.h"
#include "Empleado.h"
#include "Concepto.h"

#include <vector>

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
    Cliente *cliente;
    std::vector<Concepto*> productos;
    Empleado *Atendidopor;
public:
    Pedido();
    Pedido(const Pedido& orig);
    Pedido(Fecha fecha, Estado estado, float gastosdeenvio, float importe, Cliente *cliente, 
    std::vector<Concepto*> listproductos, Empleado *trabajador);
    virtual ~Pedido();
    void SetCliente(Cliente* cliente);
    Cliente* GetCliente() const;
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
    
    std::vector<Concepto*> GetProductos();
    //Concepto SetProductos(Concepto **nuevosproductos);
    /*int GetTamNProductos();
    int SetTamNProductos(int nuevotamnproductos);
    int GetTamMaxProductos();
    int SetTamMaxProductos(int nuevotammaxproductos);*/
    
    Concepto anadirProducto(std::vector<Concepto*> nuevosproductos);
    int RefProdId(int IDaBuscar);
    
    void BorrarProducto(int referencia);
    void BorrarTodosProductos();
    
    float importeTotal();
    void SetAtendidopor(Empleado* Atendidopor);
    Empleado* GetAtendidopor() const;
};

#endif	/* PEDIDO_H */
