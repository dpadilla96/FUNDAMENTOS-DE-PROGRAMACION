
#include<iostream>
using namespace std;

int main() {
	int nota;
	cout << "Bienvenido al programa para la clasificaci�n de alumnos" << endl;
	cout << "Las notas tiene que ser del 1 al 10" << endl;
	cout << "Ingresa tu nota por favor" << endl;
	cin >> nota;
	switch (nota) {
	case 1: case 2: case 3: case 4:
		cout << "Correspondes a la clasificaci�n D" << endl;
		cout << "Eres un alumno PESIMO" << endl;
		break;
	case 6: case 5:
		cout << "Correspondes a la clasificaci�n C" << endl;
		cout << "Eres un alumno MALO" << endl;
		break;
	case 7:
		cout << "Correspondes a la clasificaci�n B" << endl;
		cout << "Eres un alumno REGULAR" << endl;
		break;
	case 8: case 9: case 10:
		cout << "Correspondes a la clasificac�n A" << endl;
		cout << "Eres un alumno BUENO" << endl;
		break;
	default:
		cout << "Este numero no entra en el rango por favor intentelo de nuevo" << endl;
	}
	return 0;
}

