
#include<iostream>
using namespace std;

int main() {
	int carrera;
	float promedio;
	float res;
	float semestre;
	// construir un programa tal quedados como datos la patricula de un alumno, la carrera en la que este inscrito, su semestre y su promedio determine si este 
	// es apto para pertenecer a ALGUNA DE LAS FACULTADES MENORES QUE TIENE LA UNIVERSIDAD siguiendo las especificaciones siguientes, economia, debera tener un semestre mayor o igual a 6 y un promedio mayor o igual a 8.8
	// computacion semestre igual a 6 y promedio mayor a 8.5, administracion semestre mayor a 5 y promedio mayor a 8.5
	// contabilidad semestre igual a 5 y promedio 8.5
	cout << "SELECCIONA LA CARRERA A LA QUE QUIERES INGRESAR" << endl;
	cout << "1.Economia, 2.Computacion, 3.Administracion, 4.Contabilidad" << endl;
	cin >> carrera;
	switch (carrera) {
	case 1:
		cout << "elegiste la carrera de economia" << endl;
		cout << "Ingresa tu semestre" << endl;
		cin >> semestre;
		if (semestre>=6) {
			cout << "Bien, ahora ingresa tu promedio" << endl;
			cin >> promedio;
			if (promedio>=8.8) {
				cout << "Felicidades, puedes ingresar a esta carrera" << endl;
			} else {
				cout << "Lo siento, pero no puedes ingresar a esta carrera" << endl;
			}
		} else {
			cout << "Lo siento, pero no puedes ingresar a esta carrera" << endl;
		}
		break;
	case 2:
		cout << "elegiste la carrera de computacion" << endl;
		cout << "Ingresa tu semestre" << endl;
		cin >> semestre;
		if (semestre==6) {
			cout << "Bien, ahora ingresa tu promedio" << endl;
			cin >> promedio;
			if (promedio>8.5) {
				cout << "Felicidades, puedes ingresar a esta carrera" << endl;
			} else {
				cout << "Lo siento, pero no puedes ingresar a esta carrera" << endl;
			}
		} else {
			cout << "Lo siento, pero no puedes ingresar a esta carrera" << endl;
		}
		break;
	case 3:
		cout << "elegiste la carrera de administracion" << endl;
		cout << "Ingresa tu semestre" << endl;
		cin >> semestre;
		if (semestre>5) {
			cout << "Bien, ahora ingresa tu promedio" << endl;
			cin >> promedio;
			if (promedio>8.5) {
				cout << "Felicidades, puedes ingresar a esta carrera" << endl;
			} else {
				cout << "Lo siento, pero no puedes ingresar a esta carrera" << endl;
			}
		} else {
			cout << "Lo siento, pero no puedes ingresar a esta carrera" << endl;
		}
		break;
	case 4:
		cout << "elegiste la carrera de contabilidad" << endl;
		cout << "Ingresa tu semestre" << endl;
		cin >> semestre;
		if (semestre==5) {
			cout << "Bien, ahora ingresa tu promedio" << endl;
			cin >> promedio;
			if (promedio==8.5) {
				cout << "Felicidades, puedes ingresar a esta carrera" << endl;
			} else {
				cout << "Lo siento, pero no puedes ingresar a esta carrera" << endl;
			}
		} else {
			cout << "Lo siento, pero no puedes ingresar a esta carrera" << endl;
		}
		break;
	default:
		cout << "la carrera que elegiste no se encuentra aqui" << endl;
	}
	return 0;
}

