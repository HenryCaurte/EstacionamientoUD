#include "Carro.h"
#include "Moto.h"
#include <map>
#include <vector>
#include <conio.h>
#define NNcar 2 
//#include "Funciones.h"

#ifndef Estacionamiento_H
#define Estacionamiento_H

template<typename Map>
inline void anadir(string a1, Map &id, Movil& a) {  //añadir un auto o moto
	for (auto &i : id) {
		if (i.second == true) { // Busca un lugar abierto
			string aux = a1 + to_string(i.first); // combierto el numero que le toca mediante el diccionario a string para el ID A,B,C
			i.second = false;
			a.setID(aux); // asigna la id
			break;
		}
	}
}


class Estacionamiento {

private:
	int n1; //Nivel 1
	int n2; //Nivel 2
	int n3; //Nivel 3

public:
	map<int, bool> id1;
	map<int, bool> id2;
	map<int, bool> id3;

	// Constructor
	Estacionamiento(int, int, int); // n1, n2, hora
	//~Estacionamiento();

	//funciones de acceso:
	int getN1();
	int getN2();
	int getN3();

	void delId1(string,vector<Carro>&p);
	void delId2(string,vector<Carro>& p);
	void delId3(string,vector<Moto>& p);

	void addCar(Carro&, int);
	void addMoto(Moto&);


};

#endif
