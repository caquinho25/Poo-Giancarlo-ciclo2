#pragma once
#include "figura.h"
#include<iostream>
using namespace System;
using namespace std;

class CTriangulo : public CFigura {
private:
	int color;
public:
	CTriangulo(int px, int py, int pdx, int ptamanio, int pcolor);
	~CTriangulo();
	void Dibujar();
	void Borrar();
};
//implementacion
CTriangulo::CTriangulo(int px, int py, int pdx, int ptamanio, int pcolor) :
	CFigura(px, py, pdx, ptamanio) {
	color = pcolor;
}
CTriangulo::~CTriangulo() {}
void CTriangulo::Dibujar() {
	int px = x, py = y;
	Console::ForegroundColor = (ConsoleColor)color;
	for (int fila = 1; fila <= tamanio; fila++) {
		Console::SetCursorPosition(px, py);
		for (int col = 1; col <= fila; col++) {
			cout << "*";
		}
		py++;
	}
}
void CTriangulo::Borrar() {
	int px = x, py = y;
	for (int fila = 1; fila <= tamanio; fila++) {
		Console::SetCursorPosition(px, py);
		for (int col = 1; col <= fila; col++) {
			cout << " ";
		}
		py++;
	}
}