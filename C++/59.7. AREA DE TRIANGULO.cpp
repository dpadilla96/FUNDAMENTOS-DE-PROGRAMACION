
#include<iostream>
#include<cmath>
using namespace std;

int main() {
	float a;
	float area;
	float b;
	float c;
	cout << "Bienvenido al programa de calculo de area" << endl;
	cout << "Por favor ingresa el lado a" << endl;
	cin >> a;
	cout << "Por favor ingresa el lado b" << endl;
	cin >> b;
	cout << "Por favor ingresa el angulo" << endl;
	cin >> c;
	area = .5*a*b*sin(c);
	cout << "El area del triangulo es: " << endl;
	return 0;
}

