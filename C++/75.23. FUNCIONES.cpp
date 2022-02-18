
#include<iostream>
using namespace std;


int main() {
	int f1;
	int f2;
	int f3;
	int x;
	cout << "Bienvenido al programa de calculo de funciones" << endl;
	cout << "Ingrese un valor para x" << endl;
	cin >> x;
	f1 = x*x+1;
	f2 = x*x+3*x+2;
	f3 = x+1;
	if (x<=0) {
		cout << "La funcion es: " << f1 << endl;
	} else {
		if (0<x && x<3) {
			cout << "La funcion es: " << f2 << endl;
		} else {
			if (x>=3) {
				cout << "La funcion es: " << f3 << endl;
			} else {
			}
		}
	}
	return 0;
}

