//DIANA PADILLA ZAMORA

#include<iostream>
using namespace std;


int main() {
	int opc;
	int res;
	cout << "BIENVENIDO AL PROGRAMA DE LOS DIAS DE LA SEMANA" << endl;
	res = 1;
	while (res==1) {
		cout << "INGRESA UN NUMERO DEL 1 AL 7 Y TE DIRE EL DIA DE LA SEMANA" << endl;
		cin >> opc;
		switch (opc) {
		case 1:
			cout << "DOMINGO" << endl;
			break;
		case 2:
			cout << "LUNES" << endl;
			break;
		case 3:
			cout << "MARTES" << endl;
			break;
		case 4:
			cout << "MIERCOLES" << endl;
			break;
		case 5:
			cout << "JUEVES" << endl;
			break;
		case 6:
			cout << "VIERNES" << endl;
			break;
		case 7:
			cout << "SABADO" << endl;
			break;
		default:
			cout << "PUES CUANTOS DIAS CREES QUE TIENE LA SEMANA O QUE" << endl;
		}
		cout << "DESEA VER OTRO DIA" << endl;
		cout << "1. SI " << endl;
		cout << "2. NO " << endl;
		cin >> res;
	}
	return 0;
}

