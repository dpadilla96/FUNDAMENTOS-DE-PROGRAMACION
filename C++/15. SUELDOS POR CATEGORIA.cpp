
#include<iostream>
using namespace std;


int main() {
	float aumento;
	int categoria;
	float sactual;
	float total;
	// CONSTRUYA UN PROGRAMA TAL QUE DADOS DATOS LA CATEGORIA Y EL SUELDO DE UN TRABAJADOR CALCULE EL AUMENTO CORRESPONDIENTE TENIENDO EN 
	// CUENTA LA SIGUIENTE TABLA
	// SI LA CATEGORIA ES 1 EL AUMENTO ES DEL 15%
	// SI LA CATEGORIA ES 2 EL AUMENTO ES DEL 10%
	// SI LA CATEGORIA ES 3 EL AUMENTO ES DEL 8%
	// SI LA CATEGORIA ES 4 EL AUMENTO ES DEL 7%
	cout << "Bienvenido al programa de calculo de sueldo segun categoria" << endl;
	cout << "Ingrese el número de categoria al que pertenece, las opciones son:" << endl;
	cout << "Categoria 1" << endl;
	cout << "Categoria 2" << endl;
	cout << "Categoria 3" << endl;
	cout << "Categoria 4" << endl;
	cin >> categoria;
	switch (categoria) {
	case 1:
		cout << "Perteneces al grupo 1 tu aumento es del 15%" << endl;
		cout << "Ingresa tu saldo actual" << endl;
		cin >> sactual;
		aumento = sactual*.15;
		cout << "Tu aumento es de $" << aumento << endl;
		total = aumento+sactual;
		cout << "Tu sueldo final es" << total << endl;
		break;
	case 2:
		cout << "Perteneces al grupo 2 tu aumento es del 15%" << endl;
		cout << "Ingresa tu saldo actual" << endl;
		cin >> sactual;
		aumento = sactual*.10;
		cout << "Tu aumento es de $" << aumento << endl;
		total = aumento+sactual;
		cout << "Tu sueldo final es" << total << endl;
		break;
	case 3:
		cout << "Perteneces al grupo 3 tu aumento es del 15%" << endl;
		cout << "Ingresa tu saldo actual" << endl;
		cin >> sactual;
		aumento = sactual*.08;
		cout << "Tu aumento es de $" << aumento << endl;
		total = aumento+sactual;
		cout << "Tu sueldo final es" << total << endl;
		break;
	case 4:
		cout << "Perteneces al grupo 4 tu aumento es del 15%" << endl;
		cout << "Ingresa tu saldo actual" << endl;
		cin >> sactual;
		aumento = sactual*.07;
		cout << "Tu aumento es de $" << aumento << endl;
		total = aumento+sactual;
		cout << "Tu sueldo final es" << total << endl;
		break;
	default:
		cout << "Opcion invalida" << endl;
	}
	return 0;
}

