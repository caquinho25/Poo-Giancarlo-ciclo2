#pragma once
#include "cuadrado.h"
#include "triangulo.h"

class CManejador {
private:
	CCuadrado* obj1;
	CCuadrado* obj2;
	CTriangulo* obj3;
public:
	CManejador();
	void Generar();
	void Mostrar();
	void Mover();
	void Borrar();
};
//implementacion
CManejador::CManejador() {}
void CManejador::Generar() {
	obj1 = new CCuadrado(1, 1, 1, 4, 15);
	obj2 = new CCuadrado(40, 12, -1, 3, 11);
	obj3 = new CTriangulo(10, 18, 1, 5, 3);
}
void CManejador::Mostrar() {
	obj1->Mostrar();
	obj2->Mostrar();
	obj3->Mostrar();
}
void CManejador::Mover() {
	obj1->Mover();
	obj2->Mover();
	obj3->Mover();
}
void CManejador::Borrar() {
	obj1->Borrar();
	obj2->Borrar();
	obj3->Borrar();
}
