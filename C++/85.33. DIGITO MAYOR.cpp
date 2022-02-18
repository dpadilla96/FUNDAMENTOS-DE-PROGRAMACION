
#include<iostream>
#include<cmath>
using namespace std;

int main() {
	int i;
	int m;
	int n;
	cout << "Bienvenido al programa que te indica el digito mayor de un numero" << endl;
	cout << "Por favor ingresa un numero" << endl;
	cin >> n;
	i = 0;
	while (n>0) {
		m = n%10;
		if (m>i) {
			i = m;
		}
		n = floor(n/10);
	}
	cout << "El digito mayor es: " << i << endl;
	return 0;
}

