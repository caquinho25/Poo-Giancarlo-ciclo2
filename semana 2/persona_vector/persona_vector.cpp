#include "persona.h"

int main() {
	//ESTA LINEA VA PORQUE USAMOS ESTE TIPO DE RANDOM rand()
	srand(time(NULL));

	//INICIALIZAMOS OBJETOS
	CPersona* objPersona1;
	CPersona* objPersona2;
	CPersona* objPersona3;

	//PRIMERA PERSONA
	cout << "PERSONA 1" << endl;
	objPersona1 = new CPersona("Jesus", 25, 'H');
	objPersona1->devolverInfo();
	cout << "El resultado IMC: " << objPersona1->calcularIMC() << endl;
	cout << "Es mayor de edad?: " << objPersona1->esMayorDeEdad() << endl;

	//SEGUNDA PERSONA
	cout << "PERSONA 2" << endl;
	objPersona2 = new CPersona("Jesus", 25, 'H', 85, 1.83);
	objPersona2->devolverInfo();
	cout << "El resultado IMC: " << objPersona1->calcularIMC() << endl;
	cout << "Es mayor de edad?: " << objPersona1->esMayorDeEdad() << endl;

	//TERCERA PERSONA
	cout << "PERSONA 3" << endl;
	objPersona3 = new CPersona();
	objPersona3->devolverInfo();
	cout << "El resultado IMC: " << objPersona3->calcularIMC() << endl;
	cout << "Es mayor de edad?: " << objPersona3->esMayorDeEdad() << endl;

	_getch();
	return 0;
}