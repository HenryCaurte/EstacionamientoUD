#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
#include <time.h>
#include <algorithm>
#define Limpiar system("cls") 

using namespace std;


#ifndef menus_h
#define menus_h


ofstream out("Archivo_Dia.txt");

string mod(int a) { // pasa la hora a string para darla lindo
	string con = to_string(a);

	if (con.length() < 2) {
		con.append("0"); // agrega un 0 si los minutos son unitarios
		string con2(con.rbegin(), con.rend()); // revierte el string
		return con2;
	}

	return con;
}

inline void menuP(int& a, int& b, int& c) {
	cout << "Bienvenido:" << endl;


	cout << "Digite la capacidad del nivel 1 : " << endl; cin >> a;
	cout << "Digite la capacidad del nivel 2 : " << endl, cin >> b;
	cout << "Digite la capacidad del nivel 3 : " << endl; cin >> c;



}
inline void menu1(int& a,Estacionamiento &E1) {
	Limpiar;
	cout << "\tBienvenido :\t\t\t\t Cupos disponibles:" << endl;
	cout << "Elije una opcion: \t\t\t\t Nivel 1: " << E1.getN1()
		 <<" \n1) Anadir Movil.\t\t\t\t Nivel 2: "<< E1.getN2()
		 <<" \n2) Quitar Movil\t\t\t\t\t Nivel 3: "<< E1.getN3()
		 <<" \n3) Ver Movil.\n4) Salir" << endl;
	do {
		cin >> a;
	} while (!E1.getN1() && !E1.getN2() && !E1.getN3());
}
inline void validacion(string &a) {
	Limpiar;
	cout << "Ingresa el Usuario: " << endl;
	cin.ignore();
	getline(cin, a);

}

inline void menu1_1(int& a) {
	Limpiar;
	cout << "\tElije el tipo de movil" << endl;
	cout << "1) Carro\n2) Moto" << endl;
	cin >> a;
}

inline void auxmenu1_1(int &a) {
	do {
	Limpiar;
	cout << "\tElije el nivel (1 o 2)" << endl;
	
		cin >> a;
	} while (a<1 || a>NNcar);
	}

inline void menu1_1_1(string& b, string& a, string& h) { // hora sera un string
	Limpiar;
	cout << "Ingrese la placa del carro: " << endl;
	cin >> a;
	struct tm t;
	time_t now = time(0);
	localtime_s(&t, &now);

	h = mod(t.tm_hour) + ':' + mod(t.tm_min);

	
	/*
	cout << "Ingrese la Hora de entrada" << endl;
	do {
		cin >> h;
		if (h < 6 || h>20) {
			cout << "El horario es de 6 horas a las 20 horas" << endl;
		}
	} while (h < 6 || h>20);*/
}
inline void menu1_1_2(string& user, string& placa, string& hora) {
	Limpiar;

	cout << "Ingrese la placa de la moto: " << endl,
	cin >> placa;
	struct tm t;
	time_t now = time(0);
	localtime_s(&t, &now);

	hora = mod(t.tm_hour) + ':' + mod(t.tm_min);


}
		// Variables menu1.1
			

#endif