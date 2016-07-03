/* 
 * File:   main.cpp
 * Author: usuario
 *
 * Created on 16 de abril de 2015, 11:57
 */

#include <cstdlib>
#include "Productos.h"
#include "Servicio.h"
#include "Articulo.h"
#include "ArticuloAlquilable.h"
#include "Pedido.h"
#include "Persona.h"
#include "Empleado.h"
#include "Cliente.h"
#include "UtilesItemCSV.h"
#include "itemCSV.h"


using namespace std;

/*
 * 
 */
int main() {
    
    /*
    Productos vprod[4]={ Productos(350,"disco"),
                        Servicio(30,"camara",20,"Uso de la camara"),
                        Articulo(230,"pantalla",20,1),
                        //ArticuloAlquilable(30,"camara",50,10,20,"Uso de la camara")
                        };
    
    
    vprod[2].SetNombre("Monitor");
   
    
    Productos* vpr[6];
     for (int i = 0; i < 6; i++) {
        vpr[i]=0;
    }
    
  
    vpr[1]=new Servicio(30,"camara",20,"Uso de la camara");
    vpr[2]=new Articulo(230,"pantalla",20,1);
    vpr[3]=(Servicio*)new ArticuloAlquilable(30,"camara",50,10,20,"Uso de la camara");
     *  */
 /*
    vpr[0]->SetNombre("Disco Duro");
    vpr[0]->SetPvpUnitario(102);
    
    vpr[1]->SetNombre("Camara de Fotos");
    vpr[1]->SetPvpUnitario(46);
    
    vpr[2]->SetNombre("Monitor");
    vpr[2]->SetPvpUnitario(250);
    
    vpr[3]->SetNombre("Camara de Fotos Ultraligera");
    vpr[3]->SetPvpUnitario(90);
    
    vpr[3]->Productos::SetNombre("Camara de Fotos Ultraligera");
    vpr[3]->Productos::SetPvpUnitario(90);
   
  */
   /* Pedido pedido1, pedido2, pedido3;
    
    Fecha fecha; 
    Pedido::Estado estado=Pedido::recibido; 
    float gastosdeenvio; 
    float importe; 
    Cliente *cliente=0; 
    Concepto **listproductos; 
    int tamnproductos; 
    int tammaxproductos; 
    Empleado *trabajador;
    
    
    Pedido vped[4]={ Pedido(fecha,estado,gastosdeenvio,importe,cliente,listproductos,tamnproductos,
            tammaxproductos,trabajador),
                        Pedido(fecha,estado,gastosdeenvio,importe,cliente,listproductos,tamnproductos,
            tammaxproductos,trabajador),
                        Pedido(fecha,estado,gastosdeenvio,importe,cliente,listproductos,tamnproductos,
            tammaxproductos,trabajador)};
*/
    itemCSV* vpersonas[6];
     for (int i = 0; i < 6; i++) {
        vpersonas[i]=0;
    }
    
   
    Fecha fechanac;
    Fecha *fechal=0;
    Fecha *fechaba=0;
    
    vpersonas[1]=new Persona("Abán","Juan Francisco","Fontecha",677308959,"jfaf@gmail.com",fechanac,77365843,'F',fechal,fechaba);
    vpersonas[2]=new Cliente("Abán","Juan Francisco","Fontecha",677308959,"jfaf@gmail.com",fechanac,77365843,'F',fechal,fechaba,"C/San Lorenzo");
    vpersonas[3]=new Empleado("Abán","Juan Francisco","Fontecha",677308959,"jfaf@gmail.com",fechanac,77365843,'F',fechal,fechaba,600);
    
    
    
    
    int numObjs=3;
    std::string nomArchivo="Personas.csv";

   // UtilesItemCSV::AlmacenaObjetosCSV(vpersonas,numObjs,nomArchivo);
    UtilesItemCSV::AlmacenaObjetosCSV2(vpersonas,numObjs,nomArchivo);
    
    return 0;
}
