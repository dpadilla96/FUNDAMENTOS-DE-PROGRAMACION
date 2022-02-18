
#include<iostream>
using namespace std;


// EN UN HOSPITAL EXISTEN TRES AREAS; GINECOLOGIA, PEDIATRIA, TRAUMATOLOGIA.
// EL PRESUPUESTO ANUAL DEL HOSPITAL SE REPARTE CONFORME LA SIG. TABLA:
// GINECOLOGIA 40%
// TRAUMATOLOGIA 30%
// PEDIATRIA 30%
int main() {
	float ingreso;
	float pg;
	float pp;
	float pt;
	cout << "PRESUPUESTO ASIGNADO" << endl;
	cout << "BIENVENIDO AL PROGRAMA DE ASIGNACION DE PRESUPUESTO" << endl;
	cout << "INGRESE EL DINERO QUE SE VA A REPARTIR" << endl;
	cin >> ingreso;
	cout << "EL PRESUPUESTO SE ASIGNARA DE LA SIGUIENTE MANERA" << endl;
	pg = ingreso*.40;
	cout << "DEPARTAMENTO DE GINECOLOGIA: $" << pg << endl;
	pt = ingreso*.30;
	cout << "DEPARTAMENTO DE TRAUMATOLOGIA: $" << pt << endl;
	pp = ingreso*.30;
	cout << "DEPARTAMENTO DE PEDIATRIA: $" << pp << endl;
	ingreso = pg+pt+pp;
	cout << "MOVIMIENTO DE COMPROBACION " << ingreso << endl;
	return 0;
}

