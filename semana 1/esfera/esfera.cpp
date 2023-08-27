#include<iostream>
#include<conio.h>
#include "Esfera1.h"
using namespace std;

int main()
{
	cesfera* objeto;
	double r;
	//objeto = new cesfera();
	do {
		cout << "ingrese radio: ";
		cin >> r;
	} while (r < 0);
	//objeto->set_radio(r);
	objeto = new cesfera(r);
	objeto->set_radio(r);
	cout << "valor del radio = " << objeto->get_radio() << endl;
	cout << "area de la esfera = " << objeto->calcular_area() << endl;
	cout << "volumen de la esfera = " << objeto->calcular_volumen();
	objeto->~cesfera();
	_getch();
	return 0;
}