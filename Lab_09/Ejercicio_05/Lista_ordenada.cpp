//Lista_ordenada.cpp
#include "Lista_ordenada.h"
#include <iostream>
using namespace std;
int main(){
    int ArrayEntero[9]={5,7,2,8,6,1,3,4,9};
    float ArrayFloat[5]={10.1,8.4,3.6,4.4,11.2};
    Lista_ordenada<int,9> Entero1(ArrayEntero);
    Lista_ordenada<int,9> Entero2(ArrayEntero);
    Lista_ordenada<float,5> Decimal1(ArrayFloat);
    Lista_ordenada<float,5> Decimal2(ArrayFloat);
    cout<<"LISTA ENTEROS:"<<endl;
    cout<<"Lista de enteros ordenada ascendetemente: "<<endl;
    Entero1.ascendete();
    cout<<"Lista de enteros ordenada descendetemente: "<<endl;
    Entero2.descendete();
    cout<<endl;
    cout<<"LISTA DECIMALES:"<<endl;
    cout<<"Lista de decimales ordenada ascendetemente: "<<endl;
    Decimal1.ascendete();
    cout<<"Lista de decimales ordenada descendetemente: "<<endl;
    Decimal2.descendete();
}