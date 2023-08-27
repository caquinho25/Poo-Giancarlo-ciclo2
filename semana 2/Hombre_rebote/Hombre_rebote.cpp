#include<conio.h>
#include "Hombre.h"

void main() {
	Random r;
	CFigura* Objeto;
	Console::CursorVisible = false;
	Objeto = new CFigura(r.Next(1, 60), r.Next(1, 16));
	while (1) {
		Objeto->Borrar();
		Objeto->Mover();
		Objeto->Dibujar();
		_sleep(50);
	}

}