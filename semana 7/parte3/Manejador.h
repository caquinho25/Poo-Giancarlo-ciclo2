#pragma once
#include "Cuadrado.h"
#include "Triangulo.h"
#include<vector>
class CManejador
{
private:
	vector<CFigura*>vecfig;
public:
	CManejador();
	void Insertar(char letra);
	void Dibujar();
	void Mover();
	void Borrar();
	void Cambiar_Direccion_Vertical();
	void Cambiar_Direccion_Horizontal();
	void Cambiar_Relleno();
};

CManejador::CManejador() {}
void CManejador::Insertar(char letra)
{
	Random r;
	if (letra == 'C')
	{
		int tipo = r.Next(1, 3);
		if (tipo == 1)
			vecfig.push_back(new CCuadrado(r.Next(1, 70), r.Next(1, 15), 0, 1,
				r.Next(2, 6), tipo));
		else
			vecfig.push_back(new CCuadrado(r.Next(1, 70), r.Next(1, 15), 1, 0,
				r.Next(2, 6), tipo));
	}
	if (letra == 'T')
		vecfig.push_back(new CTriangulo(r.Next(1, 70), r.Next(7, 16), 1, 0,
			r.Next(2, 6), r.Next()));
}
void CManejador::Dibujar() {
	for (int i = 0; i < vecfig.size(); i++)
		vecfig[i]->Dibujar();
}
void CManejador::Mover() {
	for (int i = 0; i < vecfig.size(); i++)
		vecfig[i]->Mover();
}
void CManejador::Borrar() {
	for (int i = 0; i < vecfig.size(); i++)
		vecfig[i]->Borrar();
}
void CManejador::Cambiar_Direccion_Vertical() {
	for (int i = 0; i < vecfig.size(); i++)
		vecfig[i]->CambiaDy();
}
void CManejador::Cambiar_Direccion_Horizontal() {
	for (int i = 0; i < vecfig.size(); i++)
		vecfig[i]->CambiaDx();
}
void CManejador::Cambiar_Relleno() {
	for (int i = 0; i < vecfig.size(); i++)
		vecfig[i]->CambiaRelleno();
}