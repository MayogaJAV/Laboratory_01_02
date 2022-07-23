#pragma once
#include <iostream>
#include <vector>
#include "Builder.h"
#include "Producto.h"
class EspecificBuilder: public Builder {
private:
	Producto* producto;
public:
	EspecificBuilder() {
		this->Reset();
	}
	~EspecificBuilder() {
		delete producto;
	}
	void Reset() {
		this->producto = new Producto();
	}
	void ProducirMateriales(Componente Material)const override {
		this->producto->listaCompo.push_back(Material);
	}
	Producto* GetProducto() {
		Producto* auxproducto = this->producto;
		//this->Reset();
		return auxproducto;
	}
};