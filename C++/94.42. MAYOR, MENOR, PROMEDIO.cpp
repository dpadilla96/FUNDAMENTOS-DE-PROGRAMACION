
#include<iostream>
using namespace std;


int main() {
	int cant_num;
	int nmayor;
	int nmenor;
	int nro;
	int p;
	int tsuma;
	cout << "Ingrese la cantidad de numeros que desea evaluar" << endl;
	cin >> cant_num;
	nmayor = 0;
	nmenor = 0;
	tsuma = 0;
	for (p=1;p<=cant_num;p++) {
		cout << "Ingresa un numero " << p << endl;
		cin >> nro;
		if (nro>nmayor) {
			nmayor = nro;
		}
		if (p==1) {
			nmenor = nro;
		} else {
			if (nmenor>nro) {
				nmenor = nro;
			}
		}
		tsuma = tsuma+nro;
	}
	cout << " RESULTADOS " << endl;
	cout << "El numero mayor es: " << nmayor << endl;
	cout << "El numero menor es: " << nmenor << endl;
	cout << "El promedio es: " << tsuma/cant_num << endl;
	return 0;
}

