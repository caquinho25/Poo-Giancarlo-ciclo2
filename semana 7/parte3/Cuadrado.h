#pragma once
#include "Figura.h"
class CCuadrado : public CFigura
{
private:
	int tipo;
	int relleno;
public:
	CCuadrado();
	CCuadrado(int px, int py, int pdx, int pdy, int plado, int ptipo);
	void Dibujar();
	void CambiaDx();
	void CambiaDy();
	void CambiaRelleno();
};

CCuadrado::CCuadrado()
{ }
CCuadrado::CCuadrado(int px, int py, int pdx, int pdy, int plado, int ptipo) :
	CFigura(px, py, pdx, pdy, plado)
{
	tipo = ptipo;
	relleno = 1;
}
void CCuadrado::Dibujar()
{
	if (tipo == 1)
		Console::ForegroundColor = ConsoleColor::Green;
	else
		Console::ForegroundColor = ConsoleColor::Yellow;
	int px = x, py = y;
	if (relleno == 1)
	{
		for (int i = 1; i <= lado; i++)
		{
			Console::SetCursorPosition(px, py);
			for (int k = 1; k <= lado; k++)
				cout << "*";
			py++;
		}
	}
	else
	{
		for (int i = 1; i <= lado; i++)
		{
			Console::SetCursorPosition(px, py);
			for (int k = 1; k <= lado; k++)
				if (i == 1 || i == lado || k == 1 || k == lado)
					cout << "*";
				else
					cout << " ";
			py++;
		}
	}
}
void CCuadrado::CambiaDx()
{
	dx = -dx;
}
void CCuadrado::CambiaDy()
{
	dy = -dy;
}
void CCuadrado::CambiaRelleno()
{
	if (relleno == 1) relleno = 0;
	else
		relleno = 1;
}