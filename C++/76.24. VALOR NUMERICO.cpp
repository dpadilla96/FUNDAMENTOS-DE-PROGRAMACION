//DIANA PADILLA ZAMORA
#include<iostream>
using namespace std;

int main() {
	int a;
	int b;
	int f1;
	int f2;
	int f3;
	cout << "Bienvenido al programa que te arroja el valor numerico" << endl;
	cout << "Ingrese un valor a" << endl;
	cin >> a;
	cout << "Ingrese un valor b" << endl;
	cin >> b;
	f1 = 2*a+b;
	f2 = a*2-2*b;
	f3 = a+b;
	if (a*a-b*b<0) {
		cout << "La funcion es F1 y el resultado es: " << f1 << endl;
	}
	if (a*a-b*b==0) {
		cout << "La funcion es F2 y el resultado es: " << f2 << endl;
	}
	if (a*a-b*b>3) {
		cout << "La funcion es F3 y el resultado es: " << f3 << endl;
	}
	return 0;
}

