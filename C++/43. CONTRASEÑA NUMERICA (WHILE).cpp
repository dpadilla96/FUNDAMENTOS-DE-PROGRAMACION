//DIANA PADILLA ZAMORA

#include<iostream>
using namespace std;

int main() {
	float contra;
	// CREA UN PROGRAMA QUE LE PIDA AL USUARIO SU CONTRASEÑA (NUMERICA). 
	// DEBERA TERMINAR CUANDO INTRODUZCA COMO CONTRASEÑA EL NUMERO 4567
	// PERO VOLVERA A PEDIR TANTAS VECES COMO SEA NECESARIO 
	contra = 1;
	while (contra<4567) {
		cout << "INGRESA TU CONTRASEÑA POR FAVOR" << endl;
		cin >> contra;
	}
	return 0;
}

