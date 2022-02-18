
#include<iostream>
using namespace std;


int main() {
	int a;
	int conjunto[10];
	int contador;
	int i;
	int media;
	media = 0;
	contador = 0;
	media = contador;
	for (i=1;i<=10;i++) {
		cout << "Ingrese un numero" << endl;
		cin >> conjunto[0];
		if (i%2==0) {
			cout << "Array par " << i << endl;
			media = media+conjunto[0];
		}
	}
	// Calcular y mostrar la media
	cout << "La Media de los valores que se encuentran en posiciones pares: " << media/5 << endl;
	return 0;
}

