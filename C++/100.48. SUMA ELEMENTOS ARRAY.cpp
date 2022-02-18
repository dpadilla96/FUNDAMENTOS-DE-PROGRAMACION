
#include<iostream>
using namespace std;

int main() {
	int a;
	int conjunto[5];
	int contador;
	int i;
	int suma;
	suma = 0;
	contador = 0;
	suma = contador;
	for (i=1;i<=5;i++) {
		cout << "Ingrese un elemento Array" << endl;
		cin >> conjunto[0];
		if (i>0) {
			suma = suma+conjunto[0];
		}
	}
	// Calcular y mostrar la media
	cout << "La suma de los elementos array es de : " << suma << endl;
	return 0;
}

