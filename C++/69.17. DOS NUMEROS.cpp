
#include<iostream>
using namespace std;


int main() {
	float a;
	float b;
	float res;
	cout << "Bienvenido al programa que calcula dos numeros segun su naturaleza" << endl;
	cout << "Por favor ingrese numero a" << endl;
	cin >> a;
	cout << "Por favor ingrese numero b" << endl;
	cin >> b;
	if (a>0 && b>0) {
		res = a*b;
		cout << "Sus productos son positivos, su producto es: " << res << endl;
	} else {
		res = a+b;
		cout << "Sus productos son negativos, su suma es: " << res << endl;
	}
	return 0;
}

