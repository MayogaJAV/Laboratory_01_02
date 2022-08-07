//Source.cpp
#include <iostream>
#include "Calculadora.h"
int main() {
	char dato1 = 'r';
	char dato2 = 'a';
	std::cout << "##### CALCULADORA #####" << std::endl;
	Calculadora<int>* calc = new Calculadora<int>(dato1,dato2);
	std::cout << "\tLa suma de ambos valores es: " << calc->suma() << std::endl;
	std::cout << "\tLa resta de ambos valores es: " << calc->resta() << std::endl;
	std::cout << "\tLa multiplicacion de ambos valores es: " << calc->multiplicacion() << std::endl;
	std::cout << "\tLa division de ambos valores es: " << calc->division() << std::endl;
	delete calc;
}