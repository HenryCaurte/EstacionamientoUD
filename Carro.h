#pragma once

#include <iostream>
#include <string>
#include "Movil.h"
using namespace std;

#ifndef Carro_H
#define Carro_h

class Carro : public Movil {
	string tipo = "Carro";
	
public:


	string tipop() {
		return tipo;
	}


};


#endif

