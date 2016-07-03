
/** 
 * @file:   itemCSV.h
 * @Author Juan Francisco Abán Fontecha
 * @date 22 de abril de 2015, 15:05
 * @brief Interfaz para que sus metodos implementen los metodos fromCSV y toCSV
 */

#ifndef ITEMCSV_H
#define	ITEMCSV_H

#include <string>

class itemCSV {
public:
    virtual std::string toCSV()=0;
    virtual bool fromCSV(std::string cadenaCSV)=0;
};

#endif	/* ITEMCSV_H */

