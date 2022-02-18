//DIANA PADILLA ZAMORA 
#include<iostream>
using namespace std;

// En una universidad tienen como politica considerar
// 3 notas en cada curso la nota de trabajos T, la nota
// de medio ciclo M y la de fin de ciclo F, cada una 
// tiene un peso de 50%, 20% y 30% respectivamente 
int main() {
	int f;
	int m;
	float p;
	int t;
	float tf;
	float tm;
	float tt;
	cout << "Bienvenido al programa de evaluacion de notas del alumno" << endl;
	cout << "Ingrese la nota de tus trabajos" << endl;
	cin >> t;
	cout << "Ingrese la nota que obtuvo a medio ciclo" << endl;
	cin >> m;
	cout << "Ingrese la nota que obtuvo a fin de ciclo" << endl;
	cin >> f;
	if ((0<=t && t<=100)) {
		if ((0<=m && m<=100)) {
			if ((0<=f && f<=100)) {
				tt = t*.50;
				tm = m*.20;
				tf = f*.30;
				p = tt+tm+tf;
				cout << "El porcentaje obtenido de  Trabajos es: " << tt << endl;
				cout << "El porcentaje obtenido de Medio Ciclo es: " << tm << endl;
				cout << "El porcentaje obtenido de Fin de Ciclo es: " << tf << endl;
				cout << "El promedio obtenido es: " << p << endl;
			} else {
				cout << "Alguna nota ingresada no es valida" << endl;
			}
		} else {
			cout << "Alguna nota ingresada no es valida" << endl;
		}
	} else {
		cout << "Alguna nota ingresada no es valida" << endl;
	}
	return 0;
}

