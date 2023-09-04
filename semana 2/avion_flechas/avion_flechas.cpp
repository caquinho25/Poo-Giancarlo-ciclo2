#include<conio.h>
#include "avion.h"
#include "nube.h"

void main() {
	char tecla;
	Random r;
	CNube* objnube;
	CAvion* objavion;
	Console::CursorVisible = false;
	objavion = new CAvion(15, 15);
	objnube = new CNube(r.Next(1, 60), r.Next(1, 16));
	while (1) {
		if (_kbhit()) {
			tecla = _getch();
			tecla = toupper(tecla);
		}
		objavion->Borrar();
		objnube->Borrar();
		objavion->Mover(tecla);
		objnube->Mover();
		objavion->Dibujar();
		objnube->Dibujar();
		_sleep(50);
	}
}