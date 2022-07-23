#include <stdfix.h>
#include <iostream>
#include <random>
#include <list>
#include <fstream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
#include <math.h>
#include <ctime>
#include <fstream>
#include <stdlib.h>
#include <string.h>
#include <chrono>
#include <sys/time.h>
#include <ctime>
using namespace std;
/*int funcion(int valor){
    valor=valor+10;
    return valor;
}
int funcionpuntero(int* valor){
    *valor=*valor+10;
    return *valor;
}
int main(){
    int numero=10;
    cout<<"Antes de la funcion: "<<numero<<endl;
    funcion(numero);
    cout<<"Despues de la funcion: "<<numero<<endl;
    funcionpuntero(&numero);
    cout<<"Despues de la funcionpuntero: "<<numero<<endl;
}*/
/*int main(){
    int cols=2;
    string** libros;
    int tamanio;
    string entrada;
    cout<<"Cuantos libros desea ingresar: "<<endl;
    getline(cin,entrada);
    tamanio=stoi(entrada);
    libros=new string*[tamanio];
    cout<<"Ingrese la informacion de los libros: "<<endl;
    string titulo,autor;
    for(int i=0;i<tamanio;i++){
        for(int j=0;j<2;j++){
            libros[i]=new string [2];
            cout<<endl;
            cout<<"****LIBRO No."<<i+1<<"****"<<endl;
            cout<<"Titulo: "<<endl;
            getline(cin,libros[i][j]);
            cout<<"Autor:"<<endl;
            getline(cin,libros[i][j+1]);
            break;
        }
    }
    for(int i=0;i<tamanio;i++){
        delete[]libros[i];
    }
    delete[] libros;
}*/
//Ejercicio 1
/*void intercambio(int* numero1,int* numero2){
    int aux;
    aux=*numero1;
    *numero1=*numero2;
    *numero2=aux;
}
int main(){
    int numero1,numero2;
    cout<<"Ingrese un numero: "<<endl;
    cin>>numero1;
    cout<<"Ingrese el segundo numero: "<<endl;
    cin>>numero2;
    cout<<"Primer numero :"<<numero1<<endl;
    cout<<"Segundo numero : "<<numero2<<endl;
    intercambio(&numero1,&numero2);
    cout<<"Primer numero intercambiado: "<<numero1<<endl;
    cout<<"Segundo numero intercambiado: "<<numero2<<endl;
}*/
//Ejercicio 2
/*void mostrar(float* vector,int tamanio){
    for(int i=0;i<tamanio;i++){
        cout<<vector[i]<<" ";
    }
    cout<<endl;
}
int main(){
    srand(time(NULL));
    int tamanio;
    cout<<"Indique el tamanio que tendran los vectores: "<<endl;
    cin>>tamanio;
    for(int i=0;i<1000000;i++){
        float* vector=new float[tamanio];
        float* vector2= new float[tamanio];
        float* vector3=new float [tamanio];
        for(int i=0;i<tamanio;i++){
            vector[i]=1+rand()%(21-1);
            vector2[i]=1+rand()%(21-1);
            vector3[i]=(vector[i]*vector2[i]);
        }
        cout<<"Lista A: "<<endl;
        mostrar(vector,tamanio);
        cout<<"Lista B: "<<endl;
        mostrar(vector2,tamanio);
        cout<<"Lista producto punto [A.B]:"<<endl;
        mostrar(vector3,tamanio);
        cout<<endl;
        delete[]vector;
        delete[]vector2;
        delete[]vector3;
    }  
}*/
//Ejercicio 3
/*void mostrar(float** vector,int longitud,int longitud2){
    cout<<"Vector de numeros:"<<endl;
    for(int i=0;i<longitud;i++){
        for(int j=0;j<longitud2;j++){
            cout<<vector[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}
void eliminar(float** vector,int longitud,int longitud2){
    int fila,columna;
    cout<<"Elija la columna y fila:"<<endl;
    cout<<"Fila: ";
    cin>>fila;
    cout<<"Columna: ";
    cin>>columna;
    vector[fila-1][columna-1]=0;
    mostrar(vector,longitud,longitud2);
}
void ordenar(float** vector,int longitud,int longitud2){
    srand(time(NULL));
    for(int i=0;i<longitud;i++){
        for(int j=0;j<longitud2-1;j++){
            int aux=0;
            for(int h=0;h<longitud2-1;h++){
                if(vector[i][h]>vector[i][h+1]){
                    aux=vector[i][h+1];
                    vector[i][h]=vector[i][h+1];
                    vector[i][h+1]=aux;
                }
            }
        }
    }
    
}
void insertar(float** vector,int longitud,int longitud2){
    srand(time(NULL));
    for(int i=0;i<longitud;i++){
        for(int j=0;j<longitud2;j++){
            vector[i][j]=1+rand()%(10-1);
        }
    }
}
int main(){
    int longitud,longitud2;
    longitud=5;
    longitud2=5;
    float** vector=new float*[longitud];
    for(int i=0;i<longitud;i++){
        vector[i]=new float[longitud2];
    }
    insertar(vector,longitud,longitud2);
    ordenar(vector,longitud,longitud2);
    mostrar(vector,longitud,longitud2);
    eliminar(vector,longitud,longitud2);
    for(int i=0;i<longitud2;i++){
        delete[] vector[i];
    }
    delete[]vector;
}*/
//Ejercicio 4
/*int main(){
    bool y;
    int longitud=5;
    void** vector=new void*[longitud];
    int* vector1=new int[longitud];
    string* vector2=new string[longitud];
    float* vector3=new float[longitud];
    char* vector4=new char[longitud];
    bool* vector5=new bool[longitud];
    for(int i=0;i<longitud;i++){
        int numero;
        cout<<"Ingrese el numero entero: "<<endl;
        cin>>numero;
        vector1[i]=numero;
    }
    for(int i=0;i<longitud;i++){
        string numero;
        cout<<"Ingrese la palabra: "<<endl;
        cin>>numero;
        vector2[i]=numero;
    }
    for(int i=0;i<longitud;i++){
        float numero;
        cout<<"Ingrese el numero decimal: "<<endl;
        cin>>numero;
        vector3[i]=numero;
    }
    for(int i=0;i<longitud;i++){
        char numero;
        cout<<"Ingrese el caracter: "<<endl;
        cin>>numero;
        vector4[i]=numero;
    }
    for(int i=0;i<longitud;i++){
        bool numero;
        cout<<"Ingrese la expresion(0/1): "<<endl;
        cin>>numero;
        vector5[i]=numero;
    }
    cout<<"MATRIZ DE VOID: "<<endl;
    for(int i=0;i<longitud;i++){
        cout<<vector1[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<longitud;i++){
        cout<<vector2[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<longitud;i++){
        cout<<vector3[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<longitud;i++){
        cout<<vector4[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<longitud;i++){
        cout<<vector5[i]<<" ";
    }
    cout<<endl;
    vector[0]=vector1;
    vector[1]=vector2;
    vector[2]=vector3;
    vector[3]=vector4;
    vector[4]=vector5;
    string palabra;
    cout<<"Indique el tipo de dato que quiere buscar(int,string,float,char,bool):"<<endl;
    cin>>palabra;
    if(palabra=="int"){
        int valor;
        cout<<"Ingrese el numero a buscar:"<<endl;
        cin>>valor;
        for(int i=0;i<longitud;i++){
            if(valor==vector1[i]){
                cout<<"El numero "<<valor<<" se encuentra en la matriz: "<<endl;
            }
        }
    }
    else if(palabra=="string"){
        string valor;
        cout<<"Ingrese la palabra a buscar:"<<endl;
        cin>>valor;
        for(int i=0;i<longitud;i++){
            if(valor==vector2[i]){
                cout<<"La palabra "<<valor<<" se encuentra en la matriz: "<<endl;
            }
        }
    }
    else if(palabra=="float"){
        float valor;
        cout<<"Ingrese el decimal a buscar:"<<endl;
        cin>>valor;
        for(int i=0;i<longitud;i++){
            if(valor==vector3[i]){
                cout<<"El decimal "<<valor<<" se encuentra en la matriz: "<<endl;
            }
        }
    }
    else if(palabra=="char"){
        char valor;
        cout<<"Ingrese el caracter a buscar:"<<endl;
        cin>>valor;
        for(int i=0;i<longitud;i++){
            if(valor==vector4[i]){
                cout<<"El caracter "<<valor<<" se encuentra en la matriz: "<<endl;
            }
        }
    }
    else if(palabra=="bool"){
        bool valor;
        cout<<"Ingrese la expresion a buscar(0,1):"<<endl;
        cin>>valor;
        for(int i=0;i<longitud;i++){
            if(valor==vector5[i]){
                cout<<"El bool "<<valor<<" se encuentra en la matriz: "<<endl;
            }
        }
    }
    
    for(int i=0;i<longitud;i++){
        delete[] vector[i];
    }
    delete[] vector1;
    delete[] vector2;
    delete[] vector3;
    delete[] vector4;
    delete[] vector5;
    delete[] vector;
}*/
//Ejercicio 5
/*void llenar(string*vector,int longitud){
    cout<<"Ingrese las palabras seguidamente: "<<endl;
    for(int i=0;i<longitud;i++){
        cin>>vector[i];
    }
}
void mostrar(string*vector,int longitud){
    cout<<endl;
    cout<<"TEXTO FINAL: "<<endl;
    for(int i=0;i<longitud;i++){
        cout<<vector[i]<<" ";
    }
    cout<<endl;
}
void concatenar(string*vector,string*vector1,string*concatenacion,int longitud,int longitud2){
    int longitudtotal=0;
    int i=0;
    for(;i<longitud2;i++){
        concatenacion[i]=vector1[i];
    }
    int j=0;
    for(;j<longitud;j++){
        concatenacion[i]=vector[j];
        i++;
    }
}
int main(){
    int longitud,longitud2;
    cout<<"Ingrese el tamanio del primer vector: "<<endl;
    cin>>longitud;
    cout<<"Ingrese el tamanio del segundo vector: "<<endl;
    cin>>longitud2;
    string* vector1=new string[longitud];
    string* vector2=new string[longitud2];
    string* concatenacion=new string[longitud+longitud2];
    cout<<"VECTOR 1: "<<endl;
    llenar(vector1,longitud);
    cout<<"VECTOR 2: "<<endl;
    llenar(vector2,longitud2);
    concatenar(vector1,vector2,concatenacion,longitud,longitud2);
    mostrar(concatenacion,(longitud+longitud2));
    delete[] vector1;
    delete[] vector2;
    delete[] concatenacion;
}*/
//Ejercicio 6
int suma(int a,int b){
    int suma=(a+b);
    cout<<"La suma de "<<a<<" y "<<b<<" es: "<<suma<<endl;
    return 0;
}
int resta(int a,int b){
    if(a>b){
        int resta=(a-b);
        cout<<"La resta de "<<a<<" y "<<b<<" es: "<<resta<<endl;;
    }
    else{
        int resta=(b-a);
        cout<<"La resta de "<<b<<" y "<<a<<" es: "<<resta<<endl;;
    }
    return 0;
    
}
int multiplicacion(int a,int b){
    int multi=(a*b);
    cout<<"La multiplicacion de "<<a<<" y "<<b<<" es: "<<multi<<endl;
    return 0;
}
int division(int a,int b){
    if(a>b){
        float division=(a/b);
        cout<<"La division de "<<a<<" y "<<b<<" es: "<<division<<endl;
    }
    else{
        float division=(b/a);
        cout<<"La division de "<<b<<" y "<<a<<" es: "<<division<<endl;;
    }
    return 0;
}
int main(){
    int opcion;
    int(*fp[])(int,int)={suma,resta,multiplicacion,division};
    while(true){
        int a,b;
        cout<<"Ingrese los numeros: "<<endl;
        cin>>a;
        cin>>b;
        cout<<"Ingrese la opcion que desea realizar: "<<endl;
        cout<<"1. SUMAR."<<endl;
        cout<<"2. RESTAR."<<endl;
        cout<<"3. MULTIPLICAR."<<endl;
        cout<<"4. DIVIDIR."<<endl;
        cout<<"5. SALIR."<<endl;
        cin>>opcion;
        if(opcion==1){
            cout<<(fp[0])(a,b);
        }
        else if(opcion==2){
            cout<<(fp[1])(a,b);
        }
        else if(opcion==3){
            cout<<(fp[2])(a,b);
        }
        else if(opcion==4){
            cout<<(fp[3])(a,b);
        }
        else if(opcion==5){
            break;
        }
    }
}