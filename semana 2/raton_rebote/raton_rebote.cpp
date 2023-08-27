#include<conio.h>
#include "raton.h"

void main() {
	Random r;
	CRaton* Objeto;
	Console::CursorVisible = false;
	Objeto = new CRaton(r.Next(1, 60), r.Next(1, 16));
	while (1) {
		Objeto->Borrar();
		Objeto->Mover();
		Objeto->Dibujar();
		_sleep(50);
	}
}