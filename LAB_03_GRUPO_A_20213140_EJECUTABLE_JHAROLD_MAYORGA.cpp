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
//Ejercicio 1
/*int potencia(int numero,int exponente){
    int aux=1;
    for(int i=0;i<exponente;i++){
        aux=numero*aux;
    }
    return aux;
}
int main(){
    int numero,resultado,exponente;
    cout<<"Ingrese el numero base de la potencia: "<<endl;
    cin>>numero;
    cout<<"Ingrese el numero exponente de la potencia: "<<endl;
    cin>>exponente;
    resultado=potencia(numero,exponente);
    cout<<"La potencia de base "<<numero<<" y exponente "<<exponente<<" es: "<<resultado<<endl;
}*/
//Ejercicio 2
/*bool bisiesto(int numero){
    if(numero%4==0){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int anio,valor;
    cout<<"Ingrese el anio: "<<endl;
    cin>>anio;
    valor=bisiesto(anio);
    if(valor==true){
        cout<<"El anio "<<anio<<" es bisiesto. "<<endl;
    }
    else{
        cout<<"El anio "<<anio<<" no es bisiesto."<<endl;
    }
}*/
//Ejercicio 3
/*void edad(int A[],int anioA,int mesA,int diaA,int anioP,int mesP,int diaP){
    int AN,M,D;
    if(anioA>anioP){
        AN=anioA-anioP;
        if(mesA>mesP){
            M=mesA-mesP;
            if(diaA>diaP){
                D=diaA-diaP;
            }
            else{
                D=diaP-diaA;
                M=M+2;
            }
        }
        else{
            M=mesP-mesA;
            AN--;
            if(diaA>diaP){
                D=diaA-diaP;
            }
            else{
                D=diaP-diaA;
                M=M+2;
            }
        }
    }
    cout<<"La edad de la persona es de: "<<AN<<" anios, "<<M<<" meses y "<<D<<" dias."<<endl;
}
int main(){
    int anio,mes,dia,anio2,mes2,dia2;
    cout<<"Ingrese la fecha actual:"<<endl;
    cout<<"Dia= ";
    cin>>dia;
    cout<<"Mes= ";
    cin>>mes;
    cout<<"Anio =";
    cin>>anio;
    cout<<"Ingrese la fecha de nacimiento:"<<endl;
    cout<<"Dia= ";
    cin>>dia2;
    cout<<"Mes= ";
    cin>>mes2;
    cout<<"Anio =";
    cin>>anio2;
    int A[]={31,28,31,30,31,30,31,31,30,31,30,31};
    edad(A,anio,mes,dia,anio2,mes2,dia2);
}*/
//Ejercicio 4
/*void primo(int numero1,int numero2){
    int aux1=numero1;
    int aux2=numero2;
    int contador=0,contador2=0;
    if(numero1>numero2){
        cout<<"Los numeros primos entre "<<numero1<<" y "<<numero2<<" son: ";
        for(int i=aux2;i<=aux1;i++){
            for(int a=1;a<=i;a++){
                if(i%a==0){
                    contador++;
                }
            }
            if(contador==2){
                contador2++;
                cout<<i<<" ";
                contador=0;
            }
            else{
                contador=0;
            }
        }
        if(contador2==0){
            cout<<0<<endl;
            for(int i=numero2;i<numero1+100;i++){
                for(int a=1;a<=i;a++){
                    if(i%a==0){
                        contador++;
                    }
                }
                if(contador==2){
                    contador2++;
                    contador=0;
                    cout<<"El numero primo mas cercano a "<<numero1<<" y "<<numero2<<" es: "<<i<<endl;
                    break;
                }
                else{
                    contador=0;
                } 
            }
        }

    }
    else{
        cout<<"Vuelva a ingresar el numero. "<<endl;
    }
}
int main(){
    int numero1,numero2;
    cout<<"Escribe un numero mayor que 1:"<<endl;
    cin>>numero1;
    primo(numero1,1);  
}*/
//Ejercicio 5
int limite(){
    int numero;
    cout<<"Ingrese el numero comprendido entre 0 y 100: "<<endl;
    cin>>numero;
    if((numero>=0)&&(numero<=100)){
        return numero;
    }
    else{
        cout<<"Intentelo de nuevo. "<<endl;
        limite();
    }
}
bool par(int numero){
    if(numero%2==0){
        return true;
    }
    else{
        return false;
    }
}
 void sumar_impares(int numero){
     int a=1;
     for(int i=0;i<numero;i=i+2){
         a=a+i;
     }
     cout<<"La suma de numero desde 0 hasta "<<numero<<" es: "<<a<<endl;
 };
int main(){
    char a;
    int valor=-1;
    bool valor2;
    while(true){
        cout<<"MENU DE OPCIONES:"<<endl;
        cout<<"1. INTRODUCIR UN VALOR ENTERO INTRODUCIDO COMPRENDIDO ENTRE 0 Y 100."<<endl;
        cout<<"2. DEL EJERCICIO ANTERIOR VALIDAR QUE SEA PAR."<<endl;
        cout<<"3. SUMAR TODOS LOS NUMEROS IMPARES DESDE EL 0 HASTA EL VALOR ENTERO INTRODUCIDO."<<endl;
        cout<<"4. SALIR."<<endl;
        cin>>a;
        if(a=='1'){
            valor=limite();
        }
        else if(a=='2'){
            if(valor==-1){
                cout<<"Primero se hara la opcion 1."<<endl;
                valor=limite();
                if(par(valor)==true){
                    cout<<"El numero "<<valor<<" es par."<<endl;
                }
                else{
                    cout<<"El numero "<<valor<<" no es par."<<endl;
                }
            }
            else{
                if(par(valor)==true){
                    cout<<"El numero "<<valor<<" es par."<<endl;
                }
                else{
                    cout<<"El numero "<<valor<<" no es par."<<endl;
                }
            }
            
        }
        else if(a=='3'){
            if(valor==-1){
                cout<<"Primero se hara la opcion 1."<<endl;
                valor=limite();
                sumar_impares(valor);
            }
            else{
                sumar_impares(valor);
            }
        }
        else if(a=='4'){
            break;
        }
        else{
            cout<<"Vuelva a intentarlo."<<endl;
            main();
        }
    }
}



