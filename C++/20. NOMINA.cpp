
#include<iostream>
using namespace std;


int main() {
	float pagim;
	float sueldo;
	float total;
	float totfin;
	int x;
	// construya un programa tal que dado como datos el sueldo de 10 trabajadores de una empresa obtenga la nomina haciendo la suma total de los sueldos el pago de impuestos
	// equivalente al 24% y el total final
	// inicializar
	total = 0;
	cout << "BIENVENIDO AL PROGRAMA DE NOMINA DE PROAN" << endl;
	for (x=1;x<=10;x++) {
		cout << "INGRESA TU SUELDO SEMANAL, EMPLEADO  " << x << endl;
		cin >> sueldo;
		total = total+sueldo;
	}
	cout << "EL TOTAL DEL OS SUELDOS ES: " << total << endl;
	pagim = total*.24;
	cout << "EL TOTAL DE IMPUESTOS A PAGAR ES $ " << pagim << endl;
	totfin = total+pagim;
	cout << "EL TOTAL FINAL ES $ " << totfin << endl;
	return 0;
}

