#pragma once
#include<iostream>
using namespace System;
using namespace std;

class CCaracter
{
private:
	int x, y, dx, dy, contador;
public:
	//c
	CCaracter();
	CCaracter(int px, int py, int pdx, int pdy);
	//d
	~CCaracter();
	//m.a
	int GetX();
	int GetY();
	int GetContador();
	//metodos
	void Borrar();
	void Dibujar();
	void Mover();
};

//implemtacion
CCaracter::CCaracter()
{
	x = 0; y = 0; dx = 0; dy = 0, contador = 0;
}

CCaracter::CCaracter(int px, int py, int pdx, int pdy)
{
	x = px, y = py, dx = pdx, dy = pdy, contador = 0;
}

CCaracter::~CCaracter() {}

int CCaracter::GetX()
{
	return x;
}

int CCaracter::GetY()
{
	return y;
}

int CCaracter::GetContador()
{
	return contador;
}

void CCaracter::Borrar()
{
	Console::SetCursorPosition(x, y);
	cout << " ";
}

void CCaracter::Dibujar()
{
	Console::SetCursorPosition(x, y);
	cout << "$";
}

void CCaracter::Mover()
{
	//comprobación de bordes

	if (x + dx < 0 || x + dx>79)
	{
		dx = -dx;
		contador++;
	}
	if (y + dy < 0 || y + dy>24)
	{
		dy = -dy;
		contador++;
	}
	x = x + dx;
	y = y + dy;

}