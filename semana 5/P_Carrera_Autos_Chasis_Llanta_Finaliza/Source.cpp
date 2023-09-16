#include "Manejador.h"
#include<conio.h>
void main()
{	int numautos = 5;
	int meta = 77;
	//Console::SetWindowSize(meta, numautos * 5);
	//Console::CursorVisible = false;
	Manejador objman = Manejador(numautos, meta);
	objman.DibujaMeta();
	do {objman.Correr();
		_sleep(150);	  
	} while (!objman.HayGanador());
	_getch();
}