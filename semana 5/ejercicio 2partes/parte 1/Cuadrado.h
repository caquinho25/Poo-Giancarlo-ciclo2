#pragma once
#include<iostream>

using namespace std;
using namespace System;

class CCuadrado
{
private:
	int x, y, dx, dy;
	int tipo; //1 sera verde vertical, 2 amarillo horizontal
	int relleno, lado;
public:
	CCuadrado();
	CCuadrado(int px, int py, int pdx, int pdy, int ptipo, int plado);
	void Dibujar();
	void Mover();
	void Borrar();
	void SetDx(int pdx);
	void SetDy(int pdy);
	void SetRelleno(int prelleno);
	int GetDx();
	int GetDy();
	int GetRelleno();
};

CCuadrado::CCuadrado()
{

}
CCuadrado::CCuadrado(int px, int py, int pdx, int pdy,int ptipo, int plado)
{
	x = px; y = py; dx = pdx; dy = pdy;
	tipo = ptipo;
	relleno = 1;
	lado = plado;
}
void CCuadrado::Dibujar()
{
	if (tipo == 1)
		Console::ForegroundColor = ConsoleColor::Green;
	else
		Console::ForegroundColor = ConsoleColor::Yellow;
	if (relleno == 1)
	{
		for (int i = 1; i <= lado; i++)
		{
			Console::SetCursorPosition(x, y + i - 1);
			for (int k = 1; k <= lado; k++)
				cout << "*";
		}
	}
	else
	{
		for (int i = 1; i <= lado; i++)
		{
			Console::SetCursorPosition(x, y + i - 1);
			for (int k = 1; k <= lado; k++)
				if (i == 1 || i == lado || k == 1 || k == lado)
					cout << "*";
				else
					cout << "*";
		}
	}
}

void CCuadrado::Borrar()
{
	for (int i = 1; i <= lado; i++)
	{
		Console::SetCursorPosition(x, y + i - 1);
		for (int k = 1; k <= lado; k++)
			cout << " ";
	}
}

void CCuadrado::Mover()
{
	if (x + dx < 0 || x + lado + dx > 79)
	{
		dx = -dx;
	}
	if (y + dy < 0 || y + lado + dy > 24)
	{
		dy = -dy;
	}
	x = x + dx;
	y = y + dy;
}

void CCuadrado::SetDx(int pdx)
{
	dx = pdx;
}

void CCuadrado::SetDy(int pdy)
{
	dy = pdy;
}
void CCuadrado::SetRelleno(int prelleno)
{
	relleno = prelleno;
}
int CCuadrado::GetDx()
{
	return dx;
}
int CCuadrado::GetDy()
{
	return dy;
}
int CCuadrado::GetRelleno()
{
	return relleno;
}