//realice un programa tal que dado como dato 270 numeros enteros obtenga la suma de los numeros impares y el promedio de los numeros pares
	//(utilizar azar en pseint y random en C
	
	#include <cstdlib>
	#include <iostream>
	using namespace std;
	int main (){
		int n;
		int a, b, c, d, e, f, prom;
		n=270;
		b=0;
		e=0;
		
		for (int x=0; x<n; x++){
			a=rand();
			if (a%2==0){
				c=a++;
				
				b++;
				
			}
		}
cout<<"se escogieron al azar "<<b<<"numeros pares de 270 numeros. Por lo tanto hay-"<<270-b<<"-numeros impares.\n\tla suma de estos numeros es:\t\t"<<c<<endl;
prom=a/b;
cout<<"\tel promedio de esta suma es:\t\t"<<prom<<endl;

if(a%2>0){
	d=a++;
	
	e++;
}
cout<<"\la suma de los numeros impares es:\t"<<d;
return 0;
	}
