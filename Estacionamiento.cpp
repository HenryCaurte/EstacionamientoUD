#include "Estacionamiento.h"



Estacionamiento::Estacionamiento(int a, int b, int c) { // a - > nivel 1 ; b -> Nivel 2
	n1 = a;
	n2 = b;
	n3 = c;
	for (int i = 1; i <= a; i++) {
		id1.emplace(pair<int, bool>(i, true));
	}
	for (int i = 1; i <= b; i++) {
		id2.emplace(pair<int, bool>(i, true));
	}
	for (int i = 1; i <= c; i++) {
		id3.emplace(pair<int, bool>(i, true));
	}
}


int Estacionamiento::getN1() {
	return n1;
}
int Estacionamiento::getN2() {
	return n2;
}
int Estacionamiento::getN3() {
	return n3;
}



void Estacionamiento::delId1(string a, vector<Carro> &p) {
	for (auto &i : p) {
		if ( i.getID() == a)
		{
			i.setID("--");
			break;
		}
	}
	a = a.substr(1, a.length() - 1);
	//cout << a << endl;
	//_getch();
	int cambio = stoi(a);
	cout << cambio << endl;
	//_getch();

	for (auto &i : id1) {
		cout << i.first << " - " << cambio << endl;
		//_getch();
		if (i.first == cambio) {
			i.second = true;
			//cout << i.first <<"ENCONTRO"<< endl;
			//_getch();
			break;
		}
	}
	
	n1++;

}

void Estacionamiento::delId2(string a,vector<Carro>& p) {
	for (auto &i : p) {
		if (i.getID() == a)
		{
			i.setID("--");
			break;
		}
	}
	a = a.substr(1, a.length());
	int cambio = stoi(a);
	for (auto &i : id2) {
		if (i.first == cambio) {
			i.second = true;
			break;
		}
	}

	n2++;
}

void Estacionamiento::delId3(string a, vector<Moto>& p) {
	for (auto& i : p) {
		if (i.getID() == a)
		{
			i.setID("--");
			break;
		}
	}
	a = a.substr(1, a.length() - 1); // Quitar el primer caracter de
	int cambio = stoi(a); // transformar de string a entero
	for (auto &i : id3) {
		if (i.first == cambio) {
			i.second = true;
			break;
		}
	}

	n3++;


}

void Estacionamiento::addCar(Carro& a, int nivel) { // añado un id
	string a1;
	int cont = 0;
	switch (nivel) {
	case 1:
		anadir("A",id1, a);
		n1--;
		break;
	case 2:
		anadir("B",id2, a);
		n2--;
		break;
	default:
		break;
	}


}

void Estacionamiento::addMoto(Moto& a) {
	int cont = 0;
	anadir("C",id2, a);
	n3--;
}
