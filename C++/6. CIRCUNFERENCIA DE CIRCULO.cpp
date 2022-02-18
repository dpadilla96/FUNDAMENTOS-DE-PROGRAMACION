
#include<iostream>
#include<cmath>
using namespace std;
                                                                                  
int main() {
	float area;
	float circunferencia;
	float pi;
	float radio;
	cout << "Introduzca el valor de radio" << endl;
	cin >> radio;
	cout << "El valor del area es: " << (M_PI)*pow(radio,2) << endl;
	cout << "El valor de la circunferencia es : " << 2*(M_PI)*radio << endl;
	return 0;
}

