//DIANA PADILLA ZAMORA 

#include<iostream>
#include<cmath>
using namespace std;

int main() {
	float aux;
	float cont;
	float n;
	// CREAR UN PROGRAMA QUE CALCULE CUANTAS CIFRAS TIENE UN NUMERO ENTERO POSITIVO
	cout << "INGRESE UN NUMERO ENTERO POSITIVO" << endl;
	cin >> n;
	cont = 0;
	aux = n;
	while (aux>0) {
		cont = cont+1;
		aux = floor(aux/10);
	}
	cout << "EL NUMERO TIENE " << cont << " DIGITOS" << endl;
	return 0;
}

