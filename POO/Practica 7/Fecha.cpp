/**
 * @file Fecha.cpp (Practica 6)
 * @author Juan Francisco Abán Fontecha
 * @date 23/03/2015
 * @brief Especificación clase Fecha
 */
#include <ctime>
#include <sstream>
#include "Fecha.h"

//Variables para la fecha del sistema
time_t tSac = time(NULL); //instante actual
struct tm* pt1 = localtime(&tSac);

/** 
 * @brief Constructor por defecto de fecha
 * @post nos devuelve una variable de la clase Fecha con la fecha actual del sistema por defecto
 */
Fecha::Fecha():dia(pt1->tm_mday),
        mes(pt1->tm_mon+1),
        anio(pt1->tm_year+1900) {
   }

/** 
 * @brief Constructor por copia de Fecha
 * @param orig pasada por referencia tipo Fecha
 * @pre que la variable orig sea del tipo Fecha
 * @post nos devuelve una variable con los datos copiados de otro tipo Fecha
 * @return si la variable es de otro tipo dara error
 */
Fecha::Fecha(const Fecha& orig):dia(orig.dia),mes(orig.mes),anio(orig.anio) {
}

Fecha::~Fecha() {
}

/** 
 * @brief Cambiar Año
 * @param anio un int
 * @pre que anio sea un numero entero de 4 cifras (int 999 < x < 10000)
 * @return cambiar el año de una fecha, si anio no es int dara error.
 */
void Fecha::SetAnio(int anio) {
    if (anio>999 & anio<10000)
        this->anio = anio;
}

/** 
 * @brief Devolver Año
 * @return devuelve Año de una Fecha
 */
int Fecha::GetAnio() const {
    return anio;
}
/** 
 * @brief Cambiar Mes
 * @param mes un int
 * @pre que mes sea un numero entero (int 0 < x < 13)
 * @return cambiar el mes de una fecha, si mes no es int dara error.
 */
void Fecha::SetMes(int mes) {
    if (mes>0 & mes<13)
        this->mes = mes;
}

/** 
 * @brief Devolver Mes
 * @return devuelve Mes de una Fecha
 */
int Fecha::GetMes() const {
    return mes;
}

/** 
 * @brief Cambiar Dia
 * @param dia un int
 * @pre que dia sea un numero entero (int 0 < x < 32)
 * @return cambiar el dia de una fecha, si dia no es int dara error.
 */
void Fecha::SetDia(int dia) {
    if (dia>0 & dia<32)
        this->dia = dia;
}

/** 
 * @brief Devolver Dia
 * @return devuelve Dia de una Fecha
 */
int Fecha::GetDia() const {
    return dia;
}

/** 
 * @brief Esta funcion muestra la fecha en formato numerico (aaaammdd)
 * @param fechaactual pasada por referencia tipo Fecha
 * @pre que la variable que se le pase sea del tipo Fecha
 * @post nos devuelve una variable con la fecha en formato numerico
 * @return si la variable es de otro tipo dara error
 */
int Fecha::AnioMesDia(Fecha &fechaactual){
    int mixfecha;
    if (fechaactual.GetDia() <10)
        mixfecha =fechaactual.GetDia()+fechaactual.GetMes()*1000;
    else 
        mixfecha =fechaactual.GetDia()+fechaactual.GetMes()*100;
    if (fechaactual.GetMes()<10)
        mixfecha+=fechaactual.GetAnio()*10000;
    else
        mixfecha+=fechaactual.GetAnio()*1000;
    return mixfecha;
};


/** 
 * @brief Esta funcion permite pasar las fechas a un archivo CSV
 * @post nos devuelve un archivo variable con los datos de las fechas en formato CSV 
 */
string Fecha::toCSV() const{
 //nombre, apellidos, dni y fecha de nacimiento
    string datos;
    std::stringstream ss;
    ss << dia << ";" << mes << ";" << anio;
    getline(ss,datos);
     return datos;
};

/** 
 * @brief Esta funcion permite pasar las fechas de un archivo CSV a una variable tipo Fecha
 * @param cadena es un string pasado por referencia que es el nombre del archivo
 * @post nos devuelve una variable con los datos de un archivo CSV 
 */

void Fecha::fromCSV(const string &cadena){
 //nombre, apellidos, dni y fecha de nacimiento
    std::stringstream ss;
    //getline(ss,cadena,";");
    ss << dia << ";" << mes << ";" << anio;
    //return ss;
}

