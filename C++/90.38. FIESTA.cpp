
#include<iostream>
using namespace std;

int main() {
	float edad;
	float emax;
	float emin;
	float p;
	float promedio;
	float s;
	float x;
	p = 0;
	s = 0;
	emax = 0;
	emin = 99;
	cout << "Nota: Si deseas terminar el ingreso de datos teclea 0" << endl;
	do {
		cout << "¿Cual es tu edad?" << endl;
		cin >> edad;
		if ((edad>=18)) {
			s = s+edad;
			p = p+1;
			cout << "Bienvenido a la fiesta que te diviertas" << endl;
		} else {
			cout << "No puedes entrar chamaco" << endl;
		}
		if ((edad>emax)) {
			emax = edad;
			if ((edad<emin)) {
				emin = edad;
			}
		}
		cout << "¿Desea ingresar otro invitado?" << endl;
		cout << "1-SI" << endl;
		cout << "0-NO" << endl;
		cin >> x;
	} while ((x!=0));
	promedio = s/p;
	cout << "La persona de menor edad tiene: " << emin << " años" << endl;
	cout << "La persona de mayor edad tiene: " << emax << " años" << endl;
	cout << "El promedio de la edad de las personas que ingresaron es de: " << promedio << endl;
	cout << "El numero de personas en la fiesta es de: " << p << endl;
	return 0;
}

