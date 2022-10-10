#pragma once

#include <iostream>
#include "Estacionamiento.h"
#include "menus.h"
#include "Carro.h"
#include "Moto.h"
#include <vector>
#include <string>
#include <map>


using namespace std;

#ifndef Funciones_H
#define Funciones_H

inline bool VerBD(string a) { // map
	int cont = 0;
	map<string, string> user;

	ifstream us("BaseDatos.txt"); // aca ta

	string aux;
	while (getline(us, aux)) {
		user.emplace(pair<string, string>(aux, " "));
	}

if (user.find(a) != user.end()) {
	return true;
	}

	return false;
}


void num1(vector<Moto>& b, vector<Carro>& a, Estacionamiento &E1, int& car, int& mot) { //
	string placa,hora;
	int nivel,tipo = 0;
	Carro aux;
	Moto aux2;
		menu1_1(tipo);
		if (tipo == 1) {
			auxmenu1_1(nivel); // Otro menu
			if (nivel == 1) { // para nivel 1
				for (auto &i : E1.id1) {
					if (i.second == true) {
						car = i.first - 1;
						break;
					}
				}
			}
			else if (nivel == 2){ // para nivel 2
				for (auto &i : E1.id2) {
					if (i.second == true) {
						car = i.first - 1;
						break;
					}

				}
			}
			menu1_1_1(val, placa, hora);
			do {
				if (car > a.size() - 1 || a.size() == 0) {
					aux.setPlaca(placa);
					a.push_back(aux); // este es un condicionallllll
					break;
				}
				else {
					if (a[car].getID() != "--") {
						car++;
					}
					else {
						a[car].setPlaca(placa);
						break;
					}
				}
			} while (true);
			a[car].setHora(hora);
			a[car].setUsuario(val);
			E1.addCar(a[car], nivel);
		
			out << "  " << a[car].getID() << "     " << a[car].getHora() << "       " << a[car].getPlaca() << "    " << a[car].getUsuario() << endl;
			cout << "\nTU ID ES: " << a[car].getID() << endl << endl;
			_getch();
		}

		else {
		nivel = 3;	

		for (auto i : E1.id3) { // para nivel 3
			if (i.second == true) {
				mot = i.first - 1;
				break;
			}
		}

		menu1_1_2(val, placa, hora);
		if (mot > b.size() - 1 || b.size() == 0) {
			aux2.setPlaca(placa);
			b.push_back(aux2);  
		}
		else {
			b[mot].setPlaca(placa);
		}
		b[mot].setHora(hora);
		b[mot].setUsuario(val);
		E1.addMoto(b[mot]);
		out << "  " << b[mot].getID() << "     " << b[mot].getHora() << "     " << b[mot].getPlaca() << "    " << b[mot].getUsuario() << endl;
		cout << "\nTU ID ES: " << b[mot].getID() << endl << endl;
	}
}

void num3(vector<Carro> a, vector<Moto> b) {

	cout << "Carros: " << endl;
	cout << "NIVEL 1: " << endl;
	cout << a.size()<<endl;// verificar
	for (auto p : a) {
		if (p.getID().at(0) == 'A')
			cout << " Carro: " << p.getID() << " " << p.getPlaca() << " " << p.getUsuario()<<" "<<p.getHora() << endl;
	}
	cout << "NIVEL 2: " << endl;
	for (auto p : a) {
		if (p.getID().at(0) == 'B')
			cout << " Carro: " << p.getID() << " " << p.getPlaca() << " " << p.getUsuario() << " " << p.getHora() << endl;
	}
	cout << "NIVEL 3 : // MOTOS: " << endl;
	for (auto p : b) {
		cout << " Moto: " << p.getID() << " " << p.getPlaca() << " " << p.getUsuario() <<" " << p.getHora() <<endl;
	}
}



#endif