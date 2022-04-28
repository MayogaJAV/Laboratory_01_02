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
    int a,b;
    cout<<"Ingrese el numero 1: "<<endl;
    cin>>a;
    cout<<"Ingrese el numero 2"<<endl;
    cin>>b;
    cout<<"La multiplicacion de "<<a<<" y "<<b<<" es: "<<a*b<<endl;
}*/
//Ejercicio 2
/*int main(){
    char nombre[20];
    char apellidoP[20];
    char apellidoM[20];
    int contadorN,contadorAM,contadorAP;
    cout<<"Ingrese su primer nombre(minusculas): "<<endl;
    cin>>nombre;
    cout<<"Ingrese su apellido paterno(minusculas): "<<endl;
    cin>>apellidoP;
    cout<<"Ingrese su apellido materno(minusculas): "<<endl;
    cin>>apellidoM;
    contadorAM=strlen(apellidoP);
    cout<<"Su correo UNSA generado a travez de sus credenciales es: "<<nombre[0];
    for(int i=0;i<contadorAM;i++){
        cout<<apellidoP[i];
    }
    cout<<apellidoM[0]<<"@unsa.edu.pe"<<endl; 
}*/
//Ejercicio 3
/*int main(){
    int extra;
    int hora,minutos,contador=1;
    cout<<"Ingrese la hora y minutos(Ejemplo: hora=10 minutos=45 [10:45])"<<endl;
    cout<<"HORA=";
    cin>>hora;
    cout<<"MINUTOS=";
    cin>>minutos;
    cout<<"Ingrese la cantidad de minutos adicionales para agregar(solo minutos): "<<endl;  
    cin>>extra;
    int adicional=extra;
    if(extra>=60){
        while(true){
            adicional=adicional-60;
            if(adicional<=60){
                break;
            }
            else{
                contador++;
            }
        }
        hora=hora+contador;
        minutos=minutos+adicional;
        if(minutos>=60){
            hora++;
            minutos=minutos-60;
            if(hora>=24){
                hora=hora-24;
                if((hora>=0)&&(hora<12)){
                    cout<<"La hora final es: "<<hora<<":"<<minutos<<" am."<<endl;
                }
                else{
                    cout<<"La hora final es: "<<hora<<":"<<minutos<<" pm."<<endl;
                }
            }
            else{
                if((hora>=0)&&(hora<12)){
                    cout<<"La hora final es: "<<hora<<":"<<minutos<<" am."<<endl;
                }
                else{
                    cout<<"La hora final es: "<<hora<<":"<<minutos<<" pm."<<endl;
                }
            }
        }
        else{
            if(hora>=24){
                hora=hora-24;
                if((hora>=0)&&(hora<12)){
                    cout<<"La hora final es: "<<hora<<":"<<minutos<<" am."<<endl;
                }
                else{
                    cout<<"La hora final es: "<<hora<<":"<<minutos<<" pm."<<endl;
                }
            }
            else{
                if((hora>=0)&&(hora<12)){
                    cout<<"La hora final es: "<<hora<<":"<<minutos<<" am."<<endl;
                }
                else{
                    cout<<"La hora final es: "<<hora<<":"<<minutos<<" pm."<<endl;
                }
            }
        }
    }
    else{
        minutos=minutos+extra;
        if(minutos>=60){
            hora++;
            minutos=minutos-60;
            if(hora>=24){
                hora=hora-24;
                if((hora>=0)&&(hora<12)){
                    cout<<"La hora final es: "<<hora<<":"<<minutos<<" am."<<endl;
                }
                else{
                    cout<<"La hora final es: "<<hora<<":"<<minutos<<" pm."<<endl;
                }
            }
            else{
                if((hora>=0)&&(hora<12)){
                    cout<<"La hora final es: "<<hora<<":"<<minutos<<" am."<<endl;
                }
                else{
                    cout<<"La hora final es: "<<hora<<":"<<minutos<<" pm."<<endl;
                }
            }
        }
        else{
            if(hora>=24){
                hora=hora-24;
                if((hora>=0)&&(hora<12)){
                    cout<<"La hora final es: "<<hora<<":"<<minutos<<" am."<<endl;
                }
                else{
                    cout<<"La hora final es: "<<hora<<":"<<minutos<<" pm."<<endl;
                }
            }
            else{
                if((hora>=0)&&(hora<12)){
                    cout<<"La hora final es: "<<hora<<":"<<minutos<<" am."<<endl;
                }
                else{
                    cout<<"La hora final es: "<<hora<<":"<<minutos<<" pm."<<endl;
                }
            }
        }
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
        main();
    }  
}*/
//Ejercicio 5
/*void imprimir(char A[],int contador){
    for(int i=0;i<contador;i++){
        if(A[i]=='.'){
            cout<<A[i+1];
            break;
        }
        else{
            cout<<A[i];
        }
    }
}
int main(){
    char decimal[10];
    int contador;
    cout<<"Ingrese el numero decimal para aproximarlo: "<<endl;
    cin>>decimal;
    contador=strlen(decimal);
    for(int i=0;i<contador;i++){
        if(decimal[i]=='.'){
            if((decimal[i+1])<53){
                decimal[i-1]=decimal[i-1];
                decimal[i+1]=0;
            }
            else if((decimal[i+1])>=53){
                decimal[i-1]=decimal[i-1]+1;
                decimal[i+1]=0;
            }
        }
    }
    cout<<"El numero redondeado es: ";
    imprimir(decimal,contador);
}*/
//Ejercicio 6
/*int main(){
    int a;
    vector<int> numeros;
    cout<<"Ingrese el numero positivo entero entre 100 y 999: "<<endl;
    cin>>a;
    if(a>0){
        while(a>0){
            if(a%2==0){
                numeros.push_back(0);
            }
            else{
                numeros.push_back(1);
            }
            a=(int)a/2;
        }
    }
    else if(a==0){
        cout<<"Numero binario: "<<0<<endl;
    }
    else{
        cout<<"Vuelva a ingresar el numero: "<<endl;
        main();
    }
    cout<<"Numero binario es:";
    for(int i=numeros.size()-1;i>=0;i--){
        cout<<numeros[i];
    }
    cout<<endl;
}*/
//Ejercicio 7
/*int main(){
    int numero,numero2,contador=0;
    cout<<"Escribe un numero mayor que 1 : "<<endl;
    cin>>numero;
    cout<<"Escribe un numero menor que el anterior: "<<endl;
    cin>>numero2;
    if(numero>=numero2){
        if(numero%numero2==0){
            cout<<"El numero "<<numero2<<" es divisor de "<<numero<<endl;
        }
        else{
            cout<<"El numero "<<numero2<<" no es divisor de "<<numero<<endl;   
        }
    }
    else{
        cout<<"El numero "<<numero<<" es menor que "<<numero2<<endl;
        cout<<"Vuelva a intentarlo. "<<endl;
        main();
    }
}*/
//Ejercicio 8
/*int main(){
    int suma=0;
    int cantidad;
    cout<<"Cuantos numeros desea ingresar: "<<endl;
    cin>>cantidad;
    for(int i=0;i<cantidad;i++){
        int numero;
        cout<<"Ingrese el numero: "<<endl;
        cin>>numero;
        suma=suma+numero;
    }
    cout<<"La media aritmetica de los numeros anteriormente escritos es: "<<suma/cantidad<<endl;
}*/
//Ejercicio 9
/*int main(){
    int A[10];
    int suma=0;
    for(int i=0;i<10;i++){
        cout<<"Ingrese su numero: "<<endl;
        cin>>A[i];
        if(A[i]<0){
            suma=suma+A[i];
        }
    }
    cout<<"La suma de numero negativos es: "<<suma<<endl;
}*/
//Ejercicio 10
/*int main(){
    string contra;
    int cantidad;
    bool c=false;;
    cout<<"Ingrese una contraseña: "<<endl;
    cin>>contra;
    while(c==false){
        string contra2;
        cout<<"Ingrese la contraseña anterior: "<<endl;
        cin>>contra2;
        if(contra2==contra){
            cout<<"Contraseña correcta."<<endl;
            c=true;
        }
        else{
            c=false;
        }
    }
}*/