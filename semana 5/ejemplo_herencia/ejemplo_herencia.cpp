#include "manejador.h"
void main() {
	CManejador* objeto;
	Console::CursorVisible = false;
	objeto = new CManejador();
	objeto->Generar();
	while (1) {
		objeto->Mostrar();
		_sleep(50);
		objeto->Borrar();
		objeto->Mover();
	}
}