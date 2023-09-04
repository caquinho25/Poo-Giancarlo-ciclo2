#pragma once
#include<iostream>
using namespace System;
using namespace std;

class CNube {
private:
	int x, y, dx;
public:
	CNube();
	CNube(int px, int py);
	~CNube();
	int GetX();
	int GetY();
	void Borrar();
	void Mover();
	void Dibujar();
};
//impl
CNube::CNube() {
	x = 0; y = 0; dx = 1; 
}
CNube::CNube(int px, int py) {
	x = px; y = py; dx = 1; 
}
CNube::~CNube() {}

int CNube::GetX() {
	return x;
}
int CNube::GetY() {
	return y;
}

void CNube::Borrar() { 
	Console::SetCursorPosition(x, y);     cout << "          "; 
	Console::SetCursorPosition(x, y + 1); cout << "          "; 
	Console::SetCursorPosition(x, y + 2); cout << "          "; 
	Console::SetCursorPosition(x, y + 3); cout << "          "; 
}
void CNube::Dibujar() { 
	Console::SetCursorPosition(x, y);     cout << " __ _"; 
	Console::SetCursorPosition(x, y + 1); cout << " _( )_( )_"; 
	Console::SetCursorPosition(x, y + 2); cout << "(_ _ _)"; 
	Console::SetCursorPosition(x, y + 3); cout << " (_) (__)"; 
}

void CNube::Mover() {
	if (x + dx < 0 || x + 10 + dx>79)dx = -dx;
	x = x + dx;
}