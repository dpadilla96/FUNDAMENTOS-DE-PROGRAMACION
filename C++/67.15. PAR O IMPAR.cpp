//DIANA PADILLA ZAMORA 

#include<iostream>
using namespace std;


// DIGA SI UN NUMERO ES PAR O IMPAR 
int main() {
	int num;
	cout << "BIENVENIDO AL PROGRAMA DE CLASIFICACION DE NUMEROS" << endl;
	cout << "POR FAVOR INGRESE SU NUMERO" << endl;
	cin >> num;
	if (num%2==0) {
		cout << num << " ES UN NUMERO PAR" << endl;
	} else {
		cout << num << " ES UN NUMERO IMPAR" << endl;
	}
	return 0;
}

