//Lista_ordenada.h
#include <iostream>
using namespace std;
template<typename X,int longitud>
class Lista_ordenada{
    private:
        X ArrarGenerico[longitud];
    public:
        Lista_ordenada(X ArrayGe[]){
            for(int i=0;i<longitud;i++){
                ArrarGenerico[i]=ArrayGe[i];
            }
        }
        ~Lista_ordenada(){}
        void mostrar(){
            cout<<"Lista=";
            for(int i=0;i<longitud;i++){
                cout<<"["<<ArrarGenerico[i]<<"]";
            }
            cout<<endl;
        }
        void ascendete(){
            for(int i=0;i<longitud;i++){
                X aux;
                for(int j=0;j<longitud-1;j++){
                    if(ArrarGenerico[j]>ArrarGenerico[j+1]){
                        aux=ArrarGenerico[j];
                        ArrarGenerico[j]=ArrarGenerico[j+1];
                        ArrarGenerico[j+1]=aux;
                    }
                }
            }
            mostrar();
        }
        void descendete(){
            for(int i=0;i<longitud;i++){  
                X aux;
                for(int j=0;j<longitud-1;j++){
                    if(ArrarGenerico[j]<ArrarGenerico[j+1]){
                        aux=ArrarGenerico[j+1];
                        ArrarGenerico[j+1]=ArrarGenerico[j];
                        ArrarGenerico[j]=aux;
                    }
                }
            }
            mostrar();
        }

};