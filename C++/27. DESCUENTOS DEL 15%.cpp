
#include<iostream>
using namespace std;

// UNA TIENDA OFRECE UN DESCUENTO DEL 15% SOBRE EL TOTAL DE LA COMPRA Y UN CLIENTE DESEA }
// SABER CUANTO DEBERA DE PAGAR FINALMENTE POR SU COMPRA
int main() {
	float compra;
	float descuento;
	float total;
	cout << "BIENVENIDO, DESEA SABER SU SALDO A PAGAR" << endl;
	cout << "YO PUEDO AYUDARLE" << endl;
	cout << "POR FAVOR INGRESE EL MONTO DE SU COMPRA" << endl;
	cin >> compra;
	cout << "EL DÍA DE HOY TENEMOS EL 15% DE DESCUENTO EN TODAS LAS COMPRAS QUE REALICE" << endl;
	descuento = compra*.15;
	cout << "FELICIDADES SU DESCUENTO ES DE $" << descuento << endl;
	total = compra-descuento;
	cout << "SU SALDO FINAL ES DE $" << total << endl;
	return 0;
}

