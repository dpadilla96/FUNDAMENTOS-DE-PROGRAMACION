
#include<iostream>
using namespace std;


int main() {
	int a;
	int b;
	int c;
	int may;
	int med;
	int men;
	cout << "Ingrese numero a" << endl;
	cin >> a;
	cout << "Ingrese numero b" << endl;
	cin >> b;
	cout << "Ingrese numero c" << endl;
	cin >> c;
	may = a;
	if (may<b) {
		may = b;
	} else {
		may = may;
	}
	if (may<c) {
		may = c;
	} else {
		may = may;
	}
	cout << "El numero mayor es: " << may << endl;
	if (a<b && b<c) {
		med = b;
	}
	if (b<c && c<a) {
		med = c;
	}
	if (c<a && a<b) {
		med = a;
	}
	if (c<b && b<a) {
		med = b;
	}
	if (a<c && c<b) {
		med = c;
	}
	if (b<a && a<c) {
		med = a;
	}
	cout << "El numero intemedio es: " << med << endl;
	men = a;
	if (men>b) {
		men = b;
	} else {
		men = men;
	}
	if (men>c) {
		men = c;
	} else {
		men = men;
	}
	cout << "En numero menor es: " << men << endl;
	return 0;
}

