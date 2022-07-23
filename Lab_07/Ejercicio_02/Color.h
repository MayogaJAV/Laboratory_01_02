#ifndef COLOR_H
#define COLOR_H
#include<iostream>
using namespace std;
class Color {
protected:
	string rojo="rojo";
	string verde="verde";
	string azul="azul";
public:
	Color();
	~Color();
	string getrojo();
	string getverde();
	string getazul();
};

#endif

