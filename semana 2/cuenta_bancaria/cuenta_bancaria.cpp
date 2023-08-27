#include <conio.h>
#include "cuenta.h"

void Menu()
{
	cout << "--------------------------------------" << endl;
	cout << "1. Crear numero de cuenta" << endl;
	cout << "2. Actualizar Saldo" << endl;
	cout << "3. Ingresar Dinero" << endl;
	cout << "4. Retirar Dinero" << endl;
	cout << "5. Mostrar todos los datos de la cuenta" << endl;
	cout << "0. Salir" << endl;
	cout << "--------------------------------------" << endl;
}

int main()
{
	setlocale(LC_ALL, "spanish");
	CCuenta* objeto;
	Random NCuenta;
	int dni;
	double saldoinicial;
	double interes;

	cout << "--------------------------------------" << endl;
	do {
		cout << "Ingresar DNI : " << endl;
		cin >> dni;
	} while (dni < 10000000 || dni > 99999999);

	cout << endl;
	cout << "Escribe un saldo inicial :" << endl;
	cin >> saldoinicial;
	cout << endl;
	cout << "Escribe un interes anual: " << endl;
	cin >> interes;
	cout << endl;

	objeto = new CCuenta(NCuenta.Next(10001, 99999), dni, saldoinicial, interes);

	char opcion;
	do {
		Menu();
		cout << "Ingresar una opcion: ";
		cin >> opcion;

		switch (opcion){
		case '1':
			cout << "El numero de cuenta creado es = " << objeto->Get_Ncuenta() << endl;
			break;
		case '2':
			cout << "La actualizacion del saldo es = " << objeto->ActualizarSaldo() << endl;
			break;
		case '3':
			cout << "Cuanto quieres ingresar ? = ";
			double aumen;
			cin >> aumen;
			cout << "Se tiene ahora = " << objeto->Ingresar(aumen) << endl;
			break;
		case '4':
			cout << "Cuanto quieres retirar ? = ";
			double desc;
			cin >> desc;
			cout << "Se tiene ahora = " << objeto->Retirar(desc) << endl;
			break;
		case '5':
			cout << "------------------------------" << endl;
			cout << "Numero de cuenta bancaria: " << objeto->Get_Ncuenta() << endl;
			cout << "Numero de DNI: " << objeto->Get_dni() << endl;
			cout << "Saldo actual : " << objeto->Get_saldo() << endl;
			break;
		case '0':
			cout << "SALIENDO DEL PROGRAMA..." << endl;
			break;

		default:
			cout << "Opción inválida. Intente nuevamente." << endl;
			break;
		}

	} while (opcion != '0');

	objeto->~CCuenta();

	_getch();
	return 0;
}