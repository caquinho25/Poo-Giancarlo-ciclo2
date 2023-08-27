#pragma once
#include <iostream>
#include <conio.h>
using namespace std;
using namespace System;
class figura {
private:
    int x, y, dx;
public:
    figura();
    figura(int xp, int yp, int ddx);
    ~figura();
    int getx();
    int gety();
    void dibujar(int lado);
    void mover(int lado);
    void borrar(int lado);
};

figura::figura() {
    x = 0; y = 0;
}
figura::figura(int xp, int yp, int ddx) {
    x = xp; y = yp; dx = ddx;
}
figura ::~figura() {}

int figura::getx()
{
    return 0;
}
int figura::gety()
{
    return 0;
}

void figura::dibujar(int lado) {
    for (int i = 1; i <= lado; i++) {
        Console::SetCursorPosition(x, i + y);
        for (int j = 1; j <= i; j++)
            if (j == 1 || i == lado || i == j)
                cout << "* ";
            else
                cout << "  ";
    }
}
void figura::borrar(int lado) {
    for (int i = 1; i <= lado; i++) {
        Console::SetCursorPosition(x, i + y);
        for (int j = 1; j <= i; j++)
            if (j == 1 || i == lado || i == j)
                cout << "  ";
            else
                cout << "  ";
    }
}
void figura::mover(int lado) {
    if (dx + x < 0 || dx + x + lado > 79) {
        dx = -dx;
    }
    x = x + dx;
}