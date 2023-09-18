#pragma once
#include "figura.h"
#include <iostream>
using namespace System;
using namespace std;

class CCuadrado : public CFigura{
private:
	int color;
public:
	CCuadrado(int px, int py, int pdx, int ptamanio, int pcolor);
	~CCuadrado();
	int getx();
	void Dibujar();
	void Borrar();
};
//implementacion
CCuadrado::CCuadrado(int px, int py, int pdx, int ptamanio, int pcolor)
	:CFigura(px, py, pdx, ptamanio) {
	color = pcolor;
}
CCuadrado::~CCuadrado(){}
int CCuadrado::getx() {
	return x;
}
void CCuadrado::Dibujar() {
	int px = x, py = y;
	Console::ForegroundColor = (ConsoleColor)color;
	for (int fila = 1; fila <= tamanio; fila++) {
		Console::SetCursorPosition(px, py);
		for (int col = 1; col <= tamanio; col++) {
			cout << "*";
		}
		py++;
	}
}
void CCuadrado::Borrar() {
	int px = x, py = y;
	for (int fila = 1; fila <= tamanio; fila++) {
		Console::SetCursorPosition(px, py);
		for (int col = 1; col <= tamanio; col++) {
			cout << " ";
		}
		py++;
	}
}