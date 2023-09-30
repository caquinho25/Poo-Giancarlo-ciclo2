#pragma once
#include "Cuadrado.h"
#include "Triangulo.h"
#include <vector>
class CManejador {
private:
	vector<CCuadrado> veccua;
	vector<CTriangulo> vectri;
public:
	CManejador();
	void Insertar(char letra);
	void Dibujar();
	void Mover();
	void Borrar();
	void Cambiar_direccion_vertical();
	void Cambiar_direccion_horizontal();
	void Cambiar_relleno();
};

CManejador::CManejador(){}
void CManejador::Insertar(char letra) {
	Random r;
	if (letra == 'C') {
		int tipo = r.Next(1, 3);
		if (tipo == 1)
			veccua.push_back(CCuadrado(r.Next(1, 70), r.Next(1, 11), 0, 1, tipo,
				r.Next(2, 6)));
		else
			veccua.push_back(CCuadrado(r.Next(1, 70), r.Next(1, 11), 1, 0, tipo,
				r.Next(2, 6)));
	}
	else {
		int pdx, pdy;
		pdx = r.Next(1, 3) == 1 ? 1 : -1;
		pdy = r.Next(1, 3) == 1 ? -1 : 1;
		vectri.push_back(CTriangulo(r.Next(1, 70), r.Next(8, 18), pdx,pdy,
			r.Next(2, 6),r.Next('A','Z'+1)));
	}
}
void CManejador::Dibujar() {
	for (int i = 0; i < veccua.size(); i++)
		veccua[i].Dibujar();
	for (int i = 0; i < vectri.size(); i++)
		vectri[i].Dibujar();
}
void CManejador::Mover() {
	for (int i = 0; i < veccua.size(); i++)
		veccua[i].Mover();
	for (int i = 0; i < vectri.size(); i++)
		vectri[i].Mover();
}
void CManejador::Borrar() {
	for (int i = 0; i < veccua.size(); i++)
		veccua[i].Borrar();
	for (int i = 0; i < vectri.size(); i++)
		vectri[i].Borrar();
}
void CManejador::Cambiar_direccion_vertical() {
	for (int i = 0; i < veccua.size(); i++)
		veccua[i].CambiaDy();
}
void CManejador::Cambiar_direccion_horizontal() {
	for (int i = 0; i < veccua.size(); i++)
		veccua[i].CambiaDx();
}
void CManejador::Cambiar_relleno() {
	for (int i = 0; i < veccua.size(); i++)
		veccua[i].CambiaRelleno();
}