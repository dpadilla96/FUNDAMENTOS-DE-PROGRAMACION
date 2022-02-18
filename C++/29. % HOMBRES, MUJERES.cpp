
#include<iostream>
using namespace std;


// UN MAESTRO DESEA CONOCER QUE PORCENTAJE DE HOMBRES Y QUE PORCENTAJE DE MUJERES HAY 
// EN UN GRUPO DE ESTUDIANTES
int main() {
	float hombres;
	float mujeres;
	float ph;
	float pm;
	float suma;
	cout << "PROGRAMA DE CALCULO DE PORCENTAJE PARA PROFESORES" << endl;
	cout << "BIENVENIDO PROFESOR" << endl;
	cout << "POR FAVOR INGRESE EL NUMERO DE ALUMNOS CON LOS QUE CUENTA" << endl;
	cin >> hombres;
	cout << "POR FAVOR INGRESE EL NUMERO DE ALUMNAS CON LAS QUE CUENTA" << endl;
	cin >> mujeres;
	suma = hombres+mujeres;
	cout << "LA CANTIDAD DE ALUMNOS CON LOS QUE CUENTA ES DE:" << suma << endl;
	ph = hombres*100/suma;
	cout << "EL PORCENTAJE DE HOMBRES ES DE:" << ph << endl;
	pm = mujeres*100/suma;
	cout << "EL PORCENTAJE DE MUJERES ES DE:" << pm << endl;
	return 0;
}

