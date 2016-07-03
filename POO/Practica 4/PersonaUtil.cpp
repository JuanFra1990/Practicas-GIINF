/* 
 * File:   PersonaUtil.cpp
 * Author: usuario
 * 
 * Created on 28 de febrero de 2015, 10:19
 */


#include <sstream>
#include <string>
#include <fstream>
#include "PersonaUtil.h"
#include "Persona.h"

void PersonaUtil::almacenaEnCSV(Persona *v[], int tamv, string nombreFlujo) {
    
    std::ofstream f;
    f.open( nombreFlujo.c_str());
    if (f.good()) {
        for (int i=0;i<tamv;i++){
            //cada objeto almacenado en una línea
            f << v[i]->toCSV() << endl;
        }
        f.close();
    
    }
};

void PersonaUtil::rellenarvector(Persona personas[], int tampersonas){
    cout << "Vamos a rellenar informacion de personas" << endl;
    for (int i=0;i<tampersonas;i++) {
        string cambio;
        int cambio1;
        char cambioa;
        Fecha fechanueva;
        cout << "Vamos a insertar los datos de la persona numero " << i+1 << endl;
        cout << "Inserte el Nombre" << endl;
        getline(cin >>ws,cambio);
        personas[i].SetNombre(cambio);
        cout << "Inserte el Primer Apellido" << endl;
        getline(cin >>ws,cambio);
        personas[i].SetPrimerApellido(cambio);
        cout << "Inserte el Segundo Apellido" << endl;
        getline(cin >>ws,cambio);
        personas[i].SetSegundoApellido(cambio);
        cout << "Inserte el DNI" << endl;
        cin >> cambio1;
        personas[i].SetDNI(cambio1);
        cout << "Inserte la letra del DNI" << endl;
        cin >> cambioa;
        personas[i].SetLetraDNI(cambioa);
        cout << "Inserte el dia de Nacimiento" << endl;
        cin >> cambio1;
        fechanueva.SetDia(cambio1);
        cout << "Inserte el mes de Nacimiento" << endl;
        cin >> cambio1;
        fechanueva.SetMes(cambio1);
        cout << "Inserte el anio de Nacimiento" << endl;
        cin >> cambio1;
        fechanueva.SetAnio(cambio1);
        personas[i].SetFechanacimiento(fechanueva);
        cout << "Inserte el dia de Alta" << endl;
        cin >> cambio1;
        fechanueva.SetDia(cambio1);
        cout << "Inserte el mes de Alta" << endl;
        cin >> cambio1;
        fechanueva.SetMes(cambio1);
        cout << "Inserte el anio de Alta" << endl;
        cin >> cambio1;
        fechanueva.SetAnio(cambio1);
        personas[i].SetFechaAlta(&fechanueva);
        cout << "Inserte el dia de Baja" << endl;
        cin >> cambio1;
        fechanueva.SetDia(cambio1);
        cout << "Inserte el mes de Baja" << endl;
        cin >> cambio1;
        fechanueva.SetMes(cambio1);
        cout << "Inserte el anio de Baja" << endl;
        cin >> cambio1;
        fechanueva.SetAnio(cambio1);
        personas[i].SetFechaBaja(&fechanueva);
        cout << "Inserte Numero de telefono" << endl;
        cin >> cambio1;
        personas[i].SetTelefono(cambio1);
        cout << "Inserte Correo electronico" << endl;
        cin >> cambio;
        personas[i].SetCorreo(cambio);
        
    };
};


void PersonaUtil::anadirpedido(Pedido *pedidos, const int numerodepedidos){
     pedidos=new Pedido [numerodepedidos];
};


void borrarpedido(Pedido *pedidos,const int numerodepedidos, const int idpedido) {
    for (int i=0;i<numerodepedidos;i++){
        if (idpedido==pedidos[i].GetIDPedido()){
            for (int j=i+1;j<numerodepedidos;j++){
                pedidos[i]=pedidos[j];
                i++;
            };
        } else {
            cout << "El pedido que desea borrar no existe" << endl;
        }
    }
}