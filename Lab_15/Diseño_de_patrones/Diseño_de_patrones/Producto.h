#pragma once
#include <iostream>
#include <vector>
struct Material {
	std::string material;
	std::string color;
};
typedef Material Componente;
class Producto {
public:
	std::vector<Componente> listaCompo;
	void MostrarLista() const {
		std::cout << "LISTA DE MATERIALES: "<< std::endl;
		for (int i = 0; i < listaCompo.size(); i++) {
			std::cout << "Caracteristicas del material " << i+1 << " :" << std::endl;
			std::cout << "\tMaterial= " << listaCompo[i].material << std::endl;
			std::cout << "\tColor= " << listaCompo[i].color << std::endl;
			std::cout << std::endl;
		}
	}
};
