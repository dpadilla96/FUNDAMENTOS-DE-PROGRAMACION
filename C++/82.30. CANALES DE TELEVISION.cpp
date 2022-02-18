#include<iostream>
using namespace std;

int main() {
	int c;
	cout << "Bienvenido a la Guía de TV de NIANAVISIÓN" << endl;
	cout << "Ingresa un canal y te dire el nombre" << endl;
	cin >> c;
	switch (c) {
	case 1:
		cout << "FOX" << endl;
		break;
	case 2:
		cout << "MTV" << endl;
		break;
	case 3:
		cout << "Azteca 7" << endl;
		break;
	case 4:
		cout << "Televisa" << endl;
		break;
	case 5:
		cout << "Azteca 13" << endl;
		break;
	case 6:
		cout << "Discovery Channel" << endl;
		break;
	case 7:
		cout << "National Geographic" << endl;
		break;
	case 8:
		cout << "HBO Channel" << endl;
		break;
	case 9:
		cout << "Cartoon Network" << endl;
		break;
	case 10:
		cout << "Disney Channel" << endl;
		break;
	case 11:
		cout << "Nickelodion" << endl;
		break;
	case 12:
		cout << "Discovery H&H" << endl;
		break;
	case 13:
		cout << "Sony" << endl;
		break;
	case 14:
		cout << "Universal Channel" << endl;
		break;
	case 15:
		cout << "SPACE Channel" << endl;
		break;
	default:
		cout << "Estamos trabajando para traerle mas canales" << endl;
		cout << "Por su comprension; Gracias" << endl;
	}
	return 0;
}

