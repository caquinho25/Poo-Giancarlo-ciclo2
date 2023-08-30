#pragma once
#include <iostream>
#include <vector>
using namespace std;

class CVector {
private:
	vector<int> Vnumeros;
	int nele;//indica la cantidad de elementos
public:
	CVector();
	~CVector();
	void Agregar(int dato); //coloca al final
	void Insertar_al_inicio(int dato);
	void Insertar_al_final(int dato);
	void Insertar_en_posicion(int posicion, int dato);
	void Eliminar_al_final();
	void Eliminar_en_posicion(int posicion);
	int Get_Elemento(int indice);
	int Get_nele();
};
//implementacion
CVector::CVector() {
	nele = 0;
}
CVector::~CVector() {}
void CVector::Agregar(int dato) {
	Vnumeros.push_back(dato);
	nele++;
}
void CVector::Insertar_al_inicio(int dato) {
	Vnumeros.insert(Vnumeros.begin(), dato);
	nele++;
}
void CVector::Insertar_al_final(int dato) {
	Vnumeros.insert(Vnumeros.end(), dato);
	nele++;
}
void CVector::Insertar_en_posicion(int posicion, int dato) {
	Vnumeros.insert(Vnumeros.begin() + posicion, dato);
	nele++;
}
void CVector::Eliminar_al_final() {
	Vnumeros.pop_back();
	nele--;
}
void CVector::Eliminar_en_posicion(int posicion) {
	Vnumeros.erase(Vnumeros.begin() + posicion);
	nele--;
}
int CVector::Get_Elemento(int indice) {
	return Vnumeros[indice];
}
int CVector::Get_nele() {
	return nele;
}










