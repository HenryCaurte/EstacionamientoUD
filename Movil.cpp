#include "Movil.h"


Movil::Movil() {}
Movil::Movil(string a) : placa(a) {}


// SETTERS
void Movil::setUsuario(string a) {
	Usuario = a;
}
void Movil::setPlaca(string a) {
	placa = a;
}
void Movil::setHora(string p) {
	hora = p;
}
void Movil::setID(string p) {
	this->ID = p;
}


// GETTERS
string Movil::getUsuario() {
	return Usuario;
}
string Movil::getPlaca() {
	return placa;
}
string Movil::getHora() {
	return hora;
}

string Movil::getID() {
	return ID;
}