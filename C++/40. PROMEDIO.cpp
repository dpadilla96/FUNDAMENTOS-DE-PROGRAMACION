#include<iostream>
using namespace std;


// UN ALUMNO DESEA SABER CUAL SERA SU PROMEDIO GENERAL EN LAS TRES 
// MATERIAS MAS DIFICILES QUE CURSA Y CUAL SERA EL PROMEDIO QUE OBTENDRA
// EN CADA UNA DE ELLAS. ESTAS MATERIAS SE EVALUAN COMO SE MUESTRA:
// MATEMATICAS EXAMEN 90%, TAREAS(3) 10%
// FISICA EXAMEN 80%, TAREAS (2) 20%
// QUIMICA ECAMEN 85%, TAREAS(3) 15%
int main() {
	float cf;
	float cm;
	float cq;
	float ef;
	float em;
	float eq;
	float pfinal;
	float prom;
	float promt;
	float tf;
	float tm;
	float tq;
	cout << "BIENVENIDO ALUMNO" << endl;
	cout << "TE ENTREGAMOS TU PROMEDIO GENERAL" << endl;
	cout << "INGRESA LOS DATOS QUE SE TE PIDEN A CONTINUACION" << endl;
	cout << "MATEMATICAS" << endl;
	cout << "INGRESA TU CALIFICACION DEL EXAMEN" << endl;
	cin >> em;
	prom = em*90/100;
	cout << "PROMEDIO DEL EXAMEN:" << prom << endl;
	cout << "INGRESA TU CALIFICACION DE TAREAS" << endl;
	cin >> tm;
	promt = tm*10/100;
	cout << "PROMEDIO TAREAS:" << prom << endl;
	cm = prom+promt;
	cout << "CALIFICACION DE MATEMATICAS:" << cm << endl;
	cout << "FISICA" << endl;
	cout << "INGRESA TU CALIFICACION DEL EXAMEN" << endl;
	cin >> em;
	prom = em*80/100;
	cout << "PROMEDIO DEL EXAMEN:" << prom << endl;
	cout << "INGRESA TU CALIFICACION DE TAREAS" << endl;
	cin >> tm;
	promt = tm*20/100;
	cout << "PROMEDIO TAREAS:" << prom << endl;
	cf = prom+promt;
	cout << "CALIFICACION DE FISICA:" << cf << endl;
	cout << "QUIMICA" << endl;
	cout << "INGRESA TU CALIFICACION DEL EXAMEN" << endl;
	cin >> em;
	prom = em*85/100;
	cout << "PROMEDIO DEL EXAMEN:" << prom << endl;
	cout << "INGRESA TU CALIFICACION DE TAREAS" << endl;
	cin >> tm;
	promt = tm*15/100;
	cout << "PROMEDIO TAREAS:" << prom << endl;
	cq = prom+promt;
	cout << "CALIFICACION DE QUIMICA:" << cq << endl;
	pfinal = (cm+cf+cq)/3;
	cout << "PROMEDIO FINAL:" << pfinal << endl;
	return 0;
}

