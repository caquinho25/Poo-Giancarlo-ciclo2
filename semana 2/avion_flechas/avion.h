#pragma once
#include<iostream>
using namespace System;
using namespace std;

class CAvion {
private:
	int x, y, dx, dy;
public:
	CAvion();
	CAvion(int px, int py);
	~CAvion();
	int GetX();
	int GetY();
	void Borrar();
	void Dibujar();
	void Mover(char tecla);
};
//impl
CAvion::CAvion() {
	x = 0; y = 0; dx = 0; dy = 0;
}
CAvion::CAvion(int px, int py) {
	x = px; y = py; dx = 0; dy = 0;
}
CAvion::~CAvion() {}

int CAvion::GetX() {
	return x;
}
int CAvion::GetY() {
	return y;
}

void CAvion::Borrar() { 
	Console::SetCursorPosition(x, y);     cout << "                   ";
	Console::SetCursorPosition(x, y + 1); cout << "                   "; 
}
void CAvion::Dibujar() {
	Console::SetCursorPosition(x, y);     cout << "      __ | __"; 
	Console::SetCursorPosition(x, y + 1); cout << "------oo(_)oo------"; 
}

void CAvion::Mover(char tecla) {
	switch (tecla)
	{
	case 72: dy = -1; dx = 0; break;
	case 80: dy = 1; dx = 0; break; 
	case 75: dx = -1; dy = 0; break;
	case 77: dx = 1; dy = 0; break; 
	default: dy = 0; dx = 0; break;
	}
	
	if (x + dx < 0 || x + 18 + dx > 79)
	{
		dx = dy = 0;
	}
	if (y + dy < 0 || y + 1 + dy > 24)
	{
		dx = 0; dy = 0;
	}
	x = x + dx;
	y = y + dy;
}