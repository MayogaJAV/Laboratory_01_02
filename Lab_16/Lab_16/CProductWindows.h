//CProductWindows.h
#pragma once
#include <iostream>
#include "AbstractFactory.h"
class CProductWindows : public AbstractProductWindows {
public:
	std::string Draw() const override {
		return "Dibujando Button Windows.";
	}
};
