#include <iostream>
#include <vector>
#include "Director.h"
#include "EspecificBuilder.h"
void Menu(Director& director,EspecificBuilder* &pieza) {
	director.set_builder(pieza);
	int opcion;
	while (true) {
		std::cout << "Ingrese la opcion que desea: " << std::endl;
		std::cout << "\t1. Ingresar datos. " << std::endl;
		std::cout << "\t2. Mostrar datos. " << std::endl;
		std::cout << "\t3. Salir. " << std::endl;
		std::cin >> opcion;
		if (opcion == 1) {
			int opcion2;
			std::cout << "Elija las piezas del automovil: " << std::endl;
			std::cout << "\t1. Puertas. " << std::endl;
			std::cout << "\t2. Llantas. " << std::endl;
			std::cout << "\t3. Timon. " << std::endl;
			std::cout << "\t4. Asientos. " << std::endl;
			std::cout << "\t5. Motor. " << std::endl;
			std::cout << "\t6. Espejos. " << std::endl;
			std::cout << "\t7. Vidrios. " << std::endl;
			std::cout << "\t8. Salir. " << std::endl;
			std::cin >> opcion2;
			while (true) {
				if (opcion2 == 1) {
					Componente vector;
					std::cout << "Elija el color que tendra las Puertas. " << std::endl;
					std::cin >> vector.color;
					vector.material = "Puertas";
					director.BuildMaterial(vector);
					break;
				}
				else if (opcion2 == 2) {
					Componente vector;
					std::cout << "Elija el color que tendra las Llantas. " << std::endl;
					std::cin >> vector.color;
					vector.material = "Llantas";
					director.BuildMaterial(vector);
					break;
				}
				else if (opcion2 == 3) {
					Componente vector;
					std::cout << "Elija el color que tendra el Timon. " << std::endl;
					std::cin >> vector.color;
					vector.material = "Timon";
					director.BuildMaterial(vector);
					break;
				}
				else if (opcion2 == 4) {
					Componente vector;
					std::cout << "Elija el color que tendra los Asientos. " << std::endl;
					std::cin >> vector.color;
					vector.material = "Asientos";
					director.BuildMaterial(vector);
					break;
				}
				else if (opcion2 == 5) {
					Componente vector;
					std::cout << "Elija el color que tendra los Espejos. " << std::endl;
					std::cin >> vector.color;
					vector.material = "Espejos";
					director.BuildMaterial(vector);
					break;
				}
				else if (opcion2 == 6) {
					Componente vector;
					std::cout << "Elija el color que tendra el Motor. " << std::endl;
					std::cin >> vector.color;
					vector.material = "Motor";
					director.BuildMaterial(vector);
					break;
				}
				else if (opcion2 == 7) {
					Componente vector;
					std::cout << "Elija el color que tendra los Vidrios. " << std::endl;
					std::cin >> vector.color;
					vector.material = "Vidrios";
					director.BuildMaterial(vector);
					break;
				}
				else if (opcion2 == 8) {
					break;
				}
				else {
					std::cout << "La opcion no es correcta. " << std::endl;
				}
			}
		}
		else if (opcion == 2) {
			pieza->GetProducto()->MostrarLista();
		}
		else if (opcion == 3) {
			break;
		}
		else {
			std::cout << "La opcion no es correcta. " << std::endl;
		}
	}
	
}
void Cliente(Director& director) {
	EspecificBuilder* pieza = new EspecificBuilder();
	Menu(director,pieza);
	delete pieza;
}
int main() {
	Director* director = new Director();
	Cliente(*director);
	delete director;
	return 0;
}