
#include<iostream>
using namespace std;

int main() {
	int conjunto[10];
	int i;
	int mayor;
	int menor;
	float prom;
	int suma;
	i = 0;
	suma = 0;
	cout << "Ingrese un numero" << endl;
	cin >> conjunto[0];
	suma = suma+conjunto[0];
	mayor = conjunto[0];
	menor = conjunto[0];
	cout << "Ingrese un numero" << endl;
	cin >> conjunto[1];
	suma = suma+conjunto[1];
	if (conjunto[1]>mayor) {
		mayor = conjunto[1];
	}
	if (conjunto[1]<menor) {
		menor = conjunto[1];
	}
	cout << "Ingrese un numero" << endl;
	cin >> conjunto[2];
	suma = suma+conjunto[2];
	if (conjunto[2]>mayor) {
		mayor = conjunto[2];
	}
	if (conjunto[2]<menor) {
		menor = conjunto[2];
	}
	cout << "Ingrese un numero" << endl;
	cin >> conjunto[3];
	suma = suma+conjunto[3];
	if (conjunto[3]>mayor) {
		mayor = conjunto[3];
	}
	if (conjunto[3]<menor) {
		menor = conjunto[3];
	}
	cout << "Ingrese un numero" << endl;
	cin >> conjunto[4];
	suma = suma+conjunto[4];
	if (conjunto[4]>mayor) {
		mayor = conjunto[4];
	}
	if (conjunto[4]<menor) {
		menor = conjunto[4];
	}
	cout << "Ingrese un numero" << endl;
	cin >> conjunto[5];
	suma = suma+conjunto[5];
	if (conjunto[5]>mayor) {
		mayor = conjunto[5];
	}
	if (conjunto[5]<menor) {
		menor = conjunto[5];
	}
	cout << "Ingrese un numero" << endl;
	cin >> conjunto[6];
	suma = suma+conjunto[6];
	if (conjunto[6]>mayor) {
		mayor = conjunto[6];
	}
	if (conjunto[6]<menor) {
		menor = conjunto[6];
	}
	cout << "Ingrese un numero" << endl;
	cin >> conjunto[7];
	suma = suma+conjunto[7];
	if (conjunto[7]>mayor) {
		mayor = conjunto[7];
	}
	if (conjunto[7]<menor) {
		menor = conjunto[7];
	}
	cout << "Ingrese un numero" << endl;
	cin >> conjunto[8];
	suma = suma+conjunto[8];
	if (conjunto[8]>mayor) {
		mayor = conjunto[8];
	}
	if (conjunto[8]<menor) {
		menor = conjunto[8];
	}
	cout << "Ingrese un numero" << endl;
	cin >> conjunto[9];
	suma = suma+conjunto[9];
	if (conjunto[9]>mayor) {
		mayor = conjunto[9];
	}
	if (conjunto[9]<menor) {
		menor = conjunto[9];
	}
	prom = suma/10;
	cout << "La suma es " << suma << endl;
	cout << "El promedio es " << prom << endl;
	cout << "El mayor es " << mayor << endl;
	cout << "EL menor es " << menor << endl;
	return 0;
}

