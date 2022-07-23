//Pilas.cpp
#include <iostream>
#include <random>
#include <list>
#include <fstream>
#include <string>
#include <vector>
#include <ctime>
#include <stdlib.h>
#include <string.h>
#include <regex>
#include <ctime>
#include <iomanip>
#include "Pilas.h"
using namespace std;
ListaE* crear_lista(int numero_n){
	ListaE* nuevo=new ListaE(numero_n);
	nuevo->next=NULL;
	return nuevo;
}
void Insertar_NumPila(ListaE* &Lista,ListaE*&Listaaux,int numero){//0
	if(Lista==NULL){
		Lista=crear_lista(numero);
		Listaaux=Lista;
	}
	else{
		if((Listaaux->next)==NULL){
			int aux;
			Listaaux=crear_lista(numero);
			aux=Lista->numero;
			Lista->numero=Listaaux->numero;
			Listaaux->numero=aux;
			Insertar_NumPila(Lista->next,Listaaux,aux);
		}
		else{
			Insertar_NumPila(Lista->next,Listaaux,numero);
		}
	}
}
void Insertar_NumPila2(ListaE* &Lista,ListaE*&Listaaux,int numero){
	if(Lista==NULL){
		Lista=crear_lista(numero);
		Listaaux=Lista;
	}
	else{
		Insertar_NumPila2(Lista->next,Listaaux,numero);
	}
}
void Encontrar_numeros_espe(ListaE*& Lista,int numero,int& i){
	if(Lista!=NULL){
		if((Lista->numero)==numero){
			i++;
			Encontrar_numeros_espe(Lista->next,numero,i);
		}
		else{
			Encontrar_numeros_espe(Lista->next,numero,i);
		}
	}
}
void Eliminar_numeros_espe(ListaE*& Lista,int numero,int i,int& j){
	if(Lista!=NULL){
		if((Lista->numero)==numero){
			j++;
			if(j==i){
				Lista=Lista->next;
			}
			else{
				Eliminar_numeros_espe(Lista->next,numero,i,j);
			}
		}
		else{
			Eliminar_numeros_espe(Lista->next,numero,i,j);
		}
	}
}
void Eliminar_numeros_hanoi(ListaE*& Lista,int numero){
	if(Lista!=NULL){
		if((Lista->numero)==numero){
			Lista=Lista->next;
		}
		else{
			Eliminar_numeros_hanoi(Lista->next,numero);
		}
	}
}
void mostrar_lista(ListaE* &Lista){
	if(Lista!=NULL){
		cout<<"Nodo: "<<Lista->numero<<endl;
		mostrar_lista(Lista->next);
	}
}
void mostrar_thanoi1(ListaE* &Lista){
	if(Lista!=NULL){
		cout<<Lista->numero;
		mostrar_thanoi1(Lista->next);
	}
}
void mostrar_thanoi2(ListaE* &Lista){
	if(Lista!=NULL){
		cout<<Lista->numero;
		mostrar_thanoi2(Lista->next);
	}
}
void mostrar_thanoi3(ListaE* &Lista){
	if(Lista!=NULL){
		cout<<Lista->numero;
		mostrar_thanoi3(Lista->next);
	}
}
void mostrar_torres(ListaE* &Lista1,ListaE* &Lista2,ListaE* &Lista3){
	cout<<"|";
	mostrar_thanoi1(Lista1);
	cout<<endl;
	cout<<"|";
	mostrar_thanoi2(Lista2);
	cout<<endl;
	cout<<"|";
	mostrar_thanoi3(Lista3);
	cout<<endl;
	
}
void thanoi(ListaE*& TorreA,ListaE*& TorreC,ListaE*& TorreB,ListaE*& Torreaux,int numero,char A,char C,char B){
	if(numero==1){
		cout<<"------"<<endl;
		cout<<endl;
		Eliminar_numeros_hanoi(TorreA,numero);
		Insertar_NumPila2(TorreC,Torreaux,numero);
		if(A=='A'){
			if(C=='B'){
				mostrar_torres(TorreA,TorreC,TorreB);
			}
			else if(C=='C'){
				mostrar_torres(TorreA,TorreB,TorreC);
			}
		}
		else if(A=='B'){
			if(C=='A'){
				mostrar_torres(TorreB,TorreC,TorreA);
			}
			else if(C=='C'){
				mostrar_torres(TorreB,TorreA,TorreC);
			}
		}
		else if(A=='C'){
			if(C=='A'){
				mostrar_torres(TorreC,TorreB,TorreA);
			}
			else if(C=='B'){
				mostrar_torres(TorreC,TorreA,TorreB);
			}
		}
	}
	else{
		thanoi(TorreA,TorreB,TorreC,Torreaux,numero-1,A,B,C);
		cout<<"------"<<endl;
		cout<<endl;
		Eliminar_numeros_hanoi(TorreA,numero);
		Insertar_NumPila2(TorreC,Torreaux,numero);
		if(A=='A'){
			if(C=='B'){
				mostrar_torres(TorreA,TorreC,TorreB);
			}
			else if(C=='C'){
				mostrar_torres(TorreA,TorreB,TorreC);
			}
		}
		else if(A=='B'){
			if(C=='A'){
				mostrar_torres(TorreB,TorreC,TorreA);
			}
			else if(C=='C'){
				mostrar_torres(TorreB,TorreA,TorreC);
			}
		}
		else if(A=='C'){
			if(C=='A'){
				mostrar_torres(TorreC,TorreB,TorreA);
			}
			else if(C=='B'){
				mostrar_torres(TorreC,TorreA,TorreB);
			}
		}
		thanoi(TorreB,TorreC,TorreA,Torreaux,numero-1,B,C,A);
		

	}
}
int main(){
	int opcion,numnodos;
	cout<<"Ingrese la cantidad de nodos:"<<endl;
	cin>>numnodos;
	int contador=0;
	int contadorlista2=0;
	ListaE* Nodo=NULL;
	ListaE* Nodoaux1=NULL;
	ListaE* Nodo2=NULL;
	ListaE* Nodoaux2=NULL;
	while(true){
		cout<<"Ingrese la opcion que desea:"<<endl;
		cout<<"1. Ingresar datos en forma de pila."<<endl;
		cout<<"2. Eliminar un nodo especifico."<<endl;
		cout<<"3. Buscar un dato en la pila."<<endl;
		cout<<"4. Mostrar pila."<<endl;
		cout<<"5. Torre de Hanoi."<<endl;
		cout<<"6. Salir."<<endl;
		cin>>opcion;
		if(opcion==1){
			srand(time(NULL));
			if(contador!=1){
				int opcion;
				cout<<"Ingrese la opcion:"<<endl;
				cout<<"1. Ingresar datos manualmente."<<endl;
				cout<<"2. Ingresar datos aleatoriamente."<<endl;
				cin>>opcion;
				if(opcion==1){
					for(int i=0;i<numnodos;i++){
						int numero;
						cout<<"Ingrese el nodo:"<<endl;
						cin>>numero;
						Insertar_NumPila(Nodo,Nodoaux1,numero);
						contador=1;
					}
				}
				else if(opcion==2){
					for(int i=0;i<numnodos;i++){
						int numero;
						numero=1+rand()%(11-1);
						Insertar_NumPila(Nodo,Nodoaux1,numero);
						contador=1;
					}
				}
				else{
					cout<<"La opcion es incorrecta. Vuelva a Intentarlo."<<endl;
				}
			}
			else{
				cout<<"Los elementos ya han sido ingresados."<<endl;
			}
		}
		else if(opcion==2){
			int contador=0;
			int contador2=0;
			int numero;
			cout<<"Indique el nodo:"<<endl;
			cin>>numero;
			Encontrar_numeros_espe(Nodo,numero,contador);
			if(contador!=0){
				cout<<"Se encontro el nodo "<<numero<<" en la pila."<<endl;
				Eliminar_numeros_espe(Nodo,numero,(contador-(contador-1)),contador2);
			}
			else{
				cout<<"El nodo indicado no se encuentra en la pila."<<endl;
			}
		}
		else if(opcion==3){
			int contador=0;
			int numero;
			cout<<"Indique el nodo a encontrar:"<<endl;
			cin>>numero;
			Encontrar_numeros_espe(Nodo,numero,contador);
			if(contador!=0){
				cout<<"Hay "<<contador<<" nodos que tienen el valor de "<<numero<<" en la pila."<<endl;
			}
			else{
				cout<<"El nodo indicado no se encuentra en la pila."<<endl;
			}
		}
		else if(opcion==4){
			cout<<"############LISTA DE NODOS############"<<endl;
			mostrar_lista(Nodo);
		}
		else if(opcion==5){
			int n;
			ListaE* Torre1=NULL;
			ListaE* Torre2=NULL;
			ListaE* Torre3=NULL;
			ListaE* Torreaux=NULL;
			cout<<"###### TORRES DE HANOI ######"<<endl;
			cout<<"Ingrese el numero de aros que tendra el juego "<<endl;
			cin>>n;
			cout<<endl;
			cout<<"Empieza juego"<<endl;
			for(int i=n;i>0;i--){
				Insertar_NumPila2(Torre1,Torreaux,i);
			}
			mostrar_torres(Torre1,Torre2,Torre3);
			thanoi(Torre1,Torre3,Torre2,Torreaux,n,'A','C','B');
			cout<<endl;
			Torre1->~ListaE();
			Torre2->~ListaE();
			Torre3->~ListaE();
		}
		else if(opcion==6){
			Nodo->~ListaE();
			break;
		}
		else{
			cout<<"Vuelva a intentarlo."<<endl;
		}
	}
}
