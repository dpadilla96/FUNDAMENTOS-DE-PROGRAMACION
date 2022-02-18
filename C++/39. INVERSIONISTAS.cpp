
#include<iostream>
using namespace std;


// TRES PERSONAS DECIDEN INVERTIR SU DINERO PARA FUNDAR UNA EMPRESA.
// CADA UNA DE ELLAS INVIERTE UNA CANTIDAD DISTINTA
// OBTEN EL PORCENTAJE QUE INVIERTE CADA QUIEN
int main() {
	float i1;
	float i2;
	float i3;
	float monto;
	float p;
	cout << "BIENVENIDOS NUEVOS SOCIOS" << endl;
	cout << "INGRESEN SUS DATOS SEGUN SE PIDE:" << endl;
	cout << "MONTO INVERSIONISTA 1" << endl;
	cin >> i1;
	cout << "MONTO INVERSIONISTA 2" << endl;
	cin >> i2;
	cout << "MONTO INVESIONISTA 3" << endl;
	cin >> i3;
	monto = i1+i2+i3;
	cout << "INVERSION FINAL $" << monto << endl;
	p = i1*100/monto;
	cout << "PORCENTAJE DE INVERSIONISTA 1 " << p << endl;
	p = i2*100/monto;
	cout << "PORCENTAJE DE INVERSIONISTA 2 " << p << endl;
	p = i3*100/monto;
	cout << "PORCENTAJE DE INVERSIONISTA 3 " << p << endl;
	return 0;
}

