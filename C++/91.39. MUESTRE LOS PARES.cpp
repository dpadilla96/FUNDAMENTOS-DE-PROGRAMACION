
#include<iostream>
using namespace std;

int main() {
	int a;
	int b;
	int c;
	cout << "Bienvenido al programa que muestra los pares en un rango de numeros" << endl;
	c = 0;
	cout << "Ingrese el inicio: " << endl;
	cin >> a;
	cout << "Ingrese el final: " << endl;
	cin >> b;
	while ((a<b)) {
		if ((a%2==0)) {
			cout << "" << a << endl;
			c = c+1;
		}
		a = a+1;
	}
	cout << "La cantidad de pares fueron: " << c << endl;
	return 0;
}

