
#include<iostream>
#include<cmath>
using namespace std;

int main() {
	int acum;
	int m;
	int n;
	acum = 0;
	cout << "El total de panes al comenzar el dia: " << endl;
	cin >> n;
	cout << "Panes que pide el cliente: " << endl;
	cin >> m;
	do {
		cout << n << endl;
		n = n-m;
		acum = acum+1;
	} while (n>=0);
	cout << "Los clientes atendidos son: " << acum << endl;
	cout << "Los panes que quedan para el ultimo cliente son: " << abs(n) << endl;
	return 0;
}

