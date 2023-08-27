#include<iostream>
#include<conio.h>
#include "Caracter.h"

void main() 
{
	char tecla;
	CCaracter* objeto;
	Console::CursorVisible = false;//ocultar cursor
	objeto = new CCaracter(10, 10);
	while (1) 
	{
		if (_kbhit())//verdadero si se presiona una tecla
		{ 
			tecla = _getch();
			tecla = toupper(tecla);
		}
		objeto->Borrar();
		objeto->Mover(tecla);
		objeto->Dibujar();
		_sleep(50);	
	}
}