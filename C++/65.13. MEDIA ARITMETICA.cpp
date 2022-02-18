//DIANA PADILLA ZAMORA 

#include<iostream>
using namespace std;

// CALCULE LA MEDIA ARITMETICA DE LOS N PRIMEROS NUMEROS ENTEROS POSITIVOS 
int main() {
	float acum;
	float dato;
	int i;
	int n;
	float prom;
	cout << "INGRESE LA CANTIDAD DE DATOS" << endl;
	cin >> n;
	acum = 0;
	for (i=1;i<=n;i++) {
		cout << "INGRESE EL DATO " << i << ":" << endl;
		cin >> dato;
		acum = acum+dato;
	}
	prom = acum/n;
	cout << "EL PROMEDIO ES: " << prom << endl;
	return 0;
}

