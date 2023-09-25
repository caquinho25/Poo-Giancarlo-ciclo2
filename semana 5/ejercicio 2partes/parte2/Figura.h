#pragma once
#include <iostream>

using namespace std;
using namespace System;

class CFigura
{
protected:
	int x, y, dx, dy, lado;
public:
	CFigura();
	CFigura(int px, int py, int pdx, int pdy, int plado);
	void Mover();
	void Borrar();
};

CFigura::CFigura()
{

}

CFigura::CFigura(int px, int py, int pdx, int pdy, int plado)
{
	x = px; y = py; dx = pdx; lado = plado;
}

void CFigura::Mover()
{
	if (x + dx < 0 || x + dx + lado > 79)
	{
		dx = -dx;
	}
	if (y + dy < 0 || y + dy + lado > 24)
	{
		dy = -dy;
	}
	x = x + dx;
	y = y + dy;
}

void CFigura::Borrar()
{
	int px = x, py = y;
	for (int i = 1; i <= lado; i++)
	{
		Console::SetCursorPosition(px, py);
		for (int k = 1; k <= lado; k++)
			cout << " ";
		py++;
	}
}