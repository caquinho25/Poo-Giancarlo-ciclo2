#pragma once
#include <iostream>
#include <conio.h>

using namespace std;

class CPersona {
private:
	string nombre;
	int edad;
	int dni;
	char sexo;
	double peso;
	double altura;

public:
	//CONSTRUCTOR CON VALORES POR DEFECTO
	CPersona() {
		nombre = " ";
		edad = 0;
		dni = 0;
		sexo = 'H';
		peso = 0.0;
		altura = 0.0;
	}

	//SEGUNDO CONSTRUCTOR - SOBRECARGA DE CONSTRUCTOR
	CPersona(string nombre, int pedad, char sexo) {
		this->nombre = nombre;
		edad = pedad;
		this->sexo = sexo;
		peso = 0.0;
		altura = 0.0;
		//FALTA AGREGAR LA FUNCION DEL DNI QUE SE GENERA ALEATOREAMENTE
		generarDNI();
	}

	//TERCER CONSTRUCTOR - SOBRECARGA DE CONSTRUCTOR
	CPersona(string nombre, int pedad, char sexo, double peso, double altura) {
		this->nombre = nombre;
		edad = pedad;
		this->sexo = sexo;
		this->peso = peso;
		this->altura = altura;
		//FALTA AGREGAR LA FUNCION DEL DNI QUE SE GENERA ALEATOREAMENTE
		generarDNI();
	}

	~CPersona() {}

	//-----METODO GET-----
	//--EL METODO GET SIEMPRE SERA DEL TIPO DE VARIABLE DEL ATRIBUTO, OJO RECORDAR!!!!!!--
	string getNombre() { return nombre; }
	int getEdad() { return edad; }
	char getSexo() { return sexo; }
	double getPeso() { return peso; }
	double getAltura() { return altura; }

	//-----METODO SET-----
	void setNombre(string nombre) { this->nombre = nombre; }
	void setEdad(int edad) { this->edad = edad; }
	void setSexo(char sexo) { this->sexo = sexo; }
	void setPeso(double peso) { this->peso = peso; }
	void setAltura(double altura) { this->altura = altura; }

	//--------METODOS O FUNCIONES--------
	int calcularIMC() {
		double pesoIdeal;

		pesoIdeal = peso / (pow(altura, 2)); // altura*altura

		if (pesoIdeal < 20) {
			//ESTA EN SU PESO IDEAL
			return -1;
		}
		else {
			if (pesoIdeal >= 20 && pesoIdeal <= 25) {
				//ESTA POR DEBAJO DE SU PESO
				return 0;
			}
			else {
				//TIENE OBESIDAD
				return 1;
			}
		}
	}

	bool esMayorDeEdad() {
		if (edad >= 18) {
			return true;
		}
		else {
			return false;
		}
	}

	void comprobarSexo(char sexo) {
		if (sexo != 'H' && sexo != 'M') {
			this->sexo = 'H';
			cout << "Las opciones para ingresar son H y M" << endl;
		}
		else {
			cout << "Se completo de manera exitosa" << endl;
		}
	}

	void generarDNI() {
		//genera un número aleatorio de 8 cifras
		dni = rand() % 10000000 + 10000000;
	}

	void devolverInfo() {
		cout << "Nombre: " << nombre << endl;
		cout << "Edad: " << edad << endl;
		cout << "Sexo: " << sexo << endl;
		cout << "DNI: " << dni << endl;
		cout << "Peso: " << peso << endl;
		cout << "Altura: " << altura << endl;
	}
};