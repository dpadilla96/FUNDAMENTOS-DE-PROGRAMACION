//DIANA PADILLA ZAMORA

#include<iostream>
using namespace std;

int main() {
	float contra;
	// CREA UN PROGRAMA QUE LE PIDA AL USUARIO SU CONTRASEŅA (NUMERICA). 
	// DEBERA TERMINAR CUANDO INTRODUZCA COMO CONTRASEŅA EL NUMERO 4567
	// PERO VOLVERA A PEDIR TANTAS VECES COMO SEA NECESARIO 
	contra = 1;
	while (contra<4567) {
		cout << "INGRESA TU CONTRASEŅA POR FAVOR" << endl;
		cin >> contra;
	}
	return 0;
}

