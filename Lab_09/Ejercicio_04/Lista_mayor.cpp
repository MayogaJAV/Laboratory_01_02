//Lista_mayor.cpp
#include "Lista_mayor.h"
#include <iostream>
using namespace std;
int main(){
    int ArrayEntero[5]={10,7,2,8,6};
    float ArrayFloat[5]={12.1,8.7,5.6,8.4,1.2};
    Lista_mayor<int> Entero(ArrayEntero);
    Lista_mayor<float> Decimal(ArrayFloat);
    cout<<"LISTA ENTEROS:"<<endl;
    cout<<"El numero menor entero es: "<<Entero.menor()<<endl;
    cout<<"El numero mayor entero es: "<<Entero.mayor()<<endl;
    cout<<endl;
    cout<<"LISTA DECIMALES:"<<endl;
    cout<<"El numero menor decimal es: "<<Decimal.menor()<<endl;
    cout<<"El numero mayor decimal es: "<<Decimal.mayor()<<endl;
}

