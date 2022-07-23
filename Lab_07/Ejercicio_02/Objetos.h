#ifndef OBJETOS_H
#define OBJETOS_H
#include<iostream>
#include "Color.h"
#include "Material.h"
using namespace std;
class Objetos:public Color ,public Material {
public:
	Objetos();
	~Objetos();
	void descripcion(string,string,string);
};

#endif

