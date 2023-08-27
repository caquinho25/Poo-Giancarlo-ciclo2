#include "triangulo.h"
using namespace std;
using namespace System;
int main() {
    int lado, x, y, dx;
    Random r;
    figura* objeto;
    lado = r.Next(1, 10);
    x = r.Next(1, 60);
    y = r.Next(1, 10);
    //if (r.Next(0, 2) == 1) {
    //    dx = 1;
    //}
    //else {
    //    dx = -1;
    //}
    //     0    1       0   2    -1   1
    dx = r.Next(0, 2) * 2 - 1;



    objeto = new figura(x, y, dx);
    while (1) {
        objeto->borrar(lado);
        objeto->mover(lado);
        objeto->dibujar(lado);
        _sleep(50);
    }
    getch();
}