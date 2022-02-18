
#include<iostream>
using namespace std;


int main() {
	int a;
	int b;
	int c;
	cout << "ingresa el rango: " << endl;
	cin >> c;
	for (a=1;a<=c;a++) {
		for (b=1;b<=a;b++) {
			cout << a << "" << endl;
		}
	}
	return 0;
}

