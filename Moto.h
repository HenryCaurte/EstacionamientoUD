#pragma once

#include <iostream>
#include <string>
#include "Movil.h"

using namespace std;

#ifndef Moto_H
#define	Moro_H


class Moto :public Movil {
	string Tipo = "Moto";
public:

	string tipo() {
		return Tipo;
	}

};


#endif