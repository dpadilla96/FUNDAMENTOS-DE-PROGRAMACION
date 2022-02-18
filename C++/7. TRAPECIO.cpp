
#include<iostream>
using namespace std;


int main() {
	float altura;
	float area;
	float basemayor;
	float basemenor;
	cout << "«Escribe la base mayor»" << endl;
	cin >> basemayor;
	cout << "«Escribe la base menor»" << endl;
	cin >> basemenor;
	cout << "«Escribe la altura»" << endl;
	cin >> altura;
	cout << "El area del trapecio es: " << (altura*(basemayor+basemenor)/2) << endl;
	return 0;
}

