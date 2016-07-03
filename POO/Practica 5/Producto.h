/* 
 * File:   Producto.h
 * Author: usuario
 *
 * Created on 14 de marzo de 2015, 13:57
 */


#ifndef PRODUCTO_H
#define	PRODUCTO_H

#include <string>

using namespace std;

class Producto {
private:
    static int nuevoid;
     int idproducto; 
     float pvpUnitario;
     string nombre;
public:
    Producto();
    Producto(const Producto& orig);
    Producto(float pvp, string nom);
    virtual ~Producto();
    void SetNombre(string nombre);
    string GetNombre() const;
    void SetPvpUnitario(float pvpUnitario);
    float GetPvpUnitario() const;
    int GetIdproducto() const;


};

#endif	/* PRODUCTO_H */

