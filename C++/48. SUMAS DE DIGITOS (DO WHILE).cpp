//DIANA PADILLA ZAMORA 

#include<iostream>
using namespace std;


int main() {
	float num;
	float suma;
	// CREA UN PROGRAMA QUE PIDA NUMEROS POSITIVOS AL USUARIO, Y VAYA 
	// CALCULANDO LA SUMA DE TODOS ELLOS (TERMINARA CUANDO SE TECLEA 
	// UN NUMERO NEGATIVO O CERO)
	cout << "BIENVENIDO AL PROGRAMA QUE SUMA LOS DIGITOS QUE NOS DES" << endl;
	cout << "RECUERDA QUE PARA DETENR LA SUMA TIENES QUE TECLEAR 0" << endl;
	num = 1;
	suma = 0;
	while (num>0) {
		cout << "INGRESA TU NUMERO" << endl;
		cin >> num;
		suma = suma+num;
	}
	cout << "LA SUMA ES " << suma << endl;
	return 0;
}

