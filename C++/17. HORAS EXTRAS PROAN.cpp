
#include<iostream>
using namespace std;



int main() {
	int categoria;
	float horas;
	float subtotal;
	float subtotal1;
	float subtotal2;
	// ESCRIBA UN PROGRAMA QUE TE PERMITA CALCULAR LO QUE DEBEMOS CALCULARLE A LOS TRABAJADORES DE LA EMPRESA PROAN TENIENDO EN CUENTA SU SUELDO Y LAS HORAS
	// EXTRAS TRABAJADAS PARA LA CUAL CONSIDERAREMOS LO SIGUIENTE: 
	// CATEGORIA 1 HORA EXTRA A $30.00 PESOS 
	// CATEGORIA 2 HORA EXTRA A $38.00 PESOS 
	// CATEGORIA 3 HORA EXTRA A $50.00 PESOS 
	// CATEGORIA 4 HORA EXTRA A $70.00 PESOS 
	// CADA TRABAJADOR PUEDE ACUMULAR 30 HORAS MAXIMO SI LLEGARAN A TENER MAS SE PAGARAN A $30.00
	cout << "Bienvenido al calculo de Horas Extras de PROAN" << endl;
	cout << "Por favor seleccione la categoría a la que pertenece" << endl;
	cout << "Categoría 1" << endl;
	cout << "Categoría 2" << endl;
	cout << "Categoría 3" << endl;
	cout << "Categoría 4" << endl;
	cin >> categoria;
	switch (categoria) {
	case 1:
		cout << "Perteneces a la categoría 1, las horas extras se pagan a $30.00" << endl;
		cout << "Ingrese cantidad de horas trabajadas" << endl;
		cin >> horas;
		if (horas>=30) {
			subtotal1 = horas*30;
			if (horas>=31) {
				subtotal2 = horas*30;
			}
		}
		cout << "El monto correspondiente es de $" << subtotal << endl;
		break;
	case 2:
		cout << "Perteneces a la categoría 2, las horas extras se pagan a $38.00" << endl;
		cout << "Ingrese cantidad de horas trabajadas" << endl;
		cin >> horas;
		subtotal = horas*38;
		cout << "El monto correspondiente es de $" << subtotal << endl;
		break;
	case 3:
		cout << "Perteneces a la categoría 3, las horas extras se pagan a $50.00" << endl;
		cout << "Ingrese cantidad de horas trabajadas" << endl;
		cin >> horas;
		subtotal = horas*50;
		cout << "El monto correspondiente es de $" << subtotal << endl;
		break;
	case 4:
		cout << "Perteneces a la categoría 4, las horas extras se pagan a $70.00" << endl;
		cout << "Ingrese cantidad de horas trabajadas" << endl;
		cin >> horas;
		subtotal = horas*70;
		cout << "El monto correspondiente es de $" << subtotal << endl;
		break;
	}
	return 0;
}

