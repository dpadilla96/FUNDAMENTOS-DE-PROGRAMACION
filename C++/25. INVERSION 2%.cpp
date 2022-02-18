
#include<iostream>
using namespace std;

// UN INDIVIDUO DESEA INVERTIR SU CAPITAL EN UN BANCO Y DESEA SABER CUANTO DINERO GANARA
// DESPUES DE UN MES SI EL BANCO PAGA A RAZON 2% MENSUAL
int main() {
	float dinero;
	float inversion;
	float total;
	cout << "BIENVENIDO AL PROGRAMA DE CALCULO DE INVERSION" << endl;
	cout << "POR FAVOR INGRESE LA CANTIDAD QUE VA A INVERTIR" << endl;
	cin >> dinero;
	cout << "LA TASA MENSUAL DE INVERSION ES DE 2%" << endl;
	inversion = dinero*.02;
	cout << "LA INVERSIÓN ADQUIRIDA POR ESTE MONTO ES DE: $" << inversion << endl;
	total = inversion+dinero;
	cout << "EL MONTO FINAL ASQUIRIDO SERA DE: $" << total << endl;
	return 0;
}

