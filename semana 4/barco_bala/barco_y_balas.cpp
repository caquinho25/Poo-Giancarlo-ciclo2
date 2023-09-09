#include<conio.h>
#include "barco.h"
void main() {
	CBarco* objbarco;
	char tecla;
	objbarco = new CBarco(40, 21);
	Console::CursorVisible = false;
	while (objbarco->GetContador_Eliminados() != 10) {
		if (_kbhit()) {
			tecla = _getch();
			if (tecla == ' ') {
				objbarco->InsertaBala();
			}
		}
		objbarco->Dibujar();
		objbarco->DibujarBalas();
		_sleep(100);
		objbarco->Borrar();
		objbarco->BorrarBalas();
		objbarco->Mover();
		objbarco->MoverBalas();
		objbarco->AnalizayEliminarBala();
	}
	Console::SetCursorPosition(40, 23);
	cout << "Finalizo el juego\n";
	system("pause");
}