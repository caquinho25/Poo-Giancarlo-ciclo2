#pragma once
#include<iostream>
using namespace System;
using namespace std;

class CCaracter {
private:
	int x, y;
	int dx, dy; //aleatorio entre -1 y 1
	char car; //aleatorio entre A y Z
	int color; //aleatorio entre 1 y 15
public:
	CCaracter(int px, int py, int pdx, int pdy, char pcr, int pcolor);
	void dibujar();
	void borrar();
	void mover();
};

//implementacion
CCaracter::CCaracter(int px, int py, int pdx, int pdy, char pcr, int pcolor) {
	x = px; y = py;
	dx = pdx; dy = pdy;
	car = pcr; color = pcolor;
}

void CCaracter::borrar() {
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			Console::SetCursorPosition(x + i, y + j);
			Console::ForegroundColor = (ConsoleColor)color;			
			cout << " " << endl;
		}
	}
}
void CCaracter::dibujar() {
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			Console::SetCursorPosition(x + i, y + j);
			Console::ForegroundColor = (ConsoleColor)color;
			cout << "*" << endl;
		}
	}
}

void CCaracter::mover() {
	if (x + dx < 0 || x + dx > 79) dx *= -1;
	if (y + dy < 0 || y + dy > 24) dy *= -1;
	x = x + dx;
	y = y + dy;
}
