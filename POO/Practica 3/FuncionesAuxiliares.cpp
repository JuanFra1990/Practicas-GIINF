/* 
 * File:   FuncionesAuxiliares.cpp
 * Author: usuario
 * 
 * Created on 26 de febrero de 2015, 10:15
 */

#include <iostream>

#include "Fecha.h"
#include "Persona.h"
#include "FuncionesAuxiliares.h"

using namespace std;

void FuncionesUtiles::rellenarvector(Persona personas[], int tampersonas){
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

void FuncionesUtiles::muestradatos(Persona *persona){
    cout << endl << "LOS DATOS DE " << persona->GetNombre() << " SON: " << endl;
    cout << "Se llama: " << persona->GetNombre() << " " << persona->GetPrimerApellido() << persona->GetSegundoApellido() << endl;
    cout << "Su DNI es: " << persona->GetDNI() << persona->GetLetraDNI() << endl;
    Fecha fechanacimiento=persona->GetFechanacimiento();
    cout << "Su fecha de nacimiento es: " << fechanacimiento.GetDia()<< "/"<< fechanacimiento.GetMes()<<"/"<< fechanacimiento.GetAnio() << endl;
    cout << "Sus datos de contacto son:" << endl;
    cout << "correo: " << persona->GetCorreo()<<endl;
    cout << "telefono: " << persona->GetTelefono()<<endl;
    Fecha *alta=persona->GetFechaAlta();
    cout << "Su fecha de alta es: " << alta->GetDia()<< "/"<< alta->GetMes()<<"/"<< alta->GetAnio() << endl;
    Fecha *baja=persona->GetFechaBaja();
    cout << "Su fecha de baja es: " << baja->GetDia()<< "/"<< baja->GetMes()<<"/"<< baja->GetAnio() << endl;
}

void FuncionesUtiles::muestradatosvector(Persona *persona[], int tampersonas){
    for (int i=0;i<tampersonas;i++) {
        cout << endl << "LOS DATOS DE " << persona[i]->GetNombre() << " SON: " << endl;
        cout << "Se llama: " << persona[i]->GetNombre() << " " << persona[i]->GetPrimerApellido() << persona[i]->GetSegundoApellido() << endl;
        cout << "Su DNI es: " << persona[i]->GetDNI() << persona[i]->GetLetraDNI() << endl;
        Fecha fechanacimiento=persona[i]->GetFechanacimiento();
        cout << "Su fecha de nacimiento es: " << fechanacimiento.GetDia()<< "/"<< fechanacimiento.GetMes()<<"/"<< fechanacimiento.GetAnio() << endl;
        cout << "Sus datos de contacto son:" << endl;
        cout << "correo: " << persona[i]->GetCorreo()<<endl;
        cout << "telefono: " << persona[i]->GetTelefono()<<endl;
        Fecha *alta=persona[i]->GetFechaAlta();
        cout << "Su fecha de alta es: " << alta->GetDia()<< "/"<< alta->GetMes()<<"/"<< alta->GetAnio() << endl;
        Fecha *baja=persona[i]->GetFechaBaja();
        cout << "Su fecha de baja es: " << baja->GetDia()<< "/"<< baja->GetMes()<<"/"<< baja->GetAnio() << endl;
    };
}
    

void FuncionesUtiles::muestrafecha(Fecha &fecha){
    cout << endl << "LA FECHA HA MOSTRAR ES: "<< endl;
    cout << "El año es: " << fecha.GetAnio()<<endl;
    cout << "El mes es: " << fecha.GetMes()<<endl;
    cout << "El dia es: " << fecha.GetDia()<<endl;
};




int FuncionesUtiles::calcularedad(Persona* persona) {
    time_t tSac = time(NULL); //instante actual
    struct tm* pt1 = localtime(&tSac);
    Fecha fecha=persona->GetFechanacimiento();
    int anio=fecha.GetAnio();
    int fechaactual=pt1->tm_year+1900;
    int edad=fechaactual-anio;
    return edad;
};

int FuncionesUtiles::personaMasEdad(Persona *personas[],const int &tampersonas,int &personaReciente){
    int edadmayor=0,indicemayor=0;
    Fecha *altamasnueva;
    for (int j=0;j<tampersonas;j++){
        Fecha *altapersona=personas[j]->GetFechaAlta();
        if (altamasnueva<altapersona){
            altamasnueva->SetAnio(altapersona->GetAnio());
            altamasnueva->SetMes(altapersona->GetMes());
            altamasnueva->SetDia(altapersona->GetDia());
            personaReciente=personas[j]->GetID();
        };
    };
    for (int i=0;i<tampersonas;i++){
        int edad=FuncionesUtiles::calcularedad(personas[i]);
        if (edad>edadmayor){
            edadmayor=edad;
            indicemayor=personas[i]->GetID();
        };      
    };
    return indicemayor;

};

