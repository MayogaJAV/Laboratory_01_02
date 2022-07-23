//Numero.h
#include<iostream>
using namespace std;
template<typename Dato>
class Numero {
private:
	Dato numero1;
	Dato numero2;
	Dato numero3;
public:
	Numero(Dato numero1,Dato numero2,Dato numero3){
		this->numero1=numero1;
		this->numero2=numero2;
		this->numero3=numero3;
	};
	~Numero(){};
	Dato mayor(){
		Dato max;
		max=numero1;
		if(numero2>=numero1){
			max=numero2;
		}
		if(numero3>=numero1){
			max=numero3;
		}
		return max;
	};
	Dato menor(){
		Dato min;
		min=numero1;
		if(numero2<=numero1){
			min=numero2;
		}
		if(numero3<=numero1){
			min=numero3;
		}
		return min;
	};
};


