
#include<iostream>
using namespace std;


// TODOS LOS LUNES, MIERCOLES Y VIERNES, UNA PERSONA CORRE LA MISMA RUTA
// Y CRONOMETRA LOS TIEMPOS OBTENIDOS. DETERMINA EL TIEMPO PROMEDO EN QUE
// LA PERSONA TARDE EN RECORRER LA RUTA EN UNA SEMANA CUALQUIERA.
int main() {
	float promedio;
	float tl;
	float tm;
	float tv;
	cout << "BIENVENIDO CORREDOR" << endl;
	cout << "INGRESE SU TIEMPO EN MINUTOS DEL D�A LUNES" << endl;
	cin >> tl;
	cout << "INGRESE SU TIEMPO EN MINUTOS DEL D�A MIERCOLES" << endl;
	cin >> tm;
	cout << "INGRESE SU TIEMPO EN MINUTOS DEL D�A VIERNES" << endl;
	cin >> tv;
	promedio = (tl+tm+tv)/3;
	cout << "EL PROMEDIO DE LA SEMANA ES " << promedio << endl;
	return 0;
}

