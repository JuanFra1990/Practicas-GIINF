/* 
 * File:   Concepto.cpp
 * Author: usuario
 * 
 * Created on 21 de marzo de 2015, 12:41
 */

#include "Concepto.h"
#include "Productos.h"

/** 
 * @brief Constructor por defecto Parametrizado
 * @return construir un objeto de la clase Concepto, con los parametros que se le pasan
 */
Concepto::Concepto(Productos *product,int cant,int desc=0):
producto(product),cantidad(cant),descuento(desc){
};

/** 
 * @brief Constructor por copia
 * @param orig clase Concepto
 * @pre orig debe ser clase Concepto
 * @return construir un objeto de la clase Concepto
 */
Concepto::Concepto(const Concepto &orig):producto(orig.producto),cantidad(orig.cantidad),descuento(orig.descuento){};

/** 
 * @brief Cambiar datos Producto del concepto
 * @param NuevoProducto puntero a Productos
 * @pre que NuevoProducto sea puntero a Productos
 * @return cambiar la informacion personal de un cliente, si NuevaPersona no es puntero a persona dara error.
 */
void Concepto::SetProducto(const Productos *nuevoproducto){
    this->SetProducto(nuevoproducto);
};

/** 
 * @brief Devuelve el producto
 * @return Devuelve el producto de un Concepto
 */
Productos Concepto::GetProducto()const{
    return this->GetProducto();
};

/** 
 * @brief Cambiar datos Producto del concepto
 * @param NuevoProducto puntero a Productos
 * @pre que NuevoProducto sea puntero a Productos
 * @return cambiar la informacion personal de un cliente, si NuevaPersona no es puntero a persona dara error.
 */
void Concepto::SetCantidad(const int nuevacantidad){
    if (nuevacantidad>=1)
        this->cantidad=nuevacantidad;
};

/** 
 * @brief Devuelve la Cantidad de productos
 * @return Devuelve la cantidad de productos
 */
int Concepto::GetCantidad() const {
    return this->cantidad;
};

/** 
 * @brief Cambiar el descuento aplicado
 * @param Nuevodescuento tipo int constante
 * @pre que Nuevodescuento sea tipo int
 * @return cambiar el descuento de un concepto, si Nuevadescuento no es int  dara error.
 */
void Concepto::SetDescuento(const int nuevodescuento){
    if (nuevodescuento>=0 && nuevodescuento<=80)
        this->descuento=nuevodescuento;
};

/** 
 * @brief Devuelve el descuento de productos
 * @return Devuelve el descuento de productos
 */
int Concepto::GetDescuento() const {
    return this->descuento;
};

/** 
 * @brief Devuelve el coste del concepto
 * @return Devuelve el coste del concepto
 */
int Concepto::GetCoste() {
    int cant=this->cantidad;
    int desc=this->descuento;
    Productos *producto=this->producto;
    int precio=producto->GetPvpUnitario();
    
    int total;
    int descuentototal;
    
    total=precio*cant;
    descuentototal=(desc*total)/100;
    total+=descuentototal;
    
    return total;
}

Concepto::~Concepto(){};

