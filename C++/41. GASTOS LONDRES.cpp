
#include<iostream>
using namespace std;


int main() {
	float gastos;
	float total;
	total = 1;
	gastos = 1;
	cout << "BIENVENIDOS AL PROGRAMA QUE CALCULA TUS GASTOS A LONDRES" << endl;
	while (gastos>0) {
		cout << "INGRESA TU GASTO" << endl;
		cin >> gastos;
		total = total+gastos;
	}
	cout << "TU GASTO TOTAL EL DE $" << total << "TE QUEDASTE POBRE" << endl;
	return 0;
}

