

#include<iostream>
using namespace std;


// UN VENDEDOR RECIBE UN SUELDO BASE MAS UN 10% EXTRA POR COMISION DE SUS VENTAS, 
// EL VENDEDOR DESEA SABER CUANTO DINERO OBTENDRÁ POR CONCEPTO DE COMISIONES POR LAS TRES 
// VENTAS QUE REALIZA EN EL MES Y EL TOTAL QUE RECIBIRÁ EN EL MES TOMANDO EN CUENTA SU 
// SUELDO BASE Y COMISIONES
int main() {
	float c1;
	float c2;
	float c3;
	float comision;
	float sbase;
	float sfinal;
	float v1;
	float v2;
	float v3;
	float ventas;
	cout << "BIENVENIDO AL PROGRAMA DE CALCULO DE SUELDO CON COMISIONES" << endl;
	cout << "POR FAVOR INSERTA TU SUELDO BASE" << endl;
	cin >> sbase;
	cout << "INGRESE EL MONTO DE SU VENTA 1" << endl;
	cin >> v1;
	c1 = v1*.10;
	cout << "INGRESE EL MONTO DE SU VENTA 2" << endl;
	cin >> v2;
	c2 = v2*.10;
	cout << "INGRESE EL MONTO DE SU VENTA 3" << endl;
	cin >> v3;
	c3 = v3*.10;
	ventas = v1+v2+v3;
	comision = c1+c2+c3;
	cout << "EL MONTO VENDIDO EN EL MES ES DE $" << ventas << endl;
	cout << "LA COMISION QUE TE CORRESPONDE ES DE $" << comision << endl;
	sfinal = comision+sbase;
	cout << "TU SUELDO FINAL ES DE $" << sfinal << endl;
	return 0;
}

