/* 
 * File:   Fecha.h
 * Author: usuario
 *
 * Created on 21 de marzo de 2015, 12:09
 */

#include <iostream>


#ifndef FECHA_H
#define	FECHA_H


using namespace std;

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
    void fromCSV(const string &cadena);
};

#endif	/* FECHA_H */
