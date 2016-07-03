/* 
 * File:   ArticuloAlquilable.h
 * Author: usuario
 *
 * Created on 16 de abril de 2015, 11:53
 */

#ifndef ARTICULOALQUILABLE_H
#define	ARTICULOALQUILABLE_H

#include  "Articulo.h"
#include "Servicio.h"

class ArticuloAlquilable : public Articulo, public Servicio {
public:
    ArticuloAlquilable(int pvpUni=0, std::string nom="",int pe=0, int uniEnva=0,
        int hor=0, std::string des="");
    ArticuloAlquilable(const ArticuloAlquilable& orig);
    virtual ~ArticuloAlquilable();
    virtual float GetPvpUnitario();

};

#endif	/* ARTICULOALQUILABLE_H */