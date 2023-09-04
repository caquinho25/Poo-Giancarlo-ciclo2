#pragma once
#include <iostream>
using namespace System;
using namespace std;

class CRaton
{
private:
	int x, y, dx, dy;
public:
	CRaton(int px, int py);
	~CRaton();
	void Borrar();
	void Mover();
	void Dibujar();
	void Buscar(int posxq, int posyq);
	bool FinJuego(int posxq, int posyq);
};

CRaton::CRaton(int px, int py)
{
	x = px; y = py; dx = 1; dy = 1;
}

CRaton::~CRaton(){}

void CRaton::Borrar() {
	Console::SetCursorPosition(x, y);     cout << "                    ";
	Console::SetCursorPosition(x, y + 1); cout << "                    ";
	Console::SetCursorPosition(x, y + 2); cout << "                    ";
}

void CRaton::Dibujar() {
	if (dx > 0) {
		Console::SetCursorPosition(x, y);     cout << "         ____()()";
		Console::SetCursorPosition(x, y + 1); cout << "             / @@";
		Console::SetCursorPosition(x, y + 2); cout << "`~~~~~\\_;m__m._>o";
	}
	else {
		Console::SetCursorPosition(x, y);     cout << " ()()____        ";
		Console::SetCursorPosition(x, y + 1); cout << " @@       \\      ";
		Console::SetCursorPosition(x, y + 2); cout << "o<_.m__m;_/~~~~~`";
	}
}

void CRaton::Mover()
{
	if (x + dx < 1 || x + 16 + dx > 79) dx = -dx;
	if (y + dy < 1 || y + 2 + dy > 24) dy = -dy;
	x = x + dx;
	y = y + dy;
}

void CRaton::Buscar(int posxq, int posyq) {
	if (x > posxq) dx = -1;
	if (x < posxq) dx = 1;
	if (x == posxq) dx = 0;
	if (y > posyq) dy = -1;
	if (y < posyq) dy = 1;
	if (y == posyq) dy = 0;
	x = x + dx;
	y = y + dy;
}

bool CRaton::FinJuego(int posxq, int posyq) {
	return posxq == x && posyq == y;
}