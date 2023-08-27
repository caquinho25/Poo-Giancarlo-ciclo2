#pragma once
#include <iostream>
using namespace System;
using namespace std;
class CCuenta{
private:
	long long Ncuenta;
	int dni;
	double saldo;
	double interesAnual;
	double aumento;
	double descuento;
public:
	CCuenta();
	CCuenta(long long NCuenta, int DNI, double Saldo, double Interes);
	~CCuenta();
	long long Get_Ncuenta();
	long long Get_dni();
	double Get_saldo();
	double Get_interesAnual();
	double Get_aumento();
	double Get_descuento();
	double ActualizarSaldo();
	double Ingresar(double Aumento);
	double Retirar(double Descuento);
};

CCuenta::CCuenta(){
	Ncuenta = 0; dni = 0; saldo = 0; interesAnual = 0; aumento = 0; descuento = 0;
}
CCuenta::CCuenta(long long NCuenta, int DNI, double Saldo, double Interes){
	Ncuenta = NCuenta; dni = DNI; saldo = Saldo; interesAnual = Interes;
}

CCuenta::~CCuenta(){}
long long CCuenta::Get_Ncuenta(){
	return Ncuenta;
}

long long CCuenta::Get_dni(){
	return dni;
}
double CCuenta::Get_saldo(){
	return saldo;
}
double CCuenta::Get_interesAnual(){
	return interesAnual;
}
double CCuenta::Get_aumento(){
	return aumento;
}
double CCuenta::Get_descuento(){
	return descuento;
}
double CCuenta::ActualizarSaldo(){
	return saldo = saldo + (saldo) * (interesAnual / 365);
}
double CCuenta::Ingresar(double Aumento){
	aumento = Aumento;
	return saldo = saldo + aumento;
}
double CCuenta::Retirar(double Descuento){
	descuento = Descuento;
	if (saldo < descuento)
		cout << "Error";
	else
		saldo = saldo - descuento;
	return saldo;
}