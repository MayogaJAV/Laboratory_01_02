//Calculadora.h
#include<iostream>
using namespace std;
template<typename Num>
class Calculadora {
private:
	Num numero1;
    Num numero2;
public:
	Calculadora(Num numero1,Num numero2){
		this->numero1=numero1;
		this->numero2=numero2;
	};
	~Calculadora(){};
	Num suma(){
		Num resultado;
        resultado=numero1+numero2;
		return resultado;
	};
	Num resta(){
		Num resultado;
        Num max=numero1;
        if(numero2>max){
            max=numero2;
            resultado=max-numero1;
            return resultado;
        }
        else{
            resultado=max-numero2;
            return resultado;
        }
	};
    Num multiplicacion(){
		Num resultado;
        resultado=numero1*numero2;
        return resultado;
	};
    Num division(){
        Num resultado;
        Num max=numero1;
        if(numero2>max){
            max=numero2;
            resultado=max/numero1;
            return resultado;
        }
        else{
            resultado=max/numero2;
            return resultado;
        }
    }
};