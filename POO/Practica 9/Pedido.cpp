/**
 * @file Pedido.cpp (Practica 6)
 * @author Juan Francisco Abán Fontecha
 * @date 24/03/2015
 * @brief Implementacion de la clase Pedido
 */
#include "Pedido.h"
#include "Productos.h"


int NUMPEDIDO=0;

/** 
 * @brief Constructor Por defecto de clase Pedido
 * @post nos devuelve una variable de clase pedido
 */
Pedido::Pedido():IDPedido(++NUMPEDIDO),
    fecha(),
    estado(recibido),
    gastosdeenvio(),
    importe(),
    cliente(), 
    productos(),
    Atendidopor(){
};

/** 
 * @brief Constructor Por Parametros de clase Pedido
 * @post nos devuelve una variable de clase pedido con los datos que le pasamos excepto el ID
 */
Pedido::Pedido(Fecha fecha, Estado estado, float gastosdeenvio, float importe, Cliente *cliente, 
    std::vector<Concepto*> listproductos, Empleado *trabajador):IDPedido(++NUMPEDIDO),
    fecha(fecha),
    estado(estado),
    gastosdeenvio(gastosdeenvio),
    importe(importe),
    cliente(cliente),
    productos(listproductos),
    Atendidopor(trabajador){
};
    

/** 
 * @brief Constructor Por copia de clase Pedido
 * @post nos devuelve una variable de clase pedido copiando los datos del Pedido que le pasamos excepto el ID
 */
Pedido::Pedido(const Pedido& orig):IDPedido(++NUMPEDIDO),
    fecha(orig.fecha),
    estado(orig.estado),
    gastosdeenvio(orig.gastosdeenvio),
    importe(orig.importe),
    cliente(orig.cliente),
    productos(orig.productos){
}

/** 
 * @brief Cambiar Cliente 
 * @param Cliente puntero a una variable clase Cliente
 * @pre que Cliente sea puntero a una variable clase Cliente
 * @return cambiar el cliente de un pedido, si Cliente no es puntero a una variable clase Cliente dara error.
 */

void Pedido::SetCliente(Cliente* cliente) {
    this->cliente = cliente;
}

/** 
 * @brief Devolver Cliente
 * @return devuelve cliente de un Pedido
 */
Cliente* Pedido::GetCliente() const {
    return cliente;
}

/** 
 * @brief Cambiar Importe de un Pedido
 * @param importe variable de tipo float
 * @pre que Cliente sea puntero a una variable clase Cliente
 * @return cambiar el Importe de un pedido, si importe no es una variable float dara error.
 */
void Pedido::SetImporte(float importe) {
    if (importe>=0)
        this->importe = importe;
}

/** 
 * @brief Devolver Importe
 * @return devuelve Importe de un Pedido
 */
float Pedido::GetImporte() const {
    return importe;
}

/** 
 * @brief Cambiar Gastos de envio de un pedido
 * @param gastosdeenvio una variable tipo float
 * @pre que gastosdeenvio sea una variable tipo float
 * @return cambiar los gastos de envio de un pedido, si gastosdeenvio no es una variable tipo float dara error.
 */
void Pedido::SetGastosdeenvio(float gastosdeenvio) {
    if (gastosdeenvio>=0)
        this->gastosdeenvio = gastosdeenvio;
}

/** 
 * @brief Devolver Gastos de envio
 * @return devuelve Gastos de envio
 */
float Pedido::GetGastosdeenvio() const {
    return gastosdeenvio;
}

/** 
 * @brief Cambiar Fecha de un pedido
 * @param fecha variable tipo Fecha
 * @pre que fecha sea una variable tipo Fecha
 * @return cambiar la fecha de un pedido, si fecha no es variable tipo Fecha dara error.
 */
void Pedido::SetFecha(Fecha fecha) {
    this->fecha = fecha;
}

/** 
 * @brief Devolver Fecha
 * @return devuelve fecha de un Pedido
 */
Fecha Pedido::GetFecha() const {
    return fecha;
}

/** 
 * @brief Cambiar Estado del pedido
 * @param estado del tipo enum "Estado"
 *  enum Estado
    {
    recibido, 
    preparacion, 
    enviado, 
    cerrado
    };    
 * @pre estado sea del tipo enum "Estado"
 * @return cambiar el estado de un pedido, si estado no es del tipo enum "Estado" dara error.
 */
void Pedido::SetEstado(Estado estado){
    this->estado=estado;
}

/** 
 * @brief Devolver Estado
 * @return devuelve Estado de un Pedido
 */
Pedido::Estado Pedido::GetEstado() const {
    return estado;
}

/** 
 * @brief Devolver ID
 * @return devuelve ID de un Pedido
 */
int Pedido::GetIDPedido() const {
    return IDPedido;
}

/** 
 * @brief Devolver Importe Total de un pedido
 * @return devuelve Importe mas los gastos de envio de un Pedido
 */
float Pedido::GetTotal() const{
    float importetotal=importe+gastosdeenvio;
    return importetotal;
}

/** 
 * @brief Devolver un vector de Productos que contiene el pedido
 * @return devuelve un vector de Productos
 */
std::vector<Concepto*> Pedido::GetProductos(){
    return productos;
};


/** 
 * @brief Esta funcion permite que insertemos nuevos productos a un Pedido
 * @param nuevosproductos es un vector de Punteros a Conceptos
 * @pre que nuevosproductos sea un vector de punteros a conceptos
 * @post 
 * @return si la variable es de otro tipo dara error
 */
Concepto Pedido::anadirProducto(std::vector<Concepto*> nuevosproductos){
    bool salir=false;
    if (this->productos!=nuevosproductos)
        for (int i=0;i<nuevosproductos.size();i++) {
            for (int j=0;j<this->productos.size() || salir;j++){
                if (nuevosproductos[i]!=this->productos[j]) {
                    this->productos.push_back(nuevosproductos[i]);
                    salir=true;
                }
            }
        }
};


 

/** 
 * @brief Esta funcion busca un producto por su ID y nos devuelve su posicion en el vector
 * @param IDaBuscar del tipo int
 * @pre que el ID este dentro del vector de productos
 * @post nos devuelve la posicion del producto en el vector
 * @return si la variable es de otro tipo dara error, y si el ID no esta en el vector productos devuelve -1 
 */

int Pedido::RefProdId(int IDaBuscar) {
    std::vector<Concepto*> listaproductos=this->productos;
    for (int i=0;i<listaproductos.size();i++) {
        Productos* prod=listaproductos[i]->GetProducto();
        if (IDaBuscar==prod->GetIdproducto()){
            return i;
        }
    }
    return -1;
}
/** 
 * @brief Esta funcion busca un producto por su numero de referencia y lo borra del vector, y ajusta el resto
 * @param referencia del tipo int
 * @pre que la referencia este dentro del vector de productos
 * @return si la variable es de otro tipo dara error, y si referencia no esta en el vector productos no borra nada 
 */
void Pedido::BorrarProducto(int referencia){
    int tamano=this->productos.size();
    if (referencia<tamano){
    this->productos[tamano]=this->productos[referencia];
    this->productos.pop_back();
    }
}

/** 
 * @brief Esta funcion borra el vector de productos
 * @post El vector de productos desaparece
 */
void Pedido::BorrarTodosProductos(){
    this->productos.clear();
}
/** 
 * @brief Esta funcion nos devuelve el importe total de un pedido sumando el precio de los articulos
 *  @post devuelve la suma de los productos unitarios de los productos que nos da lugar al importe total del pedido
 */
float Pedido::importeTotal() {
    std::vector<Concepto*> listaproductos=this->productos;
    float suma=0;
    for(int i=0;i<this->productos.size();i++) {
        suma+=listaproductos[i]->GetCoste();
    }
    this->SetImporte(suma);
    return suma;
}
/** 
 * @brief Cambia el empleado que a atendido el producto
 *  @param Atendidopor tipo Empleado
 * @pre que Atendidopor sea del tipo Empleado
 * @return si la variable es de otro tipo dara error 
 */
void Pedido::SetAtendidopor(Empleado* Atendidopor) {
    this->Atendidopor = Atendidopor;
}

/** 
 * @brief Devuelve el Empleado que atendio el pedido
 * @post Devuelve el Empleado que atendio el pedido
 */
Empleado* Pedido::GetAtendidopor() const {
    return Atendidopor;
}

Pedido::~Pedido() {
}
