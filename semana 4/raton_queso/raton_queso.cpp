#include <conio.h>
#include "queso.h"
#include "Raton.h"

void main() {

	char letra;
	int posxq, posyq;
	CQueso* objqueso;
	CRaton* objraton;
	Console::CursorVisible = 0;
	objqueso = new CQueso();
	objraton = new CRaton(1, 1);
	posxq = posyq = -1;
	Console::SetCursorPosition(2, 0);
	cout << "Presiona Q para que aparezca el queso.....";
	while (!objraton->FinJuego(posxq, posyq)) {
		objraton->Borrar();
		if (posxq != -1 && posyq != -1) {
			objraton->Buscar(posxq, posyq);
		}
		else {
			objraton->Mover();
		}
		objraton->Dibujar();
		if (_kbhit()) {
			letra = toupper(_getch());
			if (letra == 'Q') {
				objqueso->Dibujar();
				posxq = objqueso->GetX();
				posyq = objqueso->GetY();

			}
		}
		_sleep(100);
	}
	system("pause");
}