//AbstractFactory.h
#pragma once
#include <iostream>
#include "AbstractProductWindows.h"
#include "AbstractProductMacOS.h"
#include "AbstractProductLinux.h"
class AbstractFactory {
public:
	virtual AbstractProductWindows* CrearProductoWindows() const = 0;
	virtual AbstractProductMacOS* CrearProductoMacOS() const = 0;
	virtual AbstractProductLinux* CrearProductoLinux() const = 0;
};
