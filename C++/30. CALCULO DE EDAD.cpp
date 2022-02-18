
#include<iostream>
using namespace std;

// REALIZA UN ALGORITMO QUE CALCULE LA EDAD DE UNA PERSONA
int main() {
	int edad;
	int factual;
	int nacimiento;
	cout << "BIENVENIDO AL PROGRAMA DE CALCULO DE EDAD" << endl;
	cout << "POR FAVOR INGRESE EL AÑO ACTUAL" << endl;
	cin >> factual;
	cout << "POR FAVOR INGRESE EL AÑO DE NACIMIENTO" << endl;
	cin >> nacimiento;
	edad = factual-nacimiento;
	cout << "SU EDAD ES:" << edad << endl;
	return 0;
}

