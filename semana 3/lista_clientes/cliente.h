#pragma once
#include<string>
using namespace std;
class CCliente {
private:
	string dni, nombre, distrito;
	int fechanac;
	double sueldo;
public:
	CCliente(string pdni, string pnombre, string pdistrito,
		int pfecha, double psueldo);
	string get_dni();
	string get_nombre();
	string get_distrito();
	int get_fechanac();
	double get_sueldo();
	int obtener_edad();
};
//impl
CCliente::CCliente(string pdni, string pnombre, string pdistrito,
	int pfecha, double psueldo) {
	dni = pdni; nombre = pnombre; distrito = pdistrito;
	fechanac = pfecha; sueldo = psueldo;
}
string CCliente::get_dni(){
	return dni;
}
string CCliente::get_nombre(){
	return nombre;
}
string CCliente::get_distrito(){
	return distrito;
}
int CCliente::get_fechanac(){
	return fechanac;
}
double CCliente::get_sueldo(){
	return sueldo;
}
int CCliente::obtener_edad() {
	int dia, mes, anio, edad;
	dia = fechanac / 1000000;
	mes = (fechanac / 10000) % 100;
	anio = fechanac % 10000;
	edad = 2023 - anio;
	if (mes > 9 || (mes == 9 && dia > 1)) {
		edad = edad - 1;
	}
	return edad;
}