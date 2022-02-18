
#include<iostream>
using namespace std;

int main() {
	int carrera;
	float promedio;
	int semestre;
	// Construir un programa tal que dados como datos la matricula de un alumno, la carrera en la que esta inscrito, su semestre y su promedio determine si este es
	// apto para pertenecer a alguna de las facultades menores que tiene la universidad siguiendo las especificaciones siguientes:
	// Economia debe tener un semestre igual o mayor a 6 y promedio mayor o igual que 8.8
	// Computación debe tener un semestre igual o mayor 6 y promedio mayor que 8.5
	// Administración debe tener un semestre igual o mayor que 5 y promedio mayor que 8.5
	// Contabilidad debe tener un semestre igual o mayor que 5 y promedio mayor que 8.5
	cout << "Bienvenido al programa para determinar tu ingreso a alguna Facultad" << endl;
	cout << "Selecciona la carrera a la que perteneces" << endl;
	cout << "1. Economía" << endl;
	cout << "2. Computación" << endl;
	cout << "3. Administración" << endl;
	cout << "4. Contabilidad" << endl;
	cin >> carrera;
	switch (carrera) {
	case 1:
		cout << "Perteneces a la carrera de Economía" << endl;
		cout << "Ingresa tu semestre" << endl;
		cin >> semestre;
		cout << "Ingresa tu promedio" << endl;
		cin >> promedio;
		if (semestre>=6 && promedio>=8.8) {
			cout << "Felicidades eres apto para pertenecer a una Facultad Menor" << endl;
		} else {
			cout << "No eres apto para una Facultad Menor" << endl;
		}
		break;
	case 2:
		cout << "Perteneces a la carrera de Computación" << endl;
		cout << "Ingresa tu semestre" << endl;
		cin >> semestre;
		cout << "Ingresa tu promedio" << endl;
		cin >> promedio;
		if (semestre>=6 && promedio>=8.5) {
			cout << "Felicidades eres apto para pertenecer a una Facultad Menor" << endl;
		} else {
			cout << "No eres apto para una Facultad Menor" << endl;
		}
		break;
	case 3:
		cout << "Perteneces a la carrera de Administración" << endl;
		cout << "Ingresa tu semestre" << endl;
		cin >> semestre;
		cout << "Ingresa tu promedio" << endl;
		cin >> promedio;
		if (semestre>=5 && promedio>=8.5) {
			cout << "Felicidades eres apto para pertenecer a una Facultad Menor" << endl;
		} else {
			cout << "No eres apto para una Facultad Menor" << endl;
		}
		break;
	case 4:
		cout << "Perteneces a la carrera de Contabilidad" << endl;
		cout << "Ingresa tu semestre" << endl;
		cin >> semestre;
		cout << "Ingresa tu promedio" << endl;
		cin >> promedio;
		if (semestre>=5 && promedio>=8.5) {
			cout << "Felicidades eres apto para pertenecer a una Facultad Menor" << endl;
		} else {
			cout << "No eres apto para una Facultad Menor" << endl;
		}
		break;
	default:
		cout << "Por el momento no puedes pertener a ninguna Facultad" << endl;
	}
	return 0;
}

