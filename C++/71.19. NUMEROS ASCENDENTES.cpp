
#include<iostream>
using namespace std;

int main() {
	float a;
	float b;
	float c;
	float d;
	float e;
	float men;
	cout << "Ingrese cinco numeros enteros" << endl;
	cin >> a >> b >> c >> d >> e;
	men = a;
	if (a<b && b<c && c<d && d<e) {
		cout << "Los numeros estan ordenados" << endl;
	} else {
		cout << "Los numeros no estan ordenados" << endl;
	}
	return 0;
}

