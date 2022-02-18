
#include<iostream>
using namespace std;


// DADA LA CANTIDAD EN PESOS, OBTENER LA EQUIVALENCIA EN DOLARES, 
// ASUMIENDO QUE LA UNIDAD CAMBIARÍA ES UN DATO DESCONOCIDO
int main() {
	float pesos;
	float tasa;
	float total;
	cout << "PROGRAMA DE CALCULO DE TASA CAMBIARIA" << endl;
	cout << "INGRESA LA CANTIDAD DE PESOS" << endl;
	cin >> pesos;
	cout << "INGRESA LA TASA DEL DÍA DE HOY" << endl;
	cin >> tasa;
	total = pesos/tasa;
	cout << "TOTAL: $" << total << endl;
	return 0;
}

