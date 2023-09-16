#pragma once
#include "Carro.h"
class Manejador
{private:
	int posmeta;
	int numautos;
	vector<Carro> vecCarros;
public:
	Manejador(int pnumautos, int pmeta);
	~Manejador();
	bool HayGanador();
	void Correr();
	void DibujaMeta();
};
Manejador::Manejador(int pnumautos, int pmeta)
{	Random f;
	posmeta = pmeta;
	numautos = pnumautos;
	for (int i = 0; i < numautos; i++)
		vecCarros.push_back(Carro(0, i * 5,f.Next(1,6),f.Next(1,15)));
}
Manejador::~Manejador()
{	vecCarros.erase(vecCarros.begin(), vecCarros.end());}
void Manejador::DibujaMeta()
{	for (int i = 0; i < 24; i++)
	{	Console::ForegroundColor = ConsoleColor::White;
		Console::SetCursorPosition(posmeta, i);
		cout << (char)177;
	}
}
void Manejador::Correr()
{	for (int i = 0; i < numautos; i++)
	{	vecCarros[i].borrar();
		vecCarros[i].mover();
		vecCarros[i].dibujar();
	}
}
bool Manejador::HayGanador()
{	for (int i = 0; i < numautos; i++)
		if (vecCarros[i].GetX() + 3 >= posmeta)
			return true;	
	return false;
}