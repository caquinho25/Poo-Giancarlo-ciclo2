#include "vector.h"

int main() {
	char opcion;
	int valor;
	CVector* objeto;
	objeto = new CVector();
	
	do {
		cout << "Ingrese un valor: ";
		cin >> valor;
		objeto->Agregar(valor);
		do {
			cout << "¿Quieres ingresar otro valor? (S/N) "; cin >> opcion;
			opcion = toupper(opcion);
		} while (opcion != 'S' && opcion != 'N');
	} while (opcion != 'N');
	cout << "Datos ingresados\n";
	for (int i = 0; i < objeto->Get_nele(); i++) {
		cout << objeto->Get_Elemento(i) << " ";
	}
	cout << endl;
	cout << "inserta al incio valor de 100\n";
	objeto->Insertar_al_inicio(100);
	cout << "inserta al final el valor de 200\n";
	objeto->Insertar_al_final(200);
	cout << "inserta el valor de 300 en posicion 1\n";
	objeto->Insertar_en_posicion(1, 300);
	cout << "listado de datos: \n";
	for (int i = 0; i < objeto->Get_nele(); i++) {
		cout << objeto->Get_Elemento(i) << " ";
	}
	cout << endl;
	cout << "eliminar al final\n";
	objeto->Eliminar_al_final();
	cout << "eliminar el elemento de posicion 2\n";
	objeto->Eliminar_en_posicion(2);
	cout << "listado luego de eliminar: \n";
	for (int i = 0; i < objeto->Get_nele(); i++) {
		cout << objeto->Get_Elemento(i) << " ";
	}
	objeto->~CVector();
	system("pause");
	return 0;
}


