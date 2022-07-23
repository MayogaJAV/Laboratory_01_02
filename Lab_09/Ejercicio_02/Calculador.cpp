//Calculadora.cpp
#include "Calculadora.h"
#include <iostream>
using namespace std;
int main(){
    while(true){
        char operador;
        cout<<"Seleccione el tipo de dato que quiere operar: "<<endl;
        cout<<"1. Int "<<endl;
        cout<<"2. Float"<<endl;
        cout<<"3. Salir"<<endl;
        cin>>operador;
        if(operador=='1'){
            int num1,num2;
            cout<<"Ingrese el primer numero:"<<endl;
            cin>>num1;
            cout<<"Ingrese el segundo numero:"<<endl;
            cin>>num2;
            Calculadora<int> Entero(num1,num2);
            while(true){
                int operacion;
                cout<<"Elija la operacion que desea realizar:"<<endl;
                cout<<"1. Suma"<<endl;
                cout<<"2. Resta"<<endl;
                cout<<"3. Multiplicacion"<<endl;
                cout<<"4. Division"<<endl;
                cout<<"5. Salir"<<endl;
                cin>>operacion;
                if(operacion==1){
                    cout<<"Suma:"<<Entero.suma()<<endl;
                }
                else if(operacion==2){
                    cout<<"Resta:"<<Entero.resta()<<endl;
                }
                else if(operacion==3){
                    cout<<"Multilplicacion:"<<Entero.multiplicacion()<<endl;
                }
                else if(operacion==4){
                    cout<<"Division:"<<Entero.division()<<endl;
                }
                else if(operacion==5){
                    break;
                }
                else{
                    cout<<"Vuelve a intentarlo."<<endl;
                }
            }
        }
        else if(operador=='2'){
            float num1,num2;
            cout<<"Ingrese el primer numero:"<<endl;
            cin>>num1;
            cout<<"Ingrese el segundo numero:"<<endl;
            cin>>num2;
            Calculadora<float> Decimal(num1,num2);
            while(true){
                int operacion;
                cout<<"Elija la operacion que desea realizar:"<<endl;
                cout<<"1. Suma"<<endl;
                cout<<"2. Resta"<<endl;
                cout<<"3. Multiplicacion"<<endl;
                cout<<"4. Division"<<endl;
                cout<<"5. Salir"<<endl;
                cin>>operacion;
                if(operacion==1){
                    cout<<"Suma:"<<Decimal.suma()<<endl;
                }
                else if(operacion==2){
                    cout<<"Resta:"<<Decimal.resta()<<endl;
                }
                else if(operacion==3){
                    cout<<"Multiplicacion:"<<Decimal.multiplicacion()<<endl;
                }
                else if(operacion==4){
                    cout<<"Division:"<<Decimal.division()<<endl;
                }
                else if(operacion==5){
                    break;
                }
                else{
                    cout<<"Vuelve a intentarlo."<<endl;
                }
            }
        }
        else if(operador=='3'){
            break;
        }
        else{
            cout<<"Vuelva a intentarlo."<<endl;
            main();
        }
    }
}