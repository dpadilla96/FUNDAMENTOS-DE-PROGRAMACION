
#include<iostream>
using namespace std;

int main() {
	int numero;
	int total;
	int x;
	// realiza un programa tal que dado como dato un numero entero obtenga la tabla del 1 al 10 
	// inicializar
	total = 0;
	cout << "BIENVENIDO AL PROGRAMA DE TABLAS DE MULTIPLICAR" << endl;
	cout << "INGRESA UN NUMERO  " << endl;
	cin >> numero;
	for (x=1;x<=10;x++) {
		total = numero*x;
		cout << numero << "*" << x << "=" << total << endl;
	}
	return 0;
}

