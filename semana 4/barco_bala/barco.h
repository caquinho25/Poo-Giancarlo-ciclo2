#pragma once
#include"bala.h"
#include <vector>

class CBarco {
private:
	//atributo del barco
	int x, y, dx, ancho, contador_eliminados;
	//atributo relacionado a las balas
	vector<CBala> vecbalas;
public:
	CBarco(int px, int py);
	~CBarco();
	//propios movimientos del barco
	void Dibujar();
	void Mover();
	void Borrar();
	//propio de las balas
	void DibujarBalas();
	void MoverBalas();
	void BorrarBalas();
	void InsertaBala();
	void AnalizayEliminarBala();
	int GetContador_Eliminados();
};
//impl barco
CBarco::CBarco(int px, int py) {
	x = px; y = py; dx = 1; ancho = 3; contador_eliminados = 0;
}
CBarco::~CBarco(){};
void CBarco::Dibujar() {
	Console::SetCursorPosition(x, y);   cout << " |";
	Console::SetCursorPosition(x, y+1); cout << " |";
	Console::SetCursorPosition(x, y+2); cout << "---";
}
void CBarco::Borrar() {
	Console::SetCursorPosition(x, y);     cout << "   ";
	Console::SetCursorPosition(x, y + 1); cout << "   ";
	Console::SetCursorPosition(x, y + 2); cout << "   ";
}
void CBarco::Mover() {
	if (x + dx < 0 || x + ancho + dx>79) dx = -dx;
	x = x + dx;
}
//impl balas
void CBarco::DibujarBalas() {
	for each (CBala objeto in vecbalas) {
		objeto.Dibujar();
	}
}
void CBarco::BorrarBalas() {
	for each (CBala objeto in vecbalas) {
		objeto.Borrar();
	}
}
void CBarco::MoverBalas() {
	for (int i = 0; i < vecbalas.size(); i++) {
		vecbalas[i].Mover();
	}
}
void CBarco::InsertaBala() {
	vecbalas.push_back(CBala(x + 1, y - 1));
}
void CBarco::AnalizayEliminarBala() {
	if (vecbalas.size() > 0) {
		if (vecbalas[0].GetY() == 0) {
			vecbalas.erase(vecbalas.begin());
			contador_eliminados++;
		}
	}
}
int CBarco::GetContador_Eliminados() {
	return contador_eliminados;
}