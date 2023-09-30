#include "Manejador.h"
#include <conio.h>
void main() {
	char tecla;
	CManejador* objeto;
	Console::CursorVisible = false;
	objeto = new CManejador();
	while (1) {
		if (_kbhit()) {
			tecla = toupper(_getch());
			if (tecla == 'C' || tecla == 'T')objeto->Insertar(tecla);
			if (tecla == 'H')objeto->Cambiar_direccion_horizontal();
			if (tecla == 'V')objeto->Cambiar_direccion_vertical();
			if (tecla == 'R')objeto->Cambiar_relleno();
		}
			objeto->Dibujar();
			_sleep(50);
			objeto->Borrar();
			objeto->Mover();
	}
}