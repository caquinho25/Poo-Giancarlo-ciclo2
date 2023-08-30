#include "manejador.h"

void main() {
	CManejador* objeto;
	objeto = new CManejador();
	Console::CursorVisible = false;
	objeto->Generar();
	while (1) {
		objeto->Borrar();
		objeto->Mover();
		objeto->Dibujar();
		_sleep(50);
	}
}