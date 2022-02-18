

#include<iostream>
using namespace std;


int main() {
	float a;
	float b;
	float c;
	float mayor;
	cout << "Introduzca 3 numeros" << endl;
	cin >> a;
	cin >> b;
	cin >> c;
	if (a>=b && a>=c) {
		mayor = a;
	} else {
		if (b>=a && b>=c) {
			mayor = b;
		} else {
			mayor = c;
		}
	}
	cout << "maximo" << mayor << endl;
	return 0;
}

