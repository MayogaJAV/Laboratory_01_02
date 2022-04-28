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
/*int main(){
    int sumatoria=0;
    for(int i=1;i<101;i++){
        if(i%2==0){
        sumatoria=sumatoria+i;
        }
    }
    cout<<"La sumatoria es :" <<sumatoria<<endl;
}*/
//Ejercicio 2
/*int main(){
    int contador=0;
    cout<<"Los numeros comprendidos entre 0 y 50 son: ";
    for(int j=1;j<=50;j++){
        for(int i=1;i<=j;i++){
            if(j%i==0){
                contador++;
            }
        }
        if(contador==2){
            cout<<j<<" ";
            contador=0; 
        }
        else{
            contador=0;
        }
    }
}*/
//Ejercicio 3
/*int main(){
    cout<<"Los numeros multiplos de 5: ";
    for(int i=1;i<21;i++){
        cout<<5*i<<" ";
    }
}*/
//Ejercicio 4
/*int main(){
    int numero1,numero2,contador=0,contador2=0;
    cout<<"Escribe un numero mayor que 1:"<<endl;
    cin>>numero1;
    cout<<"Escriba un numero menor que el numero anterior: "<<endl;
    cin>>numero2;
    int aux1=numero1;
    int aux2=numero2;
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
        cout<<contador2<<endl;
        if(contador2==0){
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
        main();
    }  
}*/
//Ejercicio 5
/*void llenarlista(float A[],int a){
    for(int i=0;i<a;i++){
        cout<<"Ingrese el numero "<<i+1<<" de la lista."<<endl;
        cin>>A[i];
    }
}
void mostrarlista(float A[],int a){
    for(int i=0;i<a;i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
}
void ordenarlista(float A[],int a){
    float aux,mayor,menor;
    for(int j=0;j<a-1;j++){
        for(int i=0;i<a-1;i++){
            if(A[i]>=A[i+1]){
                aux=A[i];
                A[i]=A[i+1];
                A[i+1]=aux;
            }
        }
    }
}
float suma(float A[], int a){
    float suma=0;
    for(int i=0;i<a;i++){
        suma=suma+A[i];
    }
    return suma/a;
}
int main(){
    int cantidad;
    cout<<"Ingrese la cantidad de numeros: "<<endl;
    cin>>cantidad;
    float promedio;
    float A[cantidad];
    llenarlista(A,cantidad);
    ordenarlista(A,cantidad);
    mostrarlista(A,cantidad);
    promedio=suma(A,cantidad);
    cout<<"El menor numero de la lista es: "<<A[0]<<endl;
    cout<<"El mayor numero de la lista es: "<<A[cantidad-1]<<endl;
    cout<<"La meida aritmetica de los numeros es: "<<promedio<<endl;
}*/
//Ejercicio 6
/*int main(){
    int cantidad,aux=0,aux2=1,aux3=1;
    cout<<"Cuantos numeros desea mostrar en la serie de Fibonacci?: "<<endl;
    cin>>cantidad; 
    cout<<"Serie Fibonacci: ";
    cout<<"1 ";
    for(int i=1;i<cantidad;i++){
        aux3=aux2+aux;
        cout<<aux3<<" ";
        aux=aux2;
        aux2=aux3;
    }
}*/
//Ejercicio 7
/*void llenar(float A[][3],int cantidad){
    for(int i=0;i<cantidad;i++){
        for(int j=0;j<3;j++){
            cout<<"Escriba la nota "<<j+1<<" del estudiante "<<i+1<<endl;
            cin>>A[i][j];
        }
    }
    cout<<endl;
}
void mostrar(float A[][3],int cantidad){
    cout<<"TABLA DE DATOS:"<<endl;
    for(int i=0;i<cantidad;i++){
        for(int j=0;j<3;j++){
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
}
void promedio(float A[][3],int cantidad){
    for(int i=0;i<cantidad;i++){
        int promedio=0;
        for(int j=0;j<3;j++){
            promedio=promedio+A[i][j];
        }
        cout<<endl;
        cout<<"El promedio de notas del estudiante "<<i+1<<" es: "<<promedio/3<<endl;
    }
}
int main(){
    int cantidad;
    cout<<"Indique cuantos alumnos van a ser evaluados: "<<endl;
    cin>>cantidad;
    float A[cantidad][3];
    llenar(A,cantidad);
    mostrar(A,cantidad);
    promedio(A,cantidad);
}*/
//Ejercicio 8
/*void tabla(int numero){
    cout<<"TABLA DE MULTIPLICAR DE "<<numero<<endl;
    for(int i=1;i<13;i++){
        cout<<numero<<"x"<<i<<"="<<numero*i<<endl;
    }
}
int main(){
    int numero;
    cout<<"Ingresa el numero que desea multiplicar: "<<endl;
    cin>>numero;
    tabla(numero);
}*/
//Ejercicio 9
/*int main(){
    int tamanio;
    int i=1;
    cout<<"Ingrese el tamanio del triangulo: "<<endl;
    cin>>tamanio;
    cout<<endl;
    for(int a=0;a<tamanio;a++){
        for(int j=0;j<i;j++){
            cout<<"*";
        }
        cout<<endl;
        i++;
    }
}*/
//Ejercicio 10
/*int main(){
    char palabra[10];
    int cantidad;
    cout<<"Ingrese la palabra que desea separar: "<<endl;
    cin>>palabra;
    cantidad=strlen(palabra);
    cout<<"Palabra deletreada alrevez: ";
    for(int i=cantidad;i>=0;i--){
        cout<<palabra[i]<<" ";
    }
}*/








