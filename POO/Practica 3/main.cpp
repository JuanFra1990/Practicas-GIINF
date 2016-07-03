/* 
 * File:   main.cpp
 * Author: usuario
 *
 * Created on 23 de febrero de 2015, 9:18
 */

#include <cstdlib>
#include <iostream>
#include "Fecha.h"
#include "Persona.h"
#include "FuncionesAuxiliares.h"

using namespace std;

/*
 * 
 */
int main() {
    Fecha fechaactual; 
    
    cout << "El año es: " << fechaactual.GetAnio()<<endl;
    cout << "El mes es: " << fechaactual.GetMes()<<endl;
    cout << "El dia es: " << fechaactual.GetDia()<<endl;
    
    int mixfecha=fechaactual.AnioMesDia(fechaactual);
    cout << "Probando funcion: " << mixfecha<<endl;
    
    Persona Manolo;
    
    Manolo.SetDNI(773685843);
    Manolo.SetLetraDNI('F');
    Manolo.SetNombre("Juan Francisco");
    Manolo.SetFechanacimiento(fechaactual);
    Manolo.SetFechaAlta(&fechaactual);
    Manolo.SetFechaBaja(&fechaactual);
    
    FuncionesUtiles::muestradatos(&Manolo);
    int edad=FuncionesUtiles::calcularedad(&Manolo);
    cout << "LA EDAD ES:" << edad << endl;
    
    
    FuncionesUtiles::muestrafecha(fechaactual);
    
    cout << "FIN PRUEBAS" << endl << endl;
    
    
    int tampersonas,indicemayor;
    Persona *personas;
    
    cout << "¿Que numero de personas desea introducir? "<< endl;
    cin >> tampersonas;
    
   personas= new Persona [tampersonas];
    
    
    //tampersonas=3;
    //Persona personas1[tampersonas];
    
    FuncionesUtiles::rellenarvector(personas,tampersonas);
    //indicemayor=FuncionesUtiles::personaMasEdad(personas,tampersonas,personaReciente);
    
    FuncionesUtiles::muestradatosvector(&personas,tampersonas);
    int personaReciente, personamayor;
    personamayor=FuncionesUtiles::personaMasEdad(&personas,tampersonas,personaReciente);
    cout << personamayor << " "<<personaReciente<< endl;
    cout << "La persona que se ha dado de alta mas reciente es: " << endl;
    for (int i=0;i<tampersonas;i++){
        if (personas[i].GetID()==personas[personaReciente].GetID())
            cout << personas[personaReciente].GetNombre();
        
        if (personas[i].GetID()==personas[personamayor].GetID())
            cout << "La persona mas mayor es: "<< endl;
            cout << personas[personamayor].GetNombre();
    };
    
   
    
    return 0;
}

