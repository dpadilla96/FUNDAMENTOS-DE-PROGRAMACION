
#include<iostream>
using namespace std;

int main() {
	int r;
	int t;
	t = 0;
	do {
		cout << "¿Cuanto dinero quiere retirar?" << endl;
		cin >> r;
		t = t+r;
	} while ((t<1000));
	t = t-r;
	t = 1000-t;
	cout << "Ya no puede retirar " << r << " solo cuenta con: " << t << endl;
	return 0;
}

