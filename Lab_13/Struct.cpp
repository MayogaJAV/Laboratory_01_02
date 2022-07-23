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
//Ejercicio 1
/*struct Persona{
    string nombre;
    int dia;
    int mes;
    int anio;
};
typedef struct Persona Arreglo;
bool comprobar_mes(int mes,int mesperson){
    if(mes==mesperson){
        return true;
    }
    else{
        return false;
    }
}
void llenar_datos(Persona A[],int longitud){
    time_t now = time(0);
    tm* time = localtime(&now);
    vector<int> mes;
    mes.push_back(01);
    mes.push_back(02);
    mes.push_back(03);
    mes.push_back(04);
    mes.push_back(05);
    mes.push_back(06);
    mes.push_back(07);
    mes.push_back(8);
    mes.push_back(9);
    mes.push_back(10);
    mes.push_back(11);
    mes.push_back(12);
    int year = 1900 + time->tm_year;
    int dia = time->tm_mday;
    int MES = mes[time->tm_mon];
    for(int i=0;i<longitud;i++){
        string nombre;
        int dia;
        int mes;
        int anio;
        cout<<"Ingrese el nombre de la persona "<<i+1<<endl;
        cin>>nombre;
        cout<<"Ingrese la fecha de cumpleanios de "<<nombre<<endl;
        cout<<"Ingrese el dia:"<<endl;
        cin>>dia;
        cout<<"Ingrese el mes:"<<endl;
        cin>>mes;
        cout<<"Ingrese el anio:"<<endl;
        cin>>anio;
        A[i].nombre=nombre;
        A[i].dia=dia;
        A[i].mes=mes;
        A[i].anio=anio;
        if(comprobar_mes(MES,A[i].mes)){
            cout<<"El mes del cumpleanios de "<<A[i].nombre<<" coincide con este mes actual"<<endl;
        }
        else{
            cout<<"El mes del cumpleanios de "<<A[i].nombre<<" no coincide con este mes actual"<<endl;
        } 
    }
}
int main(){
    int numero;
    string time_fecha_hoy;
    string DAY, MONTH; 
    cout<<"Ingrese el numero de personas que tendran datos:"<<endl;
    cin>>numero;
    Persona Compa[100];
    llenar_datos(Compa,numero);
}*/
//EJERCICIO 2
/*struct Notas{
    string nombre;
    char grupo;
    float primera_fase;
    float segunda_fase;
    float tercera_fase;
    float Proyect_Final;
};
typedef struct Notas Alumnos;
void mostrar_alumnos(Alumnos A,int longitud,int promedio){
    cout<<endl;
    cout<<"#### ALUMNO "<<A.nombre<<" ####"<<endl;
    cout<<"Grupo: "<<A.grupo<<endl;
    cout<<"Nota Primera Fase: "<<A.primera_fase<<endl;
    cout<<"Nota Segunda Fase: "<<A.segunda_fase<<endl;
    cout<<"Nota Tercera Fase: "<<A.tercera_fase<<endl;
    cout<<"Nota Proyecto Final: "<<A.Proyect_Final<<endl;
    cout<<"Nota General Final: "<<promedio<<endl;
    cout<<endl;
}
double calcular_porcentaje_nota(float nota1,float nota2,float nota3,float nota4){
    int NotaFinal;
    nota1=nota1*0.15;
    nota2=nota2*0.20;
    nota3=nota3*0.25;
    nota4=nota4*0.4;
    NotaFinal=nota1+nota2+nota3+nota4;
    return NotaFinal;
}
void mostrar_total(Alumnos A[],int longitud){
    for(int i=0;i<longitud;i++){
        double NF;
        NF=calcular_porcentaje_nota(A[i].primera_fase,A[i].segunda_fase,A[i].tercera_fase,A[i].Proyect_Final);
        mostrar_alumnos(A[i],longitud,NF);
    }
}
void llenar_datos(Alumnos A[],int longitud){
    for(int i=0;i<longitud;i++){
        string nombre;
        char grupo;
        float pfase;
        float sfase;
        float tfase;
        float PF;
        cout<<"Ingrese el nombre del alumno "<<i+1<<":"<<endl;
        cin>>nombre;
        cout<<"Ingrese el grupo del alumno  "<<nombre<<"(A/B/C):"<<endl;
        cin>>grupo;
        cout<<"Ingrese la nota de la primera fase del alumno "<<nombre<<":"<<endl;
        cin>>pfase;
        cout<<"Ingrese la nota de la segunda fase del alumno "<<nombre<<":"<<endl;
        cin>>sfase;
        cout<<"Ingrese la nota de la tercera fase del alumno "<<nombre<<":"<<endl;
        cin>>tfase;
        cout<<"Ingrese la nota del Proyecto Final del alumno "<<nombre<<":"<<endl;
        cin>>PF;
        A[i].nombre=nombre;
        A[i].grupo=grupo;
        A[i].primera_fase=pfase;
        A[i].segunda_fase=sfase;
        A[i].tercera_fase=tfase;
        A[i].Proyect_Final=PF;
    }
    mostrar_total(A,longitud);
}
int main(){
    int longitud;
    cout<<"Ingrese el numero de alumnos que estan incritos en el curso de Ciencia de la Computacion."<<endl;
    cin>>longitud;
    Alumnos personas[100];
    llenar_datos(personas,longitud);
}*/
//EJERCICIO 3
/*struct Personas{
    string nombre;
    int edad;
    double talla;
};
typedef struct Personas Jugadores;
void mostrar_alumnos(Jugadores A){
    cout<<endl;
    cout<<"#### ALUMNO "<<A.nombre<<" ####"<<endl;
    cout<<"EDAD: "<<A.edad<<endl;
    cout<<"TALLA: "<<A.talla<<endl;
    cout<<endl;
}
double calcular_porcentaje_nota(float nota1,float nota2,float nota3,float nota4){
    int NotaFinal;
    nota1=nota1*0.15;
    nota2=nota2*0.20;
    nota3=nota3*0.25;
    nota4=nota4*0.4;
    NotaFinal=nota1+nota2+nota3+nota4;
    return NotaFinal;
}
void mostrar_total(Jugadores A[],int longitud){
    int contador=0;
    for(int i=0;i<longitud;i++){
        if(A[i].edad<20 && A[i].talla>1.70){
            mostrar_alumnos(A[i]);
            contador++;
        }
    }
    if(contador==0){
        cout<<"No se mostro la informacion de ninguno de los jugadores."<<endl;
    }
}
void llenar_datos(Jugadores A[],int longitud){
    for(int i=0;i<longitud;i++){
        string nombre;
        int edad;
        double talla;
        cout<<"Ingrese el nombre del jugador "<<i+1<<":"<<endl;
        cin>>nombre;
        cout<<"Ingrese el edad del jugador "<<nombre<<":"<<endl;
        cin>>edad;
        cout<<"Ingrese la talla del jugador "<<nombre<<":"<<endl;
        cin>>talla;
        A[i].nombre=nombre;
        A[i].edad=edad;
        A[i].talla=talla;
    }
    mostrar_total(A,longitud);
}
int main(){
    int longitud;
    cout<<"Ingrese el numero de jugadores."<<endl;
    cin>>longitud;
    Jugadores personas[100];
    llenar_datos(personas,longitud);
}
*/
//Ejercicio 4
struct Empresa{
    string nombre;
    char sexo;
    double sueldo;
};
typedef struct Empresa Sueldo;
void llenar_Datos(Sueldo A[],int longitud){
    for(int i=0;i<longitud;i++){
        string nombre;
        char sexo;
        double sueldo;
        cout<<"Ingrese el nombre del empleado "<<i+1<<" :"<<endl;
        cin>>nombre;
        A[i].nombre=nombre;
        while(true){
            cout<<"Ingrese el sexo del empleado "<<nombre<<"(M/F) :"<<endl;
            cin>>sexo;
            if(sexo=='M'||sexo=='m'){
                A[i].sexo=sexo;
                break;
            }
            else if(sexo=='F'||sexo=='f'){
                A[i].sexo=sexo;
                break;
            }
            else{
                cout<<"Ingreso una opcion incorrecta. Vuelva a intentarlo."<<endl;
            }
        }
        cout<<"Ingrese el sueldo del empleado "<<nombre<<" :"<<endl;
        cin>>sueldo;
        A[i].sueldo=sueldo;
        cout<<endl;
    }
}
void mostrar_ma_o_me(Sueldo A[],int longitud){
    double mayor;
    int numero1;
    mayor=A[0].sueldo;
    for(int i=0;i<longitud;i++){
        if(mayor<A[i].sueldo){
            mayor=A[i].sueldo;
            numero1=i;
        }
    }
    double menor=mayor;
    int numero2;
    for(int j=0;j<longitud-1;j++){
        if(menor>A[j].sueldo){
            menor=A[j].sueldo;
            numero2=j;
        }
    }
    cout<<"El sueldo mayor lo tiene "<<A[numero1].nombre<<" y es: "<<mayor<<endl;
    cout<<"El sueldo menor lo tiene "<<A[numero2].nombre<<" y es: "<<menor<<endl;
}
int main(){
    int longitud;
    cout<<"Ingrese la cantidad de empleados que hay en la empresa:"<<endl;
    cin>>longitud;
    Sueldo sueldo[100];
    llenar_Datos(sueldo,longitud);
    mostrar_ma_o_me(sueldo,longitud);
}