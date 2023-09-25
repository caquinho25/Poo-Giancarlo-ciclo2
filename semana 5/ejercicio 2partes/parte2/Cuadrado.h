#pragma once
#include "Figura.h"

class CCuadrado :public CFigura
{
private:
	int tipo;
	int relleno;
public:
	CCuadrado();
	CCuadrado(int px, int py, int pdx, int pdy, int ptipo, int plado);
	void Dibujar();
	void CambioDx();
	void CambioDy();
	void CambioRelleno();
};