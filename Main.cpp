#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <vector>
#include "Estacionamiento.h"
#include "menus.h"
#include "Movil.h"
#include "Carro.h"
#include "Moto.h"
#include "Funciones.h"
using namespace std;


int main() {
	out << "  ID  |  Hora  |  Placa   |  Usuario   |" << endl;

	int i = 0;// Creado para ordenar carros
	int j = 0; //creado para ordenar motos
	// quitar
	string quit;
	// Para Estacionamiento
	int n1 = 0;
	int n2 = 0;
	int n3 = 0;

	vector<Carro> a; // creo los objetos dinamicos Carro
	vector<Moto> b;

	menuP(n1, n2, n3);
	int cant = 30;

	Estacionamiento E1(n1, n2, n3); // Creo la clase estacionamiento
	//E1.getId1();

	int o1; // opcion 1

	do {

		menu1(o1,E1);

		switch (o1) {
		case 1:
			validacion(val);// validacion de usuario

			if (VerBD(val)) {
				num1(b, a, E1, i, j);
				break;
			}
			else {
				cout << "No se encuentra Registrado. " << endl;
				_getch();
				break;
			}
		case 2:
			system("cls");
			cout << "Id del movil que desea quitar? " << endl;
			cin >> quit;
			switch (quit[0]) {
			case 'A':
				for (auto ij : a) {
					if (!quit.compare(ij.getID())) {
						E1.delId1(quit, a);
						break;
					}

				}
				/*E1.getId1(); //identificar
				_getch();*/
				break;
			case 'B':
				for (auto ij : a) {
					if (!quit.compare(ij.getID())) {
						E1.delId2(quit, a);
						break;
					}
				}

				break;
			case 'C':
				for (auto ij : b) {
					if (!quit.compare(ij.getID())) {
						E1.delId3(quit, b);
						break;
					}
				}
				break;
			default:
				break;
			}


			break;
		case 3:
			num3(a, b);
			_getch();
			break;
		case 4:
			cout << "ESTA BIEN, VUELVE PRONTO" << endl;
			break;
		default:

			break;
		}
	} while (true);

	return 0;
}
