//DIANA PADILLA ZAMORA

#include<iostream>
using namespace std;


// ELABORA UN PROGRAMA DONDE CALCULES EL AREA TOTAL DE UN PARALELEPIPEDO

int main() {
	float a;
	float area;
	float b;
	float c;
	float c1;
	float c2;
	float c3;
	cout << "INGRESE LA BASE" << endl;
	cin >> b;
	cout << "INGRESE ALTURA" << endl;
	cin >> a;
	cout << "INGRESE ANCHO" << endl;
	cin >> c;
	c1 = (a*b)*(2);
	c2 = (a*c)*(2);
	c3 = (b*c)*(2);
	area = c1+c2+c3;
	cout << "EL AREA DE TU PARALELEPIPEDO ES: " << area << endl;
	return 0;
}

