#pragma once
#include<vector>
#include<string>
#include<algorithm>
#include<iostream>
#include "cliente.h"
using namespace std;

class CVector_clientes {
private:
	vector<CCliente> vec_clientes;
public:
	CVector_clientes();
	~CVector_clientes();
	void agregar_cliente(string dni, string nombre, 
		string distrito, int fecha, double sueldo);
	void eliminar_cliente(string dni);
	void mostrar_clientes();
	int buscar_dni(string dni);
	double sueldo_promedio();
	void ordenar_x_distrito();
	void ordenar_x_nombre();
	int edad_cliente(string dni);
};
//impl

CVector_clientes::CVector_clientes(){}
CVector_clientes::~CVector_clientes(){}
int CVector_clientes::buscar_dni(string dni) {
	int i, posicion;
	posicion = -1;
	for (i = 0; i < vec_clientes.size(); i++) {
		if (dni == vec_clientes[i].get_dni()) {
			posicion = i;
		}
	}
	return posicion;
}

void CVector_clientes::agregar_cliente(string dni, string nombre,
	string distrito, int fecha, double sueldo) {
	if (buscar_dni(dni) == -1) {
		vec_clientes.push_back(CCliente(dni, nombre, distrito, fecha, sueldo));
	}
}

void CVector_clientes::eliminar_cliente(string dni) {
	int posicion = buscar_dni(dni);
	if (posicion != -1) {
		vec_clientes.erase(vec_clientes.begin() + posicion);
	}
}

void CVector_clientes::mostrar_clientes() {
	cout << "Dni \t Nombre \t Distrito \t Fecha \t Sueldo \n";
	for (int i = 0; i < vec_clientes.size(); i++) {
		cout << vec_clientes[i].get_dni() << "\t" <<
			vec_clientes[i].get_nombre() << "\t" <<
			vec_clientes[i].get_distrito() << "\t" <<
			vec_clientes[i].get_fechanac() << "\t" <<
			vec_clientes[i].get_sueldo() << "\n";
	}
}

double CVector_clientes::sueldo_promedio() {
	double suma = 0;
	for (int i = 0; i < vec_clientes.size(); i++) {
		suma = suma + vec_clientes[i].get_sueldo();
	}
	return suma / vec_clientes.size();
}

//ordenamiento
bool compara_distrito(CCliente x, CCliente y) {
	return x.get_distrito() < y.get_distrito();
}

void CVector_clientes::ordenar_x_distrito() {
	sort(vec_clientes.begin(), vec_clientes.end(), compara_distrito);
}

bool compara_nombre(CCliente x, CCliente y) {
	return x.get_nombre() < y.get_nombre();
}

void CVector_clientes::ordenar_x_nombre() {
	sort(vec_clientes.begin(), vec_clientes.end(), compara_nombre);
}

int CVector_clientes::edad_cliente(string dni) {
	int posicion = buscar_dni(dni);
	if (posicion != -1) {
		return vec_clientes[posicion].obtener_edad();
	}
	else
		return 0;
}