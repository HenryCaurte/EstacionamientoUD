#pragma once

#include <iostream>
#include <string>

using namespace std;

static string val;

#ifndef Movil_H
#define Movil_H


class Movil {
	string placa;
	string Usuario;
	string ID;
	string hora;
	

public:
	Movil();
	Movil(string); // constructor

// Setters y Getters

	void setUsuario(string);
	void setPlaca(string);
	void setHora(string);
	void setID(string);

	string getUsuario(void);
	string getPlaca(void);
	string getID(void);
	string getHora(void);

};


#endif
