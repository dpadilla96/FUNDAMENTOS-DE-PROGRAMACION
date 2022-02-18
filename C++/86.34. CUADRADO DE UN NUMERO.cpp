
#include<iostream>
using namespace std;


int main() {
	int m;
	int n;
	int z;
	cout << "Bienvenido al programa que te da el cuadrado de un numero" << endl;
	cout << "Ingrese un numero" << endl;
	cin >> n;
	m = 1;
	z = 0;
	while (m<=2*n-1) {
		z = z+m;
		m = m+2;
		cout << "El Cuadrado es: " << endl;
		cout << z << endl;
	}
	return 0;
}

