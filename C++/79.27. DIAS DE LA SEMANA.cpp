//DIANA PADILLA ZAMORA 
#include<iostream>
using namespace std;

int main() {
	int n;
	cout << "Bienvenido al programa de dias de la semana" << endl;
	cout << "Por favor ingresa un numero y te dire el día de la semana" << endl;
	cin >> n;
	switch (n) {
	case 1:
		cout << "Domingo" << endl;
		break;
	case 2:
		cout << "Lunes" << endl;
		break;
	case 3:
		cout << "Martes" << endl;
		break;
	case 4:
		cout << "Miercoles" << endl;
		break;
	case 5:
		cout << "Jueves" << endl;
		break;
	case 6:
		cout << "Viernes" << endl;
		break;
	case 7:
		cout << "Sabado" << endl;
		break;
	default:
		cout << "No hay mas días, que no conoces los dias de la semana" << endl;
		cout << "¿Acaso eres algun alienigena?" << endl;
	}
	return 0;
}

