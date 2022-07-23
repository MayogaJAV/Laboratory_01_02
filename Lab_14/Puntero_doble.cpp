#include <iostream>
#include <random>
#include <list>
#include <fstream>
#include <string>
#include <vector>
#include <ctime>
#include <stdlib.h>
#include <string.h>
#include <regex>
#include <ctime>
#include <iomanip>
using namespace std;
struct Producto{
    int codigo;
    string nombre;
    string tipo_producto;
    double precio;
    int stock;
    int estado;
    Producto* siguiente;
};
typedef struct Producto Administrar;

Administrar* Crear(int codigo, string nombre,string tipo_producto,double precio,int stock,int estado){
    Administrar* nuevo= new (struct Producto);
    nuevo->codigo=codigo;
    nuevo->nombre= nombre;
    nuevo->tipo_producto= tipo_producto;
    nuevo->precio=precio;
    nuevo->stock=stock;
    nuevo->estado=estado;
    nuevo->siguiente=NULL;
    return nuevo;
}

void Insertar(Administrar*& Lista_productos,int codigo,string nombre,string tipo_producto,double precio,int stock,int estado){
    if(Lista_productos==NULL){
        Lista_productos=Crear(codigo,nombre,tipo_producto,precio,stock,estado);
    }
    else{
        Insertar(Lista_productos->siguiente,codigo,nombre,tipo_producto,precio,stock,estado);
    }
}

void EncontrarProductoXFila(Administrar*& Lista_productos,string producto,bool& contador){
    if(Lista_productos!=NULL){
        if((Lista_productos->tipo_producto)==(producto)){
            contador=true;
        }
        else{
            EncontrarProductoXFila(Lista_productos->siguiente,producto,contador);
        }
    }
    else{
        contador=false;
    }
}
void EncontrarProducto(Administrar**& Lista_productos,string producto,int num,bool& contador,int& contador2){
    for(int i=0;i<num;i++){
        EncontrarProductoXFila(Lista_productos[i],producto,contador);
        if(contador==true){
            contador=true;
            contador2=i;
            break;
        }
    }
}

void EncontrarProductoXFila2(Administrar*& Lista_productos,string producto,bool& contador){
    if(Lista_productos!=NULL){
        if((Lista_productos->nombre)==(producto)){
            contador=true;
        }
        else{
            EncontrarProductoXFila2(Lista_productos->siguiente,producto,contador);
        }
    }
    else{
        contador=false;
    }
}
void EncontrarProducto2(Administrar**& Lista_productos,string producto,int num,bool& contador,int& contador2){
    for(int i=0;i<num;i++){
        EncontrarProductoXFila2(Lista_productos[i],producto,contador);
        if(contador==true){
            contador=true;
            contador2=i;
            break;
        }
    }
}

void EncontrarProductoXFila3(Administrar*& Lista_productos,int producto,bool& contador){
    if(Lista_productos!=NULL){
        if((Lista_productos->codigo)==(producto)){
            contador=true;
        }
        else{
            EncontrarProductoXFila3(Lista_productos->siguiente,producto,contador);
        }
    }
    else{
        contador=false;
    }
}
void EncontrarProducto3(Administrar**& Lista_productos,int producto,int num,bool& contador,int& contador2){
    for(int i=0;i<num;i++){
        EncontrarProductoXFila3(Lista_productos[i],producto,contador);
        if(contador==true){
            contador=true;
            contador2=i;
            break;
        }
    }
}

void EncontrarProductoXFila4(Administrar*& Lista_productos,string producto,bool& contador){
    if(Lista_productos!=NULL){
        if((Lista_productos->nombre)==(producto)){
            cout<<"Entro"<<endl;
            while(true){
                int opcion;
                cout<<"Escoja la opcion que desea modificar:"<<endl;
                cout<<"\t1. Codigo."<<endl;
                cout<<"\t2. Nombre."<<endl;
                cout<<"\t3. Precio."<<endl;
                cout<<"\t4. Stock."<<endl;
                cout<<"\t5. Estado."<<endl;
                cin>>opcion;
                if(opcion==1){
                    int cambio;
                    cout<<"Ingrese el nuevo codigo del producto "<<Lista_productos->nombre<<" :"<<endl;
                    cin>>cambio;
                    Lista_productos->codigo=cambio;
                    break;
                }
                else if(opcion==2){
                    string cambio;
                    cout<<"Ingrese el nuevo nombre del producto "<<Lista_productos->nombre<<" :"<<endl;
                    cin>>cambio;
                    Lista_productos->nombre=cambio;
                    break;
                }
                else if(opcion==3){
                    double cambio;
                    cout<<"Ingrese el nuevo precio del producto "<<Lista_productos->nombre<<" :"<<endl;
                    cin>>cambio;
                    Lista_productos->precio=cambio;
                    break;
                }
                else if(opcion==4){
                    int cambio;
                    cout<<"Ingrese el nuevo stock del producto "<<Lista_productos->nombre<<" :"<<endl;
                    cin>>cambio;
                    Lista_productos->stock=cambio;
                    break;
                }
                else if(opcion==5){
                    while(true){
                        int cambio;
                        cout<<"Ingrese el nuevo estado del producto "<<Lista_productos->nombre<<" (Activo=1/Desactivo=0) :"<<endl;
                        cin>>cambio;
                        if(cambio==1||cambio==0){
                            Lista_productos->estado=cambio;
                            break;
                        }
                        else{
                            cout<<"Vuelva a intentarlo."<<endl;
                        }
                    }
                    break;
                }
                else{
                    cout<<"Vuelva a intentarlo."<<endl;
                }
                contador=true;
            }
        }
        else{
            EncontrarProductoXFila4(Lista_productos->siguiente,producto,contador);
        }
    }
    else{
        contador=false;
    }
}
void EncontrarProducto4(Administrar**& Lista_productos,string producto,int num,bool& contador,int& contador2){
    for(int i=0;i<num;i++){
        EncontrarProductoXFila4(Lista_productos[i],producto,contador);
        if(contador==true){
            contador=true;
            contador2=i;
            break;
        }
    }
}

void mostrar_lista(Administrar*& Lista_productos){
    if(Lista_productos!=NULL){
        cout<<Lista_productos->tipo_producto;
    }

}

void Buscar_zero_stockxfila(Administrar*& Lista_productos,bool & contador){
    if(Lista_productos!=NULL){
        if((Lista_productos->stock)==0){
            contador=true;
        }
        else{
            Buscar_zero_stockxfila(Lista_productos->siguiente,contador);
        }
    }
}
int Buscar_zero_stock(Administrar**& Lista_productos,int num,bool& contador){
    int iteracion=0;
    for(int i=0;i<num;i++){
        contador=false;
        Buscar_zero_stockxfila(Lista_productos[i],contador);
        if(contador==true){
            cout<<"El producto "<<Lista_productos[i]->nombre<<" esta fuera de stock."<<endl;
            iteracion++;
        }
    }
    return iteracion;
}
void Mostrar_inventario_lista(Administrar*& Lista_productos){
    if(Lista_productos!=NULL){
        cout<<"\tCodigo: "<<Lista_productos->codigo<<endl;
        cout<<"\tNombre: "<<Lista_productos->nombre<<endl;
        cout<<"\tTipo de Producto: "<<Lista_productos->tipo_producto<<endl;
        cout<<"\tPrecio: "<<"S/. "<<Lista_productos->precio<<endl;
        cout<<"\tStock: "<<Lista_productos->stock<<endl;
        cout<<"\tEstado: ";
        if(Lista_productos->stock==0){
            cout<<"Inactivo (Sin Stock)"<<endl;
        }
        else{
            cout<<"Activo (Con Stock)"<<endl;
        }
        cout<<endl;
        Mostrar_inventario_lista(Lista_productos->siguiente);
    }
}
void Mostrar_inventario_total(Administrar**& Lista_productos,int num){
    for(int i=0;i<num;i++){
        cout<<"Inventario "<<Lista_productos[i]->tipo_producto<<" :"<<endl;
        Mostrar_inventario_lista(Lista_productos[i]);
    }
}

int main(){
    int num;
    cout<<"Indique la cantidad de tipos de productos que habra en la tienda:"<<endl;
    cin>>num;
    Administrar** Producto= new Administrar*[num];
    for(int i=0;i<num;i++){
        Producto[i]= new Administrar;
        Producto[i]=NULL;
    }
    int contador=0;
    while(true){
        int opcion;
        cout<<"######### MENU-STOCK #########"<<endl;
        cout<<"\t1. Ingresar productos(Dar de alta)."<<endl;
        cout<<"\t2. Retirar productos fuera de stock(Dar de baja)."<<endl;
        cout<<"\t3. Buscar producto por nombre o codigo ."<<endl;
        cout<<"\t4. Modificar las carateristicas de un producto."<<endl;
        cout<<"\t5. Mostrar Inventario de productos."<<endl;
        cout<<"\t6. Salir."<<endl;
        cin>>opcion;
        if(opcion==1){
            if(contador==0){
                cout<<"Ingresando datos...."<<endl;
                for(int i=0;i<num;i++){
                    int codigo;
                    double precio;
                    string nombre;
                    string tipo_producto;
                    int stock;
                    int estado;
                    cout<<"Ingrese el codigo del producto "<<i+1<<" :"<<endl;
                    cin>>codigo;
                    cout<<"Ingrese el precio del producto "<<i+1<<" :"<<endl;
                    cin>>precio;
                    cout<<"Ingrese el tipo de producto "<<i+1<<" :"<<endl;
                    cin>>tipo_producto;
                    cout<<"Ingrese el nombre del producto "<<i+1<<" :"<<endl;
                    cin>>nombre;
                    cout<<"Ingrese el stock del producto "<<i+1<<" :"<<endl;
                    cin>>stock;
                    while(true){
                        cout<<"Ingrese el estado del producto "<<i+1<<" (Activo=1/Desactivo=0):"<<endl;
                        cin>>estado;
                        if(estado==1||estado==0){
                            break; 
                        }
                        else{
                            cout<<"Vuelva a intentarlo."<<endl;
                        }
                    }
                    Insertar(Producto[i],codigo,nombre,tipo_producto,precio,stock,estado);
                    cout<<endl;
                }
                contador=1;
            }
            else if(contador==1){
                char opcion;
                cout<<"Desea agregar un algun nuevo producto(S/N)"<<endl;
                cin>>opcion;
                if(opcion=='S'||opcion=='s'){
                    bool contador=false;
                    int contador2;
                    string nombre_producto;
                    cout<<"Lista de productos:"<<endl;

                    for(int i=0;i<num;i++){
                        cout<<"\t "<<i+1<<". ";
                        mostrar_lista(Producto[i]);
                        cout<<endl;
                    }

                    cout<<"Ingrese el nombre del tipo de producto que desea agregar."<<endl;
                    cin>>nombre_producto;
                    cout<<endl;
                    EncontrarProducto(Producto,nombre_producto,num,contador,contador2);
                    if(contador==true){
                        for(int i=0;i<1;i++){
                            int codigo;
                            double precio;
                            string nombre;
                            int stock;
                            int estado;
                            cout<<"Ingrese el codigo del producto "<<i+1<<" :"<<endl;
                            cin>>codigo;
                            cout<<"Ingrese el precio del producto "<<i+1<<" :"<<endl;
                            cin>>precio;
                            cout<<"Ingrese el nombre del producto "<<i+1<<" :"<<endl;
                            cin>>nombre;
                            cout<<"Ingrese el stock del producto "<<i+1<<" :"<<endl;
                            cin>>stock;
                            while(true){
                                cout<<"Ingrese el estado del producto "<<i+1<<" (Activo=1/Inactivo=0):"<<endl;
                                cin>>estado;
                                if(estado==1||estado==0){
                                    Insertar(Producto[contador2],codigo,nombre,nombre_producto,precio,stock,estado);
                                    break;
                                }
                                else{
                                    cout<<"Vuelva a intentarlo."<<endl;
                                }
                            }
                        }
                    }
                    else{
                        cout<<"No se encontro el producto."<<endl;
                    }
                    cout<<endl;
                    
                }
                else if(opcion=='N'||opcion=='n'){
                    cout<<"Regresando al Menu."<<endl;
                }
                else{
                    cout<<"La opcion es incorrecta. Vuelva a intentarlo."<<endl;
                }
            }
        }
        else if(opcion==2){
            bool contador;
            if(Buscar_zero_stock(Producto,num,contador)==0){
                cout<<"Todos los productos tienen stock."<<endl;
            }
        }
        else if(opcion==3){
            while(true){
                int opcion;
                cout<<"Escoja la busqueda por nombre o codigo:"<<endl;
                cout<<"\t1. Nombre."<<endl;
                cout<<"\t2. Codigo."<<endl;
                cin>>opcion;
                if(opcion==1){
                    bool contador=false;
                    int contador2;
                    string nombre_producto;
                    cout<<"Ingrese el nombre del producto que desea buscar."<<endl;
                    cin>>nombre_producto;
                    cout<<endl;
                    EncontrarProducto2(Producto,nombre_producto,num,contador,contador2);
                    if(contador==true){
                        cout<<"El producto "<<nombre_producto<<" se encuentra en la inventario "<<contador2+1<<endl;
                    }
                    else{
                        cout<<"El producto "<<nombre_producto<<" no se encontro. "<<endl;
                    }
                    break;
                }
                else if(opcion==2){
                    bool contador=false;
                    int contador2;
                    int codigo_producto;
                    cout<<"Ingrese el codigo del producto que desea buscar."<<endl;
                    cin>>codigo_producto;
                    cout<<endl;
                    EncontrarProducto3(Producto,codigo_producto,num,contador,contador2);
                    if(contador==true){
                        cout<<"El producto "<<codigo_producto<<" se encuentra en la inventario "<<contador2+1<<endl;
                    }
                    else{
                        cout<<"El producto "<<codigo_producto<<" no se encontro. "<<endl;
                    }
                    break;
                }
                else{
                    cout<<"Intentelo de nuevo."<<endl;
                }
                
            }
            
        }
        else if(opcion==4){
            bool contador=false;
            int contador2;
            string nombre_producto;
            cout<<"Ingrese el nombre del producto que desea buscar."<<endl;
            cin>>nombre_producto;
            cout<<endl;
            EncontrarProducto4(Producto,nombre_producto,num,contador,contador2);
            if(contador==false){
                cout<<"El producto "<<nombre_producto<<" no se encontro. "<<endl;
            }
        }
        else if(opcion==5){
            Mostrar_inventario_total(Producto,num);
        }
        else if(opcion==6){
            break;
        }
        else{
            cout<<"Vuelva a intentarlo."<<endl;
        }
    }
}