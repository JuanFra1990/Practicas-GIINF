/* 
 * File:   main.cpp
 * Author: usuario
 *
 * Created on 28 de febrero de 2015, 10:37
 */

#include <cstdlib>
#include "Pedido.h"
#include "Persona.h"
#include "PersonaUtil.h"

using namespace std;
using namespace PersonaUtil;

/*
 * 
 */

float totalImportePedidos(const Pedido* v[], int tamv)
{
    float totalImporte=0;
    for (int i=0;i<tamv;i++){
        totalImporte+=v[i]->GetTotal();
    }
    return totalImporte;
}

int main() {


    
    int numpersonas=0,numpedidos=0;
    
   
    //Pedidos numero de clientes a insertar y rellenamos el vector
    Persona *clientes;
    cout << "Numero de Clientes a insertar" << endl;
    cin >> numpersonas;
    clientes=new Persona [numpersonas];
    
    PersonaUtil::rellenarvector(clientes,numpersonas);
    
    PersonaUtil::almacenaEnCSV(&clientes,numpersonas,"persona.csv");
    
    // Pedimos y rellenamos Vector de pedidos
    
    Pedido *pedidos;
    cout << "Numero de Pedidos a insertar" << endl;
    cin >> numpedidos;
    
    PersonaUtil::anadirpedido(pedidos,numpedidos);
    
   
    
    for (int i=0;i<numpedidos;i++){
    
        int var,varcliente;
        float vara;
        Fecha fechapedido;
        Pedido::Estado estadonuevo;
        cout << "Inserte dia de compra"<< endl;
        cin >> var;
        fechapedido.SetDia(var);
        cout << "Inserte mes de compra"<< endl;
        cin >>var;
        fechapedido.SetMes(var);
        cout << "Inserte anio de compra"<< endl;
        cin >>var;
        fechapedido.SetAnio(var);
        pedidos->SetFecha(fechapedido);
        cout << "Inserte el precio del importe" << endl;
        cin >> vara;
        pedidos->SetImporte(vara);
        cout << "Inserte Gastos de Envio" << endl;
        cin >> vara;
        pedidos->SetGastosdeenvio(vara);
        cout << "Inserte un cliente" << endl;
        cin >> varcliente;
         if (varcliente < numpersonas && varcliente >0)
            pedidos->SetCliente(&clientes[varcliente]);
        do {
            if (varcliente >=0 && varcliente < numpersonas) {
                cout << "Inserte un estado (recibido, preparacion, enviado, cerrado)";
                cin >> var;
            }else
            {
                var=1;
            }
        }while(var  && var<0 || var >5 );
        
        if (var==1) 
            estadonuevo=Pedido::recibido;
        if (var==2)
            estadonuevo=Pedido::preparacion;
        if (var==3) 
            estadonuevo=Pedido::enviado;
        if (var==4)
            estadonuevo=Pedido::cerrado;
        
        pedidos->SetEstado(estadonuevo);
        
     
        };
        int idpedido=3;
        
        PersonaUtil::borrarpedido(pedidos,numpedidos,idpedido);       
    
        delete []clientes;
        delete []pedidos;
        
    return 0;
}

