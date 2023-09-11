#pragma once
#include <iostream>
using namespace std;
using namespace System;
class Chasis {
private:
	int x, y,dx,color;
public:
	Chasis() {};
	Chasis(int px, int py, int pdx, int pcolor);
	void dibujar();
	void borrar();
	void mover();
};

Chasis::Chasis(int px, int py, int pdx, int pcolor) {
	x = px;	y = py;	dx = pdx;	color = pcolor;}
void Chasis::dibujar() {
	Console::ForegroundColor = (ConsoleColor)color;
	Console::SetCursorPosition(x, y); cout << char(220) << char(220) << char(220) << char(220);
	Console::SetCursorPosition(x, y + 1); cout << char(223) << char(223) << char(223) << char(223);
}
void Chasis::borrar() {
	Console::SetCursorPosition(x, y); cout << "    ";
	Console::SetCursorPosition(x, y + 1); cout << "    ";
}
void Chasis::mover() {	x += dx;}