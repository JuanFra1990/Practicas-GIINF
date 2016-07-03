/* 
 * File:   Productos.h
 * Author: usuario
 *
 * Created on 21 de marzo de 2015, 12:37
 */

#ifndef PRODUCTOS_H
#define	PRODUCTOS_H

#include <string>

class Productos {
private:
    static int nuevoid;
     int idproducto; 
     float pvpUnitario;
     std::string nombre;
public:
    Productos();
    Productos(const Productos& orig);
    Productos(float pvp, std::string nom);
    void SetNombre(std::string nombre);
    std::string GetNombre() const;
    void SetPvpUnitario(float pvpUnitario);
    float GetPvpUnitario() const;
    int GetIdproducto() const;
    virtual ~Productos();
};

#endif	/* PRODUCTOS_H */

