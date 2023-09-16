#pragma once
#include "figura.h"
#include <iostream>
using namespace std;
using namespace System;


class CTriangulo : public CFigura {
private:
	int color;
public:
	CTriangulo();
	CTriangulo(int px, int py, int pdx, int pancho, int pcolor);
	void Mostrar();
	void Borrar();
};
//implementacion
CTriangulo::CTriangulo() {}
CTriangulo::CTriangulo(int px, int py, int pdx, int pancho, int pcolor) :
	CFigura(px, py, pdx, pancho) {
	color = pcolor;
}
void CTriangulo::Mostrar() {
	int px = x, py = y;
	Console::ForegroundColor = (ConsoleColor)color;
	for (int fila = 1; fila <= ancho; fila++) {
		Console::SetCursorPosition(px, py);
		for (int col = 1; col <= fila; col++) {
			cout << "*";
		}
		py++;
	}
}
void CTriangulo::Borrar() {
	int px = x, py = y;
	for (int fila = 1; fila <= ancho; fila++) {
		Console::SetCursorPosition(px, py);
		for (int col = 1; col <= fila; col++) {
			cout << " ";
		}
		py++;
	}
}
