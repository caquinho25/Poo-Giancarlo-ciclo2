#include"manejador.h"
#include<conio.h>
void main() {
	CManejadora* objeto;
	char letra;
	Console::CursorVisible = false;
	objeto = new CManejadora();
	objeto->generar();
	while (objeto->getcontador()!=3) {
		objeto->dibujar();
		_sleep(50);
		objeto->borrar();
		objeto->mover();
		if (_kbhit()) {
			letra = toupper(_getch());
			if (letra == 'C' || letra == 'T')
				objeto->insertar(letra);
		}
	}
	Console::SetCursorPosition(40, 23);
	cout << "Finalizo el juego\n";
	system("pause");
}