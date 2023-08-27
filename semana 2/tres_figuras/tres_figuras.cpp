#include "figuras.h"

int main() {
	int lado, alto, ancho, triangulo, x, y, dx;
	Random r;
	figura* objeto;
	lado = r.Next(1, 10);
	alto = r.Next(1, 10);
	ancho = r.Next(1, 10);
	triangulo = r.Next(1, 10);
	x = r.Next(1, 10);
	y = r.Next(1, 10);
	if (r.Next(0, 2) == 1){
		dx = 1;
	}
	else{
		dx = -1;
	}

	//inicio del objeto de la figura
	objeto = new figura(x, y, dx);
	while (1) {
		objeto->borrar(lado, alto, ancho, triangulo);
		objeto->mover();
		objeto->dibujar(lado, alto, ancho, triangulo);
		_sleep(50);
	}
}