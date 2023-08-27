#include<iostream>
#include<conio.h>
#include "CaracterSolo.h"

void main()
{
	Random r;
	int ddx, ddy;
	CCaracter* objeto;
	Console::CursorVisible = false;//ocultar cursor
	if (r.Next(0, 2) == 1)
		ddx = 1;
	else
		ddx = -1;
	if (r.Next(0, 2) == 1)
		ddy = -1;
	else
		ddy = 1;
	objeto = new CCaracter(r.Next(1, 70), r.Next(1, 20), ddx, ddy);
	while (1)
	{
		objeto->Borrar();
		objeto->Mover();
		objeto->Dibujar();
		_sleep(50);
	}
}