
#include<iostream>
using namespace std;


int main() {
	string a;
	int c;
	int i;
	int t;
	t = 0;
	i = 0;
	do {
		cout << "Ingrese el nombre del curso" << endl;
		cin >> a;
		cout << "Ingrese la cantidad de creditos que tiene el curso" << endl;
		cin >> c;
		t = t+c;
		i = i+1;
	} while ((t<22));
	i = i-1;
	cout << "Usted no puede tomar el curso " << a << " porque excede los creditos" << endl;
	cout << "Entonces solo cursara: " << i << "cursos" << endl;
	return 0;
}

