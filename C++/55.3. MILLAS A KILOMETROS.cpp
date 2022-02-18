//DIANA PADILLA ZAMORA
#include<iostream>
using namespace std;



// CONVERSION DE MILLAS A KILOMETROS 
int main() {
	float kilometros;
	float millas;
	cout << "INSERTE LA CANTIDAD DE MILLAS QUE QUIERE CONVERTIR" << endl;
	cin >> millas;
	kilometros = millas*1609;
	cout << "LOS KILOMETROS EQUIVALENTES SON: " << kilometros << endl;
	return 0;
}

