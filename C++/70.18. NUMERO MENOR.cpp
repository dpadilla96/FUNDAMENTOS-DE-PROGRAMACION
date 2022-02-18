
#include<iostream>
using namespace std;


int main() {
	int a;
	int b;
	int c;
	int d;
	int e;
	int men;
	cout << "Ingrese cinco numeros" << endl;
	cin >> a >> b >> c >> d >> e;
	men = a;
	if (men>a) {
		men = b;
	} else {
		men = men;
	}
	if (men>c) {
		men = c;
	} else {
		men = men;
	}
	if (men>d) {
		men = d;
	} else {
		men = men;
	}
	if (men>e) {
		men = e;
	} else {
		men = men;
	}
	cout << "El numero menor de este conjunto es: " << men << endl;
	return 0;
}

