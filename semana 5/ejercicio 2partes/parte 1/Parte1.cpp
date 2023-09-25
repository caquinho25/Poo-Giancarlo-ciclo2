#include "Manejador.h"
#include <conio.h>

void main()
{
	char tecla;
	CManejador* objeto;
	objeto = new CManejador();
	Console::CursorVisible = false;

	while (1)
	{
		if (_kbhit())
		{
			tecla = toupper(_getch());
			if (tecla == 'I')objeto->Insertar();
			if (tecla == 'H') objeto->Cambiar_Direccion_Horizontal();
			if (tecla == 'V') objeto->Cambiar_Direccion_Vertical();
			if (tecla == 'R') objeto->Cambiar_Relleno();
		}
		objeto->Dibujar();
		_sleep(50);
		objeto->Borrar();
		objeto->Mover();
	}
}