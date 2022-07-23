#ifndef MATERIAL_H
#define MATERIAL_H
#include<iostream>
using namespace std;
class Material {
protected:
	string madera;
	string vidrio;
	string plastico;
	string carton;
public:
	Material();
	~Material();
};

#endif

