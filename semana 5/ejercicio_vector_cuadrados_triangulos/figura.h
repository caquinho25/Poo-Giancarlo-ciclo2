#pragma once
class CFigura {
protected:
	int x, y, dx, tamanio, contador;
public:
	CFigura(int px,int py,int pdx,int ptamanio);
	~CFigura();
	
	void Mover();
};
//IMPLEMENTACION
CFigura::CFigura(int px, int py, int pdx, int ptamanio) {
	x = px; y = py; dx = pdx; tamanio = ptamanio;
}
CFigura::~CFigura() {}

void CFigura::Mover() {
	if (x + dx < 0 || x + tamanio + dx>79) dx = -dx;
	x = x + dx;
}