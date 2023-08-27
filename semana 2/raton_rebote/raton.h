#pragma once
#include<iostream>
using namespace System;
using namespace std;

class CRaton {
private:
	int x, y, ancho, alto, dx;
public:
	CRaton();
	CRaton(int px, int py);
	~CRaton();
	int GetX();
	int GetY();
	void Borrar();
	void Mover();
	void Dibujar();
};
//implementacion
CRaton::CRaton() {
	x = 10; y = 8;
	ancho = 18; alto = 3; 
	dx = 1; 
}
CRaton::CRaton(int px, int py) {
	x = px; y = py; 
	ancho = 18; alto = 3;
	dx = 1; 
}
CRaton::~CRaton() {}
int CRaton::GetX() {
	return x;
}
int CRaton::GetY() {
	return y;
}
void CRaton::Borrar() {
	Console::SetCursorPosition(x, y);         cout << "                 ";
	Console::SetCursorPosition(x, y + 1);     cout << "                 ";
	Console::SetCursorPosition(x, y + 2);     cout << "                 ";
}
void CRaton::Dibujar() {
	if (dx >= 0) {
		Console::SetCursorPosition(x, y);     cout << "        ____()() ";
		Console::SetCursorPosition(x, y + 1); cout << "      /       @@ ";
		Console::SetCursorPosition(x, y + 2); cout << "`~~~~~\\_;m__m._>o";
	}
	else {
		Console::SetCursorPosition(x, y);     cout << "  ()()____       ";
		Console::SetCursorPosition(x, y + 1); cout << "  @@      \\           ";
		Console::SetCursorPosition(x, y + 2); cout << "o<_.m__m;_/~~~~~`";
	}
}
void::CRaton::Mover() {
	if (x + dx < 0 || x + ancho + dx>79) {
		dx = -dx;
	}
	x = x + dx;
}