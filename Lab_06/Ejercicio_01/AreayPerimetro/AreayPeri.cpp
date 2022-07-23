#include "AreayPeri.h"
#include <iostream>
using namespace std;
Rectangulo::Rectangulo(float lado,float lado2){
	this->lado=lado;
	this->lado2=lado2;
}
Rectangulo::~Rectangulo(){}

void Rectangulo::setlado(float lado){
	this->lado=lado;
}
float Rectangulo::getlado(){
	return lado;
}
void Rectangulo::setlado2(float lado2){
	this->lado2=lado2;
}
float Rectangulo::getlado2(){
	return lado2;
}
void Rectangulo::area(){
	float area;
	area=lado*lado2;
	cout<<"El area del rectangulo es: "<<area<<endl;
}
void Rectangulo::perimetro(){
	float perimetro;
	perimetro=(lado*2)+(lado2*2);
	cout<<"El perimetro del rectangulo es: "<<perimetro<<endl;
}

