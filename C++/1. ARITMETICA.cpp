//Programa
//Este programa te ayuda a resolver operaciones aritmeticas basicas 
#include<iostream>
using namespace std;



int main() {
	float division;
	float multiplicacion;
	float n1;
	float n2;
	int op;
	float resta;
	float suma;
	cout << "1: realizar suma" << endl;
	cout << "2: realizar resta" << endl;
	cout << "3: realizar multiplicacion" << endl;
	cout << "4: realizar division" << endl;
	cout << "Indique la operacion que desea ejecutar" << endl;
	cin >> op;
	switch (op) {
	case 1:
		cout << "Ingrese numero 1" << endl;
		cin >> n1;
		cout << "Ingrese numero 2" << endl;
		cin >> n2;
		suma = n1+n2;
		cout << "La suma es" << suma << endl;
		break;
	case 2:
		cout << "Ingrese numero 1" << endl;
		cin >> n1;
		cout << "Ingrese numero 2" << endl;
		cin >> n2;
		resta = n1-n2;
		cout << "La resta es " << resta << endl;
		break;
	case 3:
		cout << "Ingrese numero 1" << endl;
		cin >> n1;
		cout << "Ingrese numero 2" << endl;
		cin >> n2;
		multiplicacion = n1*n2;
		cout << "La multiplicacion es" << multiplicacion << endl;
		break;
	case 4:
		cout << "Ingrese numero 1" << endl;
		cin >> n1;
		cout << "Ingrese numero 2" << endl;
		cin >> n2;
		division = n1/n2;
		cout << "La division es" << division << endl;
		break;
	default:
		cout << "Error" << endl;
	}
	return 0;
}

