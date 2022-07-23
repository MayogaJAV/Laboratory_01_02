//Nodo.cpp
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
#include "Nodo.h"
using namespace std;
ListaE* crear_lista(int numero_n){
	ListaE* nuevo=new ListaE(numero_n);
	nuevo->next=NULL;
	return nuevo;
}
void Insertar_NumCola(ListaE* &Lista,ListaE*&Listaaux,int numero){
	if(Lista==NULL){
		Lista=crear_lista(numero);
		Listaaux=Lista;
	}
	else{
		Insertar_NumCola(Lista->next,Listaaux,numero);
	}
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
void Ingresar_Medio(ListaE*& Lista,ListaE*&Listaaux,int Inicio, int Final, int numero,int& numnodos){
	if(Lista!=NULL){
		if(Lista->numero==Inicio){
			if(Lista->next->numero==Final){
				Insertar_NumPila(Lista->next,Listaaux,numero);
				numnodos++;
			}
			else{
				Ingresar_Medio(Lista->next,Listaaux,Inicio,Final,numero,numnodos);
			}
		}
		else{
			Ingresar_Medio(Lista->next,Listaaux,Inicio,Final,numero,numnodos);
		}
	}
	else{
		cout<<"Los nodos ingresados no correctos."<<endl;
	}
}
void eliminar(ListaE*& lista) {
	lista = NULL;
}
void avanzaralultimo(ListaE*& lista) {
	if (lista->next == NULL) {
		eliminar(lista);
	}
	else {
		avanzaralultimo(lista->next);
	}
}
void Eliminar_numero(ListaE*& Lista){
	Lista=Lista->next;
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
void Ordenar_Ascendentemente(ListaE*& lista) {
	ListaE* p = lista;
	ListaE* aux = NULL;
	ListaE* sav = NULL;
	sav=crear_lista(1);
	while (p->next != NULL) {
		aux = p->next;
		while (aux != NULL) {
				if (p->numero > aux->numero) {
					sav->numero = aux->numero;
					aux->numero = p->numero;
					p->numero = sav->numero;
				}
				aux = aux->next;
			}
		p = p->next;
	}
}
void Ordenar_Descendentemente(ListaE*& lista) {
	ListaE* p = lista;
	ListaE* aux = NULL;
	ListaE* sav = NULL;
	sav=crear_lista(1);
	while (p->next != NULL) {
		aux = p->next;
		while (aux != NULL) {
				if (p->numero < aux->numero) {
					sav->numero = aux->numero;
					aux->numero = p->numero;
					p->numero = sav->numero;
				}
				aux = aux->next;
			}
		p = p->next;
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
void mostrar_lista(ListaE* &Lista){
	if(Lista!=NULL){
		cout<<"Nodo: "<<Lista->numero<<endl;
		mostrar_lista(Lista->next);
	}
}
int main(){
	int opcion,numnodos;
	cout<<"Ingrese la cantidad de nodos:"<<endl;
	cin>>numnodos;
	int contador=0;
	ListaE* Nodo=NULL;
	ListaE* Nodoaux1=NULL;
	while(true){
		cout<<"Ingrese la opcion que desea:"<<endl;
		cout<<"1. Ingresar datos en forma de pila."<<endl;
		cout<<"2. Ingresar datos en forma de cola."<<endl;
		cout<<"3. Insertar un dato en medio de dos datos de la lista."<<endl;
		cout<<"4. Eliminar el ultimo dato de la lista."<<endl;
		cout<<"5. Eliminar el primer dato de la lista."<<endl;
		cout<<"6. Eliminar un nodo especifico."<<endl;
		cout<<"7. Ordenar lista ascendentemente."<<endl;
		cout<<"8. Ordenar lista descendentemente."<<endl;
		cout<<"9. Mostrar lista."<<endl;
		cout<<"10. Salir."<<endl;
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
						Insertar_NumCola(Nodo,Nodoaux1,numero);
						contador=1;
					}
				}
				else{
					for(int i=0;i<numnodos;i++){
						int numero;
						numero=1+rand()%(11-1);
						Insertar_NumCola(Nodo,Nodoaux1,numero);
						contador=1;
					}
				}
			}
			else{
				cout<<"Los elementos ya han sido ingresados."<<endl;
			}
		}
		else if(opcion==2){
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
				else{
					for(int i=0;i<numnodos;i++){
						int numero;
						numero=1+rand()%(11-1);
						Insertar_NumPila(Nodo,Nodoaux1,numero);
						contador=1;
					}
				}
			}
			else{
				cout<<"Los elementos ya han sido ingresados."<<endl;
			}
		}
		else if(opcion==3){
			if(contador==1){
				while(true){
					cout<<"############LISTA DE NODOS############"<<endl;
					mostrar_lista(Nodo);
					int Inicial,Final,nuevonum;
					cout<<endl;
					cout<<"Ingresar los dos datos en el que estara el nuevo elemento:"<<endl;
					cout<<"Nodo Inicial: ";
					cin>>Inicial;
					cout<<"Nodo Final: ";
					cin>>Final;
					cout<<"Ingrese el nuevo dato que desea agregar:"<<endl;
					cin>>nuevonum;
					if(((Inicial>0))&&((Final>0))){
						Ingresar_Medio(Nodo,Nodoaux1,Inicial,Final,nuevonum,numnodos);
						break;
					}
					else{
						cout<<"No ingreso correctamente los datos. Vuelva a intentarlo."<<endl;
					}
				}
			}
			else{
				cout<<"Los datos aun no han sido ingresados."<<endl;
			}
		}
		else if(opcion==4){
			avanzaralultimo(Nodo);
			cout<<"Se elimino el ultimo elemento de la lista."<<endl;
		}
		else if(opcion==5){
			Eliminar_numero(Nodo);
		}
		else if(opcion==6){
			int contador=0;
			int contador2=0;
			int numero;
			int opcion;
			cout<<"Indique el nodo:"<<endl;
			cin>>numero;
			Encontrar_numeros_espe(Nodo,numero,contador);
			if(contador!=0){
				cout<<"Hay "<<contador<<" nodos que tienen el valor de "<<numero<<" en la lista."<<endl;
				while(true){
					cout<<"Escoja el nodo que desea eliminar."<<endl;
					for(int i=0;i<contador;i++){
						cout<<i+1<<"."<<"Nodo "<<i+1<<endl;
					}
					cin>>opcion;
					if((opcion>0)&&(opcion<=contador)){
						Eliminar_numeros_espe(Nodo,numero,opcion,contador2);
						break;
					}
					else{
						cout<<"El nodo ingresado es incorrecto. Vuelva a intentarlo."<<endl;
					}
				}
			}
			else{
				cout<<"El nodo indicado no se encuentra en la lista."<<endl;
			}
			
		}
		else if(opcion==7){
			Ordenar_Ascendentemente(Nodo);
		}
		else if(opcion==8){
			Ordenar_Descendentemente(Nodo);
		}
		else if(opcion==9){
			cout<<"############LISTA DE NODOS############"<<endl;
			mostrar_lista(Nodo);
		}
		else if(opcion==10){
			Nodo->~ListaE();
			break;
		}
		else{
			cout<<"Vuelva a intentarlo."<<endl;
		}
	}
}
