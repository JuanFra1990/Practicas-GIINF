/* 
 * File:   Fecha.h
 * Author: usuario
 *
 * Created on 23 de febrero de 2015, 9:19
 */

#include <string>


#ifndef FECHA_H
#define	FECHA_H

class Fecha {
private:
    int dia;
    int mes;
    int anio;
public:
    Fecha();
    Fecha(const Fecha& orig);
    virtual ~Fecha();
    void SetAnio(int anio);
    int GetAnio() const;
    void SetMes(int mes);
    int GetMes() const;
    void SetDia(int dia);
    int GetDia() const;
    int AnioMesDia(Fecha &fechaactual);
    std::string toCSV() const;
};

#endif	/* FECHA_H */


