#pragma once
#include<iostream>
using namespace System;
using namespace std;

class CFigura {
private:
	int x, y, ancho, alto, dx;
public:
	CFigura();
	CFigura(int px, int py);
	~CFigura();
	int GetX();
	int GetY();
	void Borrar();
	void Mover();
	void Dibujar();
};

//implementacion
CFigura::CFigura() {
	x = 10; y = 6; ancho = 5; alto = 5; dx = 1;
}
CFigura::CFigura(int px, int py) {
	x = px; y = py; ancho = 5; alto = 5; dx = 1;
}
CFigura::~CFigura() {}
int CFigura::GetX() {
	return x;
}
int CFigura::GetY() {
	return y;
}
void CFigura::Borrar() {
	Console::SetCursorPosition(x, y);     cout << "     ";
	Console::SetCursorPosition(x, y + 1); cout << "     ";
	Console::SetCursorPosition(x, y + 2); cout << "     ";
	Console::SetCursorPosition(x, y + 3); cout << "     ";
	Console::SetCursorPosition(x, y + 4); cout << "     ";
}
void CFigura::Dibujar() {
	if (dx < 0) {
		Console::SetCursorPosition(x, y);     cout << " ( ) ";
		Console::SetCursorPosition(x, y + 1); cout << "  |  ";
		Console::SetCursorPosition(x, y + 2); cout << "<--  ";
		Console::SetCursorPosition(x, y + 3); cout << "  |  ";
		Console::SetCursorPosition(x, y + 4); cout << " / \\";

	}
	else {
		Console::SetCursorPosition(x, y);     cout << " ( ) ";
		Console::SetCursorPosition(x, y + 1); cout << "  |  ";
		Console::SetCursorPosition(x, y + 2); cout << "  -->";
		Console::SetCursorPosition(x, y + 3); cout << "  |  ";
		Console::SetCursorPosition(x, y + 4); cout << " / \\";
	}
}
void::CFigura::Mover() {
	if (x + dx < 0 || x + ancho + dx>79) {
		dx = -dx;
	}
	x = x + dx;
}