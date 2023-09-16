#pragma once
class CFigura
{
protected:
	int x, y, dx, ancho;
public:
	CFigura();
	CFigura(int px, int py, int pdx, int pancho);
	void Mover();
};
//implementacion
CFigura::CFigura(){}
CFigura::CFigura(int px, int py, int pdx, int pancho) {
	x = px; y = py; dx = pdx; ancho = pancho;
}
void CFigura::Mover() {
	if (x + dx < 0 || x + ancho + dx>79)dx = -dx;
	x = x + dx;
}