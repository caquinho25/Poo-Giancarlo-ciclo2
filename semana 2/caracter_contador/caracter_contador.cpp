#include<conio.h>
#include "caracter.h"

void main()
{
	Random r;
	int ddx, ddy; //int contador
	CCaracter* objeto;
	Console::CursorVisible = false;//ocultar cursor

	if (r.Next(0, 2) == 1)
		ddx = 1;
	else
		ddx = -1;

	if (r.Next(0, 2) == 1)
		ddy = -1;
	else
		ddy = 1;

	objeto = new CCaracter(r.Next(1, 70), r.Next(1, 20), ddx, ddy);

	while (objeto->GetContador() != 30)
	{
		Console::SetCursorPosition(65, 0);
		cout << "numero de rebotes: " << objeto->GetContador();
		objeto->Borrar();
		objeto->Mover();
		objeto->Dibujar();
		_sleep(50);
	}
	Console::SetCursorPosition(30, 24);
	cout << "fin del movimiento " << endl;
	_getch();
}