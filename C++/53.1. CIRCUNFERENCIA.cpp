
#include<iostream>
using namespace std;

int main() {
	float diametro;
	float per;
	float radio;
	cout << "Bienvenido al programa de calculo de circunferencia" << endl;
	cout << "Por favor ingresa el radio de tu circulo" << endl;
	cin >> radio;
	diametro = radio*2;
	per = 3.1416*diametro;
	cout << "El diametro es: " << diametro << endl;
	cout << "El perimetro de tu circulo es: " << per << endl;
	return 0;
}

