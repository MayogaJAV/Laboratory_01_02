//Correo.cpp
#include "Correo.h"
#include <iostream>
using namespace std;
int main(){
    char primeraletra;
    string apellido;
    cout<<"Ingrese la inicial de su nombre: "<<endl;
    cin>>primeraletra;
    cout<<"Ingrese su primer Apellido:"<<endl;
    cin>>apellido;
    Correo<char,string> correo(primeraletra,apellido);
    cout<<"Generando su correo insticional..."<<endl;
    correo.generarcorreo();
}