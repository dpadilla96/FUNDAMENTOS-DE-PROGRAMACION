//DIANA PADILLA ZAMORA 

#include<iostream>
using namespace std;


// CONTRUYA UN PROGRAMA QUE CALCULE EL AREA Y PERIMETRO DE UN RECTANGULO
int main() {
	float altura;
	float area;
	float base;
	float perimetro;
	cout << "BIENVENIDO AL PROGRAMA DE CALCULO DE AREA Y PERIMETRO" << endl;
	cout << "ESTE PROGRAMA SOLO FUNCIONA PARA RECTANGULOS" << endl;
	cout << "POR FAVOR INGRESA LA BASE:" << endl;
	cin >> base;
	cout << "POR FAVOR INGRESA LA ALTURA:" << endl;
	cin >> altura;
	perimetro = (base+altura)*2;
	cout << "EL PERIMETRO ES: " << perimetro << endl;
	area = base*altura;
	cout << "EL AREA ES: " << area << endl;
	return 0;
}

