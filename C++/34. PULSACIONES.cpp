
#include<iostream>
using namespace std;

// CALCULAR EL NUMERO DE PULSACIONES QUE UNA PERSONA DEBE TENER POR 
// CADA 10 SEGUNDOS DE EJERCICIO, SI LA FORMULA ES:
// NUM.PULSACIONES=(220-EDAD)/10
int main() {
	float edad;
	float pfinal;
	float ritmo;
	float tiempo;
	cout << "BIENVENIDO AL PROGRAMA DE CALCULO DE PULSACIONES" << endl;
	cout << "INGRESE SU EDAD" << endl;
	cin >> edad;
	pfinal = (220/edad)/10;
	cout << "SU PULSO DEBE DE SER " << pfinal << endl;
	cout << "INGRESE SUS MINUTOS DE EJERCICIO" << endl;
	cin >> tiempo;
	ritmo = pfinal*tiempo;
	cout << "SU PULSO FINAL DEBE DE SER DE: " << ritmo << endl;
	return 0;
}

