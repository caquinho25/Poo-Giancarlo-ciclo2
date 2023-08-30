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
void CCaracter::dibujar() {
	Console::SetCursorPosition(x, y);
	Console::ForegroundColor = (ConsoleColor)color;
	cout << car;
}
void CCaracter::borrar() {
	Console::SetCursorPosition(x, y);
	cout << " ";
}
void CCaracter::mover() {	
	if (x + dx < 0 || x + dx > 79) dx *= -1;
	if (y + dy < 0 || y + dy > 24) dy *= -1;
	x = x + dx;
	y = y + dy;
}
