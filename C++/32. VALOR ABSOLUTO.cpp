//2)	Leer un numero y escribir el valor absoluto del mismo.

#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
	
	int a, absoluto;
	cout<<"Ingrese un numero"<<endl;
	cin>>a;
	absoluto = abs(a);
	
	cout<<"El valor absoluto de "<< a << " es: "<<absoluto;
	
	
	
	return 0;
}
