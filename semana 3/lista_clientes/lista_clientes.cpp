#include "vector_cliente.h"
using namespace System;

void menu() {
	cout << "MENU DE OPCIONES\n";
	cout << "================\n\n";
	cout << "1. Agregar cliente\n";
	cout << "2. Eliminar cliente\n";
	cout << "3. Promedio de sueldo\n";
	cout << "4. Ordenar por distrito\n";
	cout << "5. Ordenar por nombre\n";
	cout << "6. Edad de un cliente\n";
	cout << "7. Mostrar los clientes\n";
	cout << "8. Salir\n";

}

void main() {
	string dni, nombre, distrito;
	int fecha, opcion;
	double sueldo;
	CVector_clientes* objeto;
	objeto = new CVector_clientes();
	do {
		Console::Clear();
		menu();
		do {
			cout << "ingrese opcion: "; cin >> opcion;
		} while (opcion < 1 || opcion >8);
		switch (opcion) {
		case 1:
			cout << "ingrese de nuevo cliente\n";
			cout << "ingrese dni: "; cin >> dni;
			cout << "ingrese nombre: "; cin >> nombre;
			cout << "ingrese distrito: "; cin >> distrito;
			cout << "ingrese fecha de nacimiento: "; cin >> fecha;
			cout << "ingrese sueldo: "; cin >> sueldo;
			objeto->agregar_cliente(dni, nombre, distrito, fecha, sueldo);
			break;
		case 2:
			cout << "eliminar un cliente\n";
			cout << "ingrese dni: "; cin >> dni;
			objeto->eliminar_cliente(dni);
			break;
		case 3:
			cout << "sueldo promedio de los clientes\n";
			cout << "promedio = " << objeto->sueldo_promedio() << endl;
			break;
		case 4:
			cout << "ordenamiento por distrito\n";
			objeto->ordenar_x_distrito();
			break;
		case 5:
			cout << "ordenamiento por nombre\n";
			objeto->ordenar_x_nombre();
			break;
		case 6:
			cout << "edad de un cliente\n";
			cout << "ingrese su dni: "; cin >> dni;
			cout << "edad= " << objeto->edad_cliente(dni) << endl;
			break;
		case 7:
			cout << "listado de clientes\n";
			objeto->mostrar_clientes();
			break;
		}
		if (opcion != 8)
			system("pause");
	} while (opcion != 8);
}