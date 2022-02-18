//DIANA PADILLA ZAMORA 

#include<iostream>
using namespace std;


// CALCULE LA SUMA: S=1*2+2*3+3*4+nx(n+1)
int main() {
	int n;
	int suma;
	cout << "BIENVENIDO AL PROGRAMA DE CALCULO DE SUMA" << endl;
	cout << "POR FAVOR INGRESE EN NUMERO QUE DESEE" << endl;
	cin >> n;
	suma = (1*2)+(2*3)+(3*4)+(n*n)+1;
	cout << "EL RESULTADO DE LA OPERACION ES " << suma << endl;
	return 0;
}

