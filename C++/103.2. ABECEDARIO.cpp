// DIANA PADILLA ZAMORA

#include<iostream>
using namespace std;


int main() {
	string a;
	int voc;
	cout << "Bienvenido al programa que te muestra el numero de cada letra del abecedario" << endl;
	do {
		cout << "Por favor ingresa un número del 1 al 27" << endl;
		cin >> voc;
		switch (voc) {
		case 1:
			cout << "A" << endl;
			break;
		case 2:
			cout << "B" << endl;
			break;
		case 3:
			cout << "C" << endl;
			break;
		case 4:
			cout << "D" << endl;
			break;
		case 5:
			cout << "E" << endl;
			break;
		case 6:
			cout << "F" << endl;
			break;
		case 7:
			cout << "G" << endl;
			break;
		case 8:
			cout << "H" << endl;
			break;
		case 9:
			cout << "I" << endl;
			break;
		case 10:
			cout << "J" << endl;
			break;
		case 11:
			cout << "K" << endl;
			break;
		case 12:
			cout << "L" << endl;
			break;
		case 13:
			cout << "M" << endl;
			break;
		case 14:
			cout << "N" << endl;
			break;
		case 15:
			cout << "Ñ" << endl;
			break;
		case 16:
			cout << "O" << endl;
			break;
		case 17:
			cout << "P" << endl;
			break;
		case 18:
			cout << "Q" << endl;
			break;
		case 19:
			cout << "R" << endl;
			break;
		case 20:
			cout << "S" << endl;
			break;
		case 21:
			cout << "T" << endl;
			break;
		case 22:
			cout << "U" << endl;
			break;
		case 23:
			cout << "V" << endl;
			break;
		case 24:
			cout << "W" << endl;
			break;
		case 25:
			cout << "X" << endl;
			break;
		case 26:
			cout << "Y" << endl;
			break;
		case 27:
			cout << "Z" << endl;
			break;
		default:
			cout << "El dato no se encontro, no existe esa letra" << endl;
		}
		cout << "Si quieres consultar otra letra oprime S" << endl;
		cout << "Si deseas terminar el proceso oprime N" << endl;
		cin >> a;
	} while (!((a!="s" && a!="S")));
	return 0;
}

