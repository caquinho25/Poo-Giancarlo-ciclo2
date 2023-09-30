#pragma once
#include "Figura.h"

class CTriangulo : public CFigura {
private:
	char car;
public:
	CTriangulo();
	CTriangulo(int px, int py, int pdx, int pdy, int plado, char pcar);
	void Dibujar();
};

CTriangulo::CTriangulo() {}
CTriangulo::CTriangulo(int px, int py, int pdx, int pdy, int plado, char pcar) :
	CFigura(px, py, pdx, pdy, plado) {
	car = pcar;
}
void CTriangulo::Dibujar() {
	int px = x, py = y;
	Console::ForegroundColor = ConsoleColor::Red;
	for (int fila = 1; fila <= lado; fila++) {
		Console::SetCursorPosition(px, py);
		for (int col = 1; col <= fila; col++)
			cout << car;
		py++;
	}
}