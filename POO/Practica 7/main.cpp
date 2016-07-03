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
    */
    
    Productos* vpr[6];
     for (int i = 0; i < 6; i++) {
        vpr[i]=0;
    }
    
    vpr[0]=new Productos(350,"disco");
    vpr[1]=new Servicio(30,"camara",20,"Uso de la camara");
    vpr[2]=new Articulo(230,"pantalla",20,1);
    vpr[3]=(Servicio*)new ArticuloAlquilable(30,"camara",50,10,20,"Uso de la camara");
    
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
    
    Pedido pedido1, pedido2, pedido3;
    
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

    

    
    return 0;
}

