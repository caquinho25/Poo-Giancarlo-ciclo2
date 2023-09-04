#pragma once
#include <iostream>
using namespace System;
using namespace std;

class CQueso
{
private:
	int x, y;
public:
	CQueso();
	CQueso(int px, int py);
	~CQueso();
	int GetX();
	int GetY();
	void Dibujar();
	void Borrar();
};

CQueso::CQueso(int px, int py)
{
	x = px; y = py;
}

CQueso::~CQueso() {}

CQueso::CQueso() {
	Random r;
	x = r.Next(17, 61);
	y = r.Next(3.16);
}

int CQueso::GetX() {
	return x;
}
int CQueso::GetY() {
	return y;
}

void CQueso::Borrar() { 
	Console::SetCursorPosition(x, y);     cout << " "; 
	Console::SetCursorPosition(x, y + 1); cout << " "; 
	Console::SetCursorPosition(x, y + 2); cout << " "; 
	Console::SetCursorPosition(x, y + 3); cout << " "; 
	Console::SetCursorPosition(x, y + 4); cout << " "; 
	Console::SetCursorPosition(x, y + 5); cout << " "; 
	Console::SetCursorPosition(x, y + 6); cout << " "; 
	Console::SetCursorPosition(x, y + 7); cout << " "; 
	Console::SetCursorPosition(x, y + 8); cout << " "; 
}
void CQueso::Dibujar() { 
	Console::SetCursorPosition(x, y);     cout << " ___ ____"; 
	Console::SetCursorPosition(x, y + 1); cout << " /\\ (_) \\"; 
	Console::SetCursorPosition(x, y + 2); cout << " / \\ ( _,"; 
	Console::SetCursorPosition(x, y + 3); cout << " _) _\\ _ \\"; 
	Console::SetCursorPosition(x, y + 4); cout << "/ (_)\\_( )____\\"; 
	Console::SetCursorPosition(x, y + 5); cout << "\\\_ / _ _/"; 
	Console::SetCursorPosition(x, y + 6); cout << " )/\\\\/ (o ) ("; 
	Console::SetCursorPosition(x, y + 7); cout << " \\_) (o) /"; 
	Console::SetCursorPosition(x, y + 8); cout << " \\/_______/ ";
}


