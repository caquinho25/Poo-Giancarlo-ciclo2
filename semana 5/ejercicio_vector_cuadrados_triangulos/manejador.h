#pragma once
#include "figura.h"
#include "cuadrado.h"
#include"triangulo.h"
#include <vector>

class CManejadora {
private:
	int contador=0;
	vector<CCuadrado> veccua;
	vector<CTriangulo> vectri;
public:
	CManejadora();
	~CManejadora();
	void generar();
	void insertar(char letra);
	void analizarchoque();
	int getcontador();
	void dibujar();
	void mover();
	void borrar();
};
//implementacion
CManejadora::CManejadora() {}
CManejadora::~CManejadora(){}
void CManejadora::generar() {
	Random r;
	int pdx;
	for (int i = 1; i <= 3; i++) {
		pdx = r.Next(0, 2) == 0?1:-1;
		veccua.push_back(CCuadrado(r.Next(1, 70), r.Next(1, 10), 
			pdx, r.Next(3, 6), r.Next(1, 15)));
	}
	for (int i = 1; i <= 3; i++) {
		pdx = r.Next(0, 2) == 0 ? 1 : -1;
		vectri.push_back(CTriangulo(r.Next(1, 70), r.Next(1, 10),
			pdx, r.Next(3, 6), r.Next(1, 15)));
	}
}
void CManejadora::insertar(char letra) {
	Random r;
	int pdx;
	if (letra == 'C') {
		pdx = r.Next(0, 2) == 0 ? 1 : -1;
		veccua.push_back(CCuadrado(r.Next(1, 70), r.Next(1, 10),
			pdx, r.Next(3, 6), r.Next(1, 15)));
	}
	else {
		pdx = r.Next(0, 2) == 0 ? 1 : -1;
		vectri.push_back(CTriangulo(r.Next(1, 70), r.Next(1, 10),
			pdx, r.Next(3, 6), r.Next(1, 15)));
	}
}
void CManejadora::dibujar() {
	for each (CCuadrado obj in veccua)
		obj.Dibujar();
	for each (CTriangulo obj in vectri)
		obj.Dibujar();
}
void CManejadora::borrar() {
	for each (CCuadrado obj in veccua)
		obj.Borrar();
	for each (CTriangulo obj in vectri)
		obj.Borrar();
}
void CManejadora::mover() {
	for (int i = 0; i < veccua.size(); i++) 
		veccua[i].Mover();
	for (int i = 0; i < vectri.size(); i++)
		vectri[i].Mover();
}
void CManejadora::analizarchoque() {
	if (veccua.size() > 0) {
		if (veccua[0].getx() == 0||veccua[0].getx()==79) {
			contador++;
		}
	}
}
int CManejadora::getcontador() {
	return contador;
}