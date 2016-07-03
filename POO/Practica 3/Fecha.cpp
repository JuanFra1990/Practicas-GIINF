/* 
 * File:   Fecha.cpp
 * Author: usuario
 * 
 * Created on 23 de febrero de 2015, 9:19
 */

#include "Fecha.h"
#include <iostream>
#include <ctime>

using namespace std;
//Variables para la fecha del sistema
time_t tSac = time(NULL); //instante actual
struct tm* pt1 = localtime(&tSac);


Fecha::Fecha():dia(pt1->tm_mday),
        mes(pt1->tm_mon+1),
        anio(pt1->tm_year+1900) {
}

Fecha::Fecha(const Fecha& orig):dia(orig.dia),mes(orig.mes),anio(orig.anio) {
}

Fecha::~Fecha() {
}

void Fecha::SetAnio(int anio) {
    if (anio>999 & anio<10000)
        this->anio = anio;
}

int Fecha::GetAnio() const {
    return anio;
}

void Fecha::SetMes(int mes) {
    if (mes>0 & mes<13)
        this->mes = mes;
}

int Fecha::GetMes() const {
    return mes;
}

void Fecha::SetDia(int dia) {
    if (dia>0 & dia<32)
        this->dia = dia;
}

int Fecha::GetDia() const {
    return dia;
}

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
