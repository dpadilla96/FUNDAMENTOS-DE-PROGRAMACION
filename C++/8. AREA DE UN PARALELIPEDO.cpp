
#include<iostream>
using namespace std;


int main() {
	float alto;
	float ancho;
	float largo;
	cout << "favor de ingresar largo" << endl;
	cin >> largo;
	cout << "favor de ingresar ancho:" << endl;
	cin >> ancho;
	cout << "favor de ingresar la altura:" << endl;
	cin >> alto;
	cout << "El area del paralelepipedo es :" << 2*((largo*ancho)+(largo*alto)+(ancho*alto)) << endl;
	return 0;
}

