/**
 * @file Productos.cpp (Practica 6)
 * @author Juan Francisco Abán Fontecha
 * @date 23/03/2015
 * @brief Implementacion de la Clase Productos
 */

#include "Productos.h"

int NUEVOID=0;

/** 
 * @brief Constructor por defecto
 * @return construir un objeto de la clase Productos
 */
Productos::Productos():idproducto(++NUEVOID),pvpUnitario(0),nombre("abcde") {
}

/** 
 * @brief Constructor por copia
 * @param orig es llamada por referencia a tipo Productos
 * @pre que orig sea tipo Productos
 * @return construir un objeto de la clase Productos, si orig no es tipo productos dara error
 */
Productos::Productos(const Productos& orig):idproducto(orig.idproducto),pvpUnitario(orig.pvpUnitario), 
nombre(orig.nombre){
}

/** 
 * @brief Cambiar Nombre
 * @param nombre un string 
 * @pre que nombre sea una cadena (string)
 * @return cambiar el nombre de un Producto, si nombre no es string dara error.
 */
void Productos::SetNombre(std::string nombre) {
    if (nombre.length()>5)
        this->nombre = nombre;
}

/** 
 * @brief Devolver Nombre
 * @return devuelve Nombre de un producto
 */
std::string Productos::GetNombre() const {
    return nombre;
}

/** 
 * @brief Cambiar Precio unitario de un producto
 * @param pvpUnitario tipo float
 * @pre que pvpUnitario sea tipo float
 * @return cambiar el Precio de un Producto, si pvpUnitario no es tipo float dara error.
 */
void Productos::SetPvpUnitario(float pvpUnitario) {
    if (pvpUnitario>=0)
        this->pvpUnitario = pvpUnitario;
}

/** 
 * @brief Devolver Precio
 * @return devuelve Precio de un producto
 */
float Productos::GetPvpUnitario() const {
    return pvpUnitario;
}

/** 
 * @brief Devolver ID
 * @return devuelve ID de un producto
 */
int Productos::GetIdproducto() const {
    return idproducto;
}

Productos::~Productos() {
}
