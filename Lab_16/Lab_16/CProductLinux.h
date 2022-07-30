//CProductLinux.h
#pragma once
#include <iostream>
#include "AbstractFactory.h"
class CProductLinux :public AbstractProductLinux{
public:
	std::string Draw() const override {
		return "Dibujando Button Linux.";
	}
};
