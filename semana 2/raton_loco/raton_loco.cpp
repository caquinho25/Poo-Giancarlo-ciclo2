#include <conio.h>
#include "Raton.h"

void main()
{
	CRaton* objeto(40, 12);
	do
	{
		
		objeto.Pintar();
		_sleep(20);
		objeto.Borrar();	
		objeto.Mover();
		
	} while (!kbhit());
}
