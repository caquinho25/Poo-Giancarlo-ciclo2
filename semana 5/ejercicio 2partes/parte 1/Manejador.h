#pragma once
#include "Cuadrado.h"
#include <vector>

class CManejador
{
private:
	vector<CCuadrado> veccua;
public:
	CManejador();
	void Insertar();
	void Dibujar();
	void Mover();
	void Borrar();
	void Cambiar_Direccion_Vertical();
	void Cambiar_Direccion_Horizontal();
	void Cambiar_Relleno();

};

CManejador::CManejador()
{

}
void CManejador::Insertar()
{
	Random r;
	int tipo = r.Next(1, 3);
	if (tipo == 1)
	{
		veccua.push_back(CCuadrado(r.Next(1,69),r.Next(1,18),0,1
			,tipo,r.Next(2,6)));
	}
	else
	{
		veccua.push_back(CCuadrado(r.Next(1, 69), r.Next(1, 18),1, 0,
			tipo, r.Next(2, 6)));

	}
}

void CManejador::Dibujar()
{
	for (int i = 0; i < veccua.size(); i++)
		veccua[i].Dibujar();
}
void CManejador::Borrar()
{
	for (int i = 0; i < veccua.size(); i++)
		veccua[i].Borrar();
}
void CManejador::Mover()
{
	for (int i = 0; i < veccua.size(); i++)
		veccua[i].Mover();
}
void CManejador::Cambiar_Direccion_Vertical()
{
	for (int i = 0; i < veccua.size(); i++)
		veccua[i].SetDy(veccua[i].GetDy() * -1);
}
void CManejador::Cambiar_Direccion_Horizontal()
{
	for (int i = 0; i < veccua.size(); i++)
		veccua[i].SetDx(veccua[i].GetDx() * -1);
}
void CManejador::Cambiar_Relleno()
{
	for (int i = 0; i < veccua.size(); i++)
		if (veccua[i].GetRelleno() == 0)
			veccua[i].SetRelleno(1);
		else
			veccua[i].SetRelleno(0);
}













