
#include<iostream>
using namespace std;

// LA PRESIÓN, EL VOLUMEN Y LA TEMPERATURA DE UNA MASA DE AIRE SE 
// RELACIONAN POR LA FORMULA: 
// MASA=(PRESION*VOLUMEN)/(0.37*(TEMPERATURA+460))
int main() {
	float masa;
	float presion;
	float temperatura;
	float volumen;
	cout << "BIENVENIDO AL PROGRAMA DE CALCULO DE MASA DE AIRE" << endl;
	cout << "INGRESE LOS SIGUIENTES DATOS" << endl;
	cout << "PRESION" << endl;
	cin >> presion;
	cout << "VOLUMEN" << endl;
	cin >> volumen;
	cout << "TEMPERATURA" << endl;
	cin >> temperatura;
	masa = (presion*volumen)/(0.37*(temperatura+460));
	cout << "LA MASA DE AIRE ES:" << masa << endl;
	return 0;
}

