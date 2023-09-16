#pragma once
#include "figura.h"
#include <iostream>
using namespace std;
using namespace System;

class CCuadrado : public CFigura {
private:
	int color;
public:
	CCuadrado();
	CCuadrado(int px, int py, int dtx, int pancho, int pcolor);
	void Mostrar();
	void Borrar();
};
//implementacion
CCuadrado::CCuadrado() {}
CCuadrado::CCuadrado(int px, int py, int pdx, int pancho, int pcolor) :
	CFigura(px, py, pdx, pancho) {
	color = pcolor;
}
void CCuadrado::Mostrar() {
	int px = x, py = y;
	Console::ForegroundColor = (ConsoleColor)color;
	for (int fila = 1; fila <= ancho; fila++) {
		Console::SetCursorPosition(px, py);
		for (int col = 1; col <= ancho; col++) {
			cout << "*";
		}
		py++;
	}		
}
void CCuadrado::Borrar() {
	int px = x, py = y;
	for (int fila = 1; fila <= ancho; fila++) {
		Console::SetCursorPosition(px, py);
		for (int col = 1; col <= ancho; col++) {
			cout << " ";
		}
		py++;
	}
}
