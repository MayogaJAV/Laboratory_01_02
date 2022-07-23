#include "Nacimiento.h"
#include<iostream>
#include <ctime>
#include <vector>
using namespace std;
Nacimiento::Nacimiento(string nombre,int diaP,int mesP,int anioP) {
	this->nombre=nombre;
	this->diaP=diaP;
	this->mesP=mesP;
	this->anioP=anioP;
}
Nacimiento::~Nacimiento() {	
}
void Nacimiento::edad(){
	time_t now = time(0);
	tm * time = localtime(&now);
	vector<int> mes;
	mes.push_back(01);
	mes.push_back(02);
	mes.push_back(03);
	mes.push_back(04);
	mes.push_back(05);
	mes.push_back(06);
	mes.push_back(07);
	mes.push_back(8);
	mes.push_back(9);
	mes.push_back(10);
	mes.push_back(11);
	mes.push_back(12);
	
	int year = 1900 + time->tm_year;
	int AN,M,D;
	if(year>anioP){
		AN=year-anioP;
		if(mes[time->tm_mon]>mesP){
			M=mes[time->tm_mon]-mesP+2;
			if(time->tm_mday>diaP){
				D=time->tm_mday-diaP+2;
			}
			else{
				D=diaP-time->tm_mday+2;
				M=M+2;
			}
		}
		else{
			M=mesP-mes[time->tm_mon]+2;
			AN--;
			if(time->tm_mday>diaP){
				D=time->tm_mday-diaP+2;
			}
			else{
				D=diaP-time->tm_mday+2;
				M=M+2;
			}
		}
	}
	cout<<"La edad de la persona es de: "<<AN<<" anios, "<<M<<" meses y "<<D<<" dias."<<endl;
}

