
#include<iostream>
using namespace std;

int main() {
	int n;
	cout << "Bienvenido al programa de vocales" << endl;
	cout << "Ingrese un numero y te dire que vocal es:" << endl;
	cin >> n;
	switch (n) {
	case 1:
		cout << "La vocal numero 1 es la A" << endl;
		break;
	case 2:
		cout << "La vocal numero 2 es la E" << endl;
		break;
	case 3:
		cout << "La vocal numero 3 es la I" << endl;
		break;
	case 4:
		cout << "La vocal numero 4 es la O" << endl;
		break;
	case 5:
		cout << "La vocal numero 5 es la U" << endl;
		break;
	default:
		cout << "Nada mas existen 5 vocales que mas esperabas" << endl;
	}
	return 0;
}

