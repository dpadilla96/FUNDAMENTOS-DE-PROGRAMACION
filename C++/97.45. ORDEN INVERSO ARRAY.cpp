
#include<iostream>
using namespace std;


int main() {
	int conjunto1[5];
	int conjunto2[5];
	cout << "valores del conjunto1 posicion 0" << endl;
	cin >> conjunto1[0];
	cout << "valores del conjunto1 posicion 1" << endl;
	cin >> conjunto1[1];
	cout << "valores del conjunto1 posicion 2" << endl;
	cin >> conjunto1[2];
	cout << "valores del conjunto1 posicion 3" << endl;
	cin >> conjunto1[3];
	cout << "valores del conjunto1 posicion 4" << endl;
	cin >> conjunto1[4];
	conjunto2[0] = conjunto1[4];
	conjunto2[1] = conjunto1[3];
	conjunto2[2] = conjunto1[2];
	conjunto2[3] = conjunto1[1];
	conjunto2[4] = conjunto1[0];
	cout << "valores del conjunto2" << endl;
	cout << conjunto2[0] << endl;
	cout << conjunto2[1] << endl;
	cout << conjunto2[2] << endl;
	cout << conjunto2[3] << endl;
	cout << conjunto2[4] << endl;
	return 0;
}

