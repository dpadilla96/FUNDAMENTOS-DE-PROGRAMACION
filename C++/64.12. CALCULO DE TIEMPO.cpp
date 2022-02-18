//DIANA PADILLA ZAMORA 

#include<iostream>
using namespace std;

// ESCRIBA UN PROGRAMA QUE LEA UNA HORA Y DIGA CUANTAS HORAS, MINUTOS Y 
// SEGUNDOS EQUIVALE 
int main() {
	float hora;
	float minutos;
	float seg;
	cout << "BIENVENIDO AL PROGRAMA DE CALCULO DEL TIEMPO" << endl;
	cout << "POR FAVOR INSERTE LAS HORAS QUE DESEA CONVERTIR" << endl;
	cin >> hora;
	cout << hora << " HORAS EQUIVALE A: " << endl;
	minutos = hora*60;
	cout << minutos << " MINUTOS" << endl;
	seg = minutos*60;
	cout << seg << " SEGUNDOS" << endl;
	return 0;
}

