
#include<iostream>
#include<cmath>
using namespace std;

int main() {
	int i;
	int n;
	cout << "Bienvenido al programa que te dice los digitos de un numero" << endl;
	cout << "Ingresa un numero por favor" << endl;
	cin >> n;
	i = 0;
	while (n!=0) {
		n = floor(n/10);
		i = i+1;
	}
	cout << "El numero esta formado por: " << i << " digitos" << endl;
	return 0;
}

