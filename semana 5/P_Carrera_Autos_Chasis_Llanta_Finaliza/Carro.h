#pragma once
#include "Chasis.h"
#include "Llanta.h"
#include <vector>
class Carro {
private:
	vector <Llanta> vecllantas;
	Chasis objChasis;
	int x, y, dx,color;
public:
	Carro(int px, int py,int pdx,int pcolor);
	~Carro();
	void dibujar();
	void mover();
	void borrar();
	int GetX();
};
Carro::Carro(int px, int py,int pdx,int pcolor)
{	x = px;	y = py;	dx = pdx;	color = pcolor;
	vecllantas.push_back( Llanta(x , y ,dx,color));
	vecllantas.push_back( Llanta(x + 3, y, dx, color));
	vecllantas.push_back( Llanta(x , y + 3, dx, color));
	vecllantas.push_back( Llanta(x + 3, y + 3, dx, color));
	objChasis = Chasis(x , y + 1, dx, color);
}
Carro::~Carro()
{	vecllantas.erase(vecllantas.begin(), vecllantas.end());}
void Carro::dibujar()
{	for each (Llanta obj in vecllantas)
		obj.dibujar();
	objChasis.dibujar();
}
void Carro::borrar()
{	for each (Llanta obj in vecllantas)
		obj.borrar();
	objChasis.borrar();
}
void Carro::mover()
{	for (int i = 0; i < 4; i++)
		vecllantas[i].mover();
	objChasis.mover();
	x += dx;
}
int Carro::GetX(){	return x;}