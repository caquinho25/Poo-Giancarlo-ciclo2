#pragma once
#include <iostream>
using namespace std;
using namespace System;

class CBala {
private:
	int x, y, dy;
public:
	CBala(int px, int py);
	~CBala();
	int GetY();
	void Dibujar();
	void Mover();
	void Borrar();
};

//impl
CBala::CBala(int px, int py) {
	x = px; y = py; dy = -1;
}
CBala::~CBala(){}
int CBala::GetY() {
	return y;
}
void CBala::Dibujar() {
	Console::SetCursorPosition(x, y);
	cout << "*";
}
void CBala::Mover() {
	y = y + dy;
}
void CBala::Borrar() {
	Console::SetCursorPosition(x, y);
	cout << " ";
}
