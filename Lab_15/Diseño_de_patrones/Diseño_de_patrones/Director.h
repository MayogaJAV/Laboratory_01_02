#pragma once
#include <iostream>
#include <vector>
#include "Builder.h"

class Director {
private:
	Builder* builder;
public:
	Director() {}
	~Director() {}
	void set_builder(Builder* builder) {
		this->builder = builder;
	}
	void BuildMaterial(Componente Material) {
		builder->ProducirMateriales(Material);
	}
	Builder* GetBuilder() {
		return this->builder;
	}
};