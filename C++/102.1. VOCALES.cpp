//DIANA PADILLA ZAMORA
#include<iostream>
using namespace std;

int main() {
	string a;
	int voc;
	cout << "Bienvenido al programa que te muestra el numero de cada vocal" << endl;
	do {
		cout << "Por favor ingresa un número del 1 al 5" << endl;
		cin >> voc;
		switch (voc) {
		case 1:
			cout << "A" << endl;
			break;
		case 2:
			cout << "E" << endl;
			break;
		case 3:
			cout << "I" << endl;
			break;
		case 4:
			cout << "O" << endl;
			break;
		case 5:
			cout << "U" << endl;
			break;
		default:
			cout << "El dato no se encontro, no existe esa vocal" << endl;
		}
		cout << "Si quieres consultar otra vocal oprime S" << endl;
		cout << "Si deseas terminar el proceso oprime N" << endl;
		cin >> a;
	} while (!((a!="s" && a!="S")));
	return 0;
}

