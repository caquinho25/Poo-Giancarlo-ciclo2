#include <iostream>
#pragma once

using namespace System;
using namespace std;

class CRaton
{
private:
	int x, y;
	int dx, dy;
	int ancho, alto;
public:
	CRaton(int px, int py);
	void Pintar();
	void Borrar();
	void Mover();
};

CRaton::CRaton(int px, int py)
{
	x = px; y = py;
    dx = 1; dy = 1;
	ancho = 18; alto = 3;
}

void CRaton::Pintar()
{
	Console::SetCursorPosition(x, y);     cout << "	    ___()()     ";
	Console::SetCursorPosition(x, y + 1); cout << "      /       @@ ";
	Console::SetCursorPosition(x, y + 2); cout << "`~~~\\_;m_m.>o   ";
}

void CRaton::Borrar()
{
	Console::SetCursorPosition(x, y);     cout << "		       	    ";
	Console::SetCursorPosition(x, y + 1); cout << "                 ";
	Console::SetCursorPosition(x, y + 2); cout << "                 ";
}

void CRaton::Mover()
{
	if (x + dx < 0 || x + ancho + dx > 79) {
		dx = -dx;
	}
	if (x + dx < 0 || x + alto + dx > 24) {
		dy = -dy;
	}
	x = x + dx;
	y = y + dy;
}