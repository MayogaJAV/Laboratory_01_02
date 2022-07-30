//CProductMacOS.h
#pragma once
#include <iostream>
#include "AbstractFactory.h"
class CProductMacOS :public AbstractProductMacOS {
public:
	std::string Draw() const override {
		return "Dibujando Button MacOS";
	}
};
