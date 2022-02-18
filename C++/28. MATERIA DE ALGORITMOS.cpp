
#include<iostream>
using namespace std;


// UN ALUMNO DESEA SABER CUAL SERA SU CALIFICACION FINAL EN LA MATERIA DE ALGORITMOS
// DICHA CALIFICACION SE COMPONE DE LOS SIGUIENTES PORCENTAJES:
// 55% CALIFICACIONES PARCIALES 
// 30% CALIFICACION DEL EXAMEN FINAL
// 15% CALIFICACION DEL TRABAJO FINAL
int main() {
	float examen;
	float parciales;
	float promedio;
	float trabajo;
	cout << "BIENVENIDO AL PROGRAMA DE DESGLOCE DE CALIFICACIÓN DE LA MATERIA DE ALGORITMOS" << endl;
	cout << "INGRESE SU PROMEDIO FINAL" << endl;
	cin >> promedio;
	parciales = promedio*.55;
	cout << "EL PORCENTAJE DE SUS 3 PARCIALES ES:" << parciales << endl;
	examen = promedio*.30;
	cout << "EL PORCENTAJE DE SU EXAMEN FINAL ES:" << examen << endl;
	trabajo = promedio*.15;
	cout << "EL PORCENTAJE DE SU TRABAJO FINAL ES:" << trabajo << endl;
	return 0;
}

