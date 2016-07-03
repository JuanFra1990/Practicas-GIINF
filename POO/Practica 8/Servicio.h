/* 
 * File:   Servicio.h
 * Author: usuario
 *
 * Created on 16 de abril de 2015, 12:30
 */

#ifndef SERVICIO_H
#define	SERVICIO_H

#include "Productos.h"

class Servicio: public Productos {
private:
     float horas;
     std::string descripcion;
public:
    Servicio(int pvpUni, std::string nom, float hor, std::string des);
    Servicio(const Servicio& orig);
    virtual ~Servicio();
    float GetHoras();
    void SetHoras(float horasnuevas);
    std::string GetDescripcion();
    void SetDescripcion(std::string nuevadescrip);
    virtual float GetPvpUnitario();

};

#endif	/* SERVICIO_H */