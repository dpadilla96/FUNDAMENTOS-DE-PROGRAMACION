
#include<iostream>
using namespace std;


// DIANAPADILLAZAMORA
int main() {
	int a[100];
	int d;
	int n;
	int pn;
	cout << "NOTA: El arreglo NO puede tener mas de 100 datos" << endl;
	cout << "¿Cuantos datos habra en el arreglo?" << endl;
	cin >> n;
	n = n-1;
	for (pn=0;pn<=n;pn++) {
		cout << "Ingrese el valor de la posicion " << pn << " del arreglo" << endl;
		cin >> a[pn];
	}
	cout << "¿Que elemento desea buscar en el array?" << endl;
	cin >> d;
	for (pn=0;pn<=n;pn++) {
		if ((a[pn]==d)) {
			cout << "El elemento fue encontrado en la posición " << pn << endl;
		} else {
			cout << "El elemento no fue encontrado en la posicion " << pn << endl;
		}
	}
	return 0;
}

