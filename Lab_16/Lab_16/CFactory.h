//CFactory.h
#pragma once
#include <iostream>
#include "CProductLinux.h"
#include "CProductMacOS.h"
#include "CProductWindows.h"
class Button: public AbstractFactory {
public:
	AbstractProductLinux* CrearProductoLinux()const override {
		return new CProductLinux();
	};
	AbstractProductMacOS* CrearProductoMacOS() const override {
		return new CProductMacOS();
	}
	AbstractProductWindows* CrearProductoWindows() const override {
		return new CProductWindows();
	}
};
