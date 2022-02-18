
#include<iostream>
using namespace std;


int main() {
	int m;
	int n;
	cout << "Este programa te indica si n es un multiplo de m" << endl;
	cout << "Por favor ingresa dos numeros" << endl;
	cin >> n >> m;
	if (n%m<-0) {
		cout << n << " es un multiplo de " << m << endl;
	} else {
		cout << n << " no es un multiplo de " << m << endl;
	}
	return 0;
}

