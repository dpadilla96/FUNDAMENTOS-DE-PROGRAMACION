
#include<iostream>
using namespace std;


int main() {
	float a;
	float bm;
	float bp;
	float h;
	cout << "Bienvenido al programa de calculo de area de trapecios" << endl;
	cout << "Ingrese base mayor" << endl;
	cin >> bm;
	cout << "Ingrese base menor" << endl;
	cin >> bp;
	cout << "Ingrese altura" << endl;
	cin >> h;
	a = ((bm+bp)*h/2);
	cout << "El area de tu trapecio es: " << a << endl;
	return 0;
}

