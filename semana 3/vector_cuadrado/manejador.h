#pragma once
#include<vector>
#include "caracter.h"

class CManejador {
private:
	vector<CCaracter> veccar;
public:
	CManejador();
	void Generar();
	void Dibujar();
	void Borrar();
	void Mover();
};
CManejador::CManejador() {}
void CManejador::Generar() {
	Random f;
	int ddx, ddy;
	for (int i = 1; i <= 10; i++) {
		if (f.Next(0, 2) == 1) ddx = 1;
		else
			ddx = -1;
		if (f.Next(0, 2) == 1) ddy = -1;
		else
			ddy = 1;
		veccar.push_back(CCaracter(f.Next(0, 75), f.Next(0, 21), ddx, ddy, f.Next('A', 'Z' + 1), f.Next(1, 15)));
	}
}
void CManejador::Dibujar() {
	for each (CCaracter obj in veccar) {
		obj.dibujar();
	}
}

void CManejador::Borrar() {
	for each (CCaracter obj in veccar) {
		obj.borrar();
	}
}

void CManejador::Mover() {
	for (int i = 0; i < veccar.size(); i++) {
		veccar[i].mover();
	}
}