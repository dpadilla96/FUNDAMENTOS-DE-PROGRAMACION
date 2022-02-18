// DIANA PADILLA ZAMORA

#include<iostream>
using namespace std;


// CALCULE EL PERIMETRO DE UN TRIANGULO RECTANGULO 
int main() {
	float altura;
	float base;
	float hipotenusa;
	float perimetro;
	cout << "BIENVENIDO AL PROGRAMA DE CALCULO DE PERIMETRO" << endl;
	cout << "ESTE PROGRAMA FUNCIONA CON TRIANGULOS RECTANGULOS" << endl;
	cout << "POR FAVOR INGRESE LA BASE" << endl;
	cin >> base;
	cout << "POR FAVOR INGRESE LA ALTURA" << endl;
	cin >> altura;
	cout << "POR FAVOR INGRESE LA HIPOTENUSA" << endl;
	cin >> hipotenusa;
	perimetro = base+altura+hipotenusa;
	cout << "EL PERIMETRO DE ESTE TRIANGULO ES: " << perimetro << endl;
	return 0;
}

