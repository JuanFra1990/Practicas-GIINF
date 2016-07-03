/* 
 * File:   Articulo.h
 * Author: usuario
 *
 * Created on 16 de abril de 2015, 12:02
 */

#ifndef ARTICULO_H
#define	ARTICULO_H

#include "Productos.h"

class Articulo :virtual  public Productos {
private:
    int peso;
    int unidadesEnvase;
public:
    Articulo(float pvpUni, std::string nom,int pe, int uniEnva);
    Articulo(const Articulo& orig);
    virtual ~Articulo();
    void SetUnidadesEnvase(int unidadesEnvase);
    int GetUnidadesEnvase() const;
    void SetPeso(int peso);
    int GetPeso() const;
    virtual float GetPvpUnitario();
};

#endif	/* ARTICULO_H */