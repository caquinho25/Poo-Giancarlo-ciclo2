#pragma once
#include <iostream>
using namespace std;
using namespace System;
class Llanta {
private:	int x, y,dx,color;
public:
	Llanta(int px, int py, int pdx, int pcolor);
	void dibujar();
	void borrar();
	void mover();
}; 
Llanta::Llanta(int px, int py, int pdx, int pcolor) {
	x = px;	y = py;	dx = pdx;	color = pcolor;}
void Llanta::dibujar() {
	Console::ForegroundColor = (ConsoleColor)color;
	Console::SetCursorPosition(x, y);
	cout << char(219);
}
void Llanta::borrar() {
	Console::SetCursorPosition(x, y);
	cout << " ";
}
void Llanta::mover() {	x += dx;}