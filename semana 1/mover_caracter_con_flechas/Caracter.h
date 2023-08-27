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
	CCaracter(int px, int py);
	//d
	~CCaracter();
	//m.a
	int GetX();
	int GetY();
	//metodos
	void Borrar();
	void Dibujar();
	void Mover(char tecla);
};

//implemtacion
CCaracter::CCaracter() 
{
	x = 0; y = 0; dx = 0; dy = 0;
}

CCaracter::CCaracter(int px, int py) 
{
	x = px, y = py, dx = 0, dy = 0;
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

void CCaracter::Mover(char tecla) 
{
	switch (tecla) 
	{
	case 72: dy = -1; dx = 0; break; //arriba w
	case 80: dy = 1; dx = 0; break; //abajo s
	case 75: dx = -1; dy = 0; break; //izquierda a
	case 77: dx = 1; dy = 0; break; //derecha d
	default: dy = 0; dx = 0; break;
	}
	//comprobación de bordes
	if (x + dx < 0 || x + dx>79) 
	{
		dx = dy = 0;
	}
	if (y + dy < 0 || y + dy>24) 
	{
		dx = 0; dy = 0;
	}
	x = x + dx;
	y = y + dy;
}