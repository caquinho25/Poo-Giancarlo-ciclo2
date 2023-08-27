#pragma once
#include<iostream>
using namespace System;
using namespace std;

class CCaracter
{
private:
	int x, y, dx, dy;
public:
	//c
	CCaracter();
	CCaracter(int px, int py,int pdx,int pdy);
	//d
	~CCaracter();
	//metodos de acceso
	int GetX();
	int GetY();
	//metodos
	void Borrar();
	void Dibujar();
	void Mover();
};

//implemtacion
CCaracter::CCaracter()
{
	x = 0; y = 0; dx = 0; dy = 0;
}

CCaracter::CCaracter(int px, int py,int pdx,int pdy)
{
	x = px, y = py, dx = pdx, dy = pdy;
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

void CCaracter::Borrar()
{
	Console::SetCursorPosition(x, y);
	cout << " ";
}

void CCaracter::Dibujar()
{
	Console::SetCursorPosition(x, y);
	cout << "*";
}

void CCaracter::Mover()
{
	//comprobación de bordes
	if (x + dx < 0 || x + dx>79)
	{
		dx = -dx;
	}
	if (y + dy < 0 || y + dy>24)
	{
		dy = -dy;
	}
	x = x + dx;
	y = y + dy;
}