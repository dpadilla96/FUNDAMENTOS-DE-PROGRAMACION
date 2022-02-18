//DIANA PADILLA ZAMORA

#include<iostream>
using namespace std;


int main() {
	string a;
	int voc;
	cout << "Bienvenido al programa que te muestra el numero que corresponde cada Mes" << endl;
	do {
		cout << "Por favor ingresa un número del 1 al 12" << endl;
		cin >> voc;
		switch (voc) {
		case 1:
			cout << "ENERO" << endl;
			break;
		case 2:
			cout << "FEBRERO" << endl;
			break;
		case 3:
			cout << "MARZO" << endl;
			break;
		case 4:
			cout << "ABRIL" << endl;
			break;
		case 5:
			cout << "MAYO" << endl;
			break;
		case 6:
			cout << "JUNIO" << endl;
			break;
		case 7:
			cout << "JULIO" << endl;
			break;
		case 8:
			cout << "AGOSTO" << endl;
			break;
		case 9:
			cout << "SEPTIEMBRE" << endl;
			break;
		case 10:
			cout << "OCTUBRE" << endl;
			break;
		case 11:
			cout << "NOVIEMBRE" << endl;
			break;
		case 12:
			cout << "DICIEMBRE" << endl;
			break;
		default:
			cout << "El dato no se encontro, no existe ese mes" << endl;
		}
		cout << "Si quieres consultar otro mes oprime S" << endl;
		cout << "Si deseas terminar el proceso oprime N" << endl;
		cin >> a;
	} while (!((a!="s" && a!="S")));
	return 0;
}

