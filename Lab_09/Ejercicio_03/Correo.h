//Correo.h
#include <iostream>
using namespace std;
template<class Inicial,class Apelli>
class Correo{
    private:
        Inicial dato1;
        Apelli dato2;
    public:
        Correo(Inicial dato1,Apelli dato2){
            this->dato1=dato1;
            this->dato2=dato2;
        }
        ~Correo(){};
        void generarcorreo(){
            cout<<"Su correo institucional es: "<<dato1<<dato2<<"@unsa.edu.pe"<<endl;
        }
};