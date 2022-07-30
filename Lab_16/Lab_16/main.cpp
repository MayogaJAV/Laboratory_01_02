//main.cpp
#include <iostream>
#include "CFactory.h"
void Aplication(const AbstractFactory& f,int const num) {
	if (num == 1) {
		const AbstractProductWindows* Windows = f.CrearProductoWindows();
		std::cout << "\t" << Windows->Draw() << std::endl;
		delete Windows;
	}
	else if (num == 2) {
		const AbstractProductLinux* Linux = f.CrearProductoLinux();
		std::cout << "\t" << Linux->Draw() << std::endl;
		delete Linux;
	}
	else if (num == 3) {
		const AbstractProductMacOS* MacOS = f.CrearProductoMacOS();
		std::cout << "\t" << MacOS->Draw() << std::endl;
		delete MacOS;
	}
	else{
		std::cout << "No se encontra el tipo de dato." << std::endl;
	}
}
int main() {
	std::cout << "Cliente: Windows "<<std::endl;
	Button* f1 = new Button();
	Aplication(*f1, 1); // 1 - Windows
	delete f1;
	std::cout << "Cliente: Linux "<<std::endl;
	Button* f2 = new Button();
	Aplication(*f2, 2); // 1 - Windows
	delete f2;
	std::cout << "Cliente: MacOS " << std::endl;
	Button* f3 = new Button();
	Aplication(*f3, 3); // 1 - Windows
	delete f3;
	return 0;
}