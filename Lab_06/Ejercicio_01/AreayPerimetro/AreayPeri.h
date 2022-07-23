#ifndef AREAYPERI_H
#define AREAYPERI_H
#include <iostream>
#pragma once
class Rectangulo{
private:
	float lado;
	float lado2;
public:
	Rectangulo(float,float);
	~Rectangulo();
	void setlado(float lado);
	float getlado();
	void setlado2(float lado2);
	float getlado2();
	void area();
	void perimetro();
};
#endif

