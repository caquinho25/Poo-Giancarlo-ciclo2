#pragma once
class cesfera
{
private:
	double radio;
public:
	//constructores
	cesfera();
	cesfera(double pradio);
	//destructor
	~cesfera();
	//metodos de acceso
	void set_radio(double pradio);
	double get_radio();
	//otros metodos
	double calcular_area();
	double calcular_volumen();
};
//iplementacion
cesfera::cesfera()
{
	radio = 0;
}
cesfera::cesfera(double pradio)
{
	radio = pradio;
}
cesfera::~cesfera()
{}

void cesfera::set_radio(double pradio)
{
	if (pradio < 0)
		radio = 0;
	else
		radio = pradio;
}
double cesfera::get_radio()
{
	return radio;
}
double cesfera::calcular_area()
{
	return 4 * 3.141592 * radio * radio;
}
double cesfera::calcular_volumen()
{
	return 4 * 3.141592 * radio * radio * radio / 3;
}