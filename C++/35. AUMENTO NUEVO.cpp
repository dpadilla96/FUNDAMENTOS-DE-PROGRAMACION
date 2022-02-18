
#include<iostream>
using namespace std;


// CALCULAR EL NUEVO SALARIO DE UN OBRERO SU OBTUVO UN INCREMENTO
// DEL 25% SOBRE SU SALARIO ANTERIOR
int main() {
	float incremento;
	float sactual;
	float sfinal;
	cout << "CALCULO DE AUMENTO DE SUELDO" << endl;
	cout << "BIENVENIDO TRABAJADOR, POR FAVOR INGRESA TU SUELDO ACTUAL" << endl;
	cin >> sactual;
	cout << "EL AUMENTO DE SUELDO ES DEL 25%" << endl;
	incremento = sactual*.25;
	cout << "TU AUMENTO ES DE $" << incremento << endl;
	sfinal = incremento+sactual;
	cout << "TU SUELDO FINAL ES DE $" << sfinal << endl;
	return 0;
}

