//Calculadora.h
#pragma once
#include <iostream>
template<typename X>
class Calculadora {
private:
	X num1;
	X num2;
public:
	Calculadora(X num1,X num2);
	~Calculadora() {};
	X suma();
	X resta();
	X multiplicacion();
	X division();
};
template<typename X>
Calculadora<X>::Calculadora(X num1, X num2) {
	this->num1 = num1;
	this->num2 = num2;

}
template<typename X>
X Calculadora<X>:: suma() {
	return num1 + num2;
}
template<typename X>
X Calculadora<X>::resta() {
	return num1 - num2;
}
template<typename X>
X Calculadora<X>::multiplicacion() {
	return num1 * num2;
}
template<typename X>
X Calculadora<X>::division() {
	return num1 / num2;
}