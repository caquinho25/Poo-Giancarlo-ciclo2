#pragma once
#include <iostream>
#include <conio.h>
using namespace std;
using namespace System;

class figura {
private:
	int x, y, dx;
public:	
	figura();
	figura(int xp, int yp, int ddx);
	~figura();
	int getx();
	int gety();
	void dibujar(int numero, int rectanguloalto, int rectanguloancho, int triangulotama);
	void mover();
	void borrar(int numero, int rectanguloalto, int rectanguloancho, int triangulotama);
};

figura::figura() {
	x = 0; y = 0;
}
figura::figura(int xp, int yp, int ddx) {
	x = xp; y = yp; dx = ddx;
}
figura ::~figura() {}

int figura::getx(){
	return 0;
}

int figura::gety(){
	return 0;
}

void figura::dibujar(int numero, int rectanguloalto, int rectanguloancho, int triangulotama) {
	//dibujar triangulo
	for (int f = 0; f < triangulotama; f++) {
		for (int i = 0; i < f; i++) {
			Console::SetCursorPosition(x + i, y + f);
			cout << "*";
		}
	}	
	//dibujar cuadrado
	for (int f = 0; f < numero; f++) {
		for (int i = 0; i < numero; i++) {
			Console::SetCursorPosition(x + i, y + f + 9);//se suma 9 para la separacion entre el dibujo
			cout << "*";
		}
	}
	//dibujar rectangulo
	for (int f = 0; f < rectanguloalto; f++) {
		for (int i = 0; i < rectanguloancho; i++) {
			Console::SetCursorPosition(x + i, y + f + 18);//e suma 18 para la separacion entre el dibujo
			cout << "*";
		}
	}
}
void figura::borrar(int numero, int rectanguloalto, int rectanguloancho, int triangulotama) {
	for (int f = 0; f < triangulotama; f++) {
		for (int i = 0; i < f; i++) {
			Console::SetCursorPosition(x + i, y + f);
			cout << " ";
		}
	}

	for (int f = 0; f < numero; f++) {
		for (int i = 0; i < numero; i++) {
			Console::SetCursorPosition(x + i, y + f + 9);
			cout << " ";
		}
	}

	for (int f = 0; f < rectanguloalto; f++) {
		for (int i = 0; i < rectanguloancho; i++) {
			Console::SetCursorPosition(x + i, y + f + 18);
			cout << " ";
		}
	}
}
void figura::mover() {
	if (dx + x < 0 || dx + x > 79) {
		dx = -dx;
	}
	x = x + dx;
}




