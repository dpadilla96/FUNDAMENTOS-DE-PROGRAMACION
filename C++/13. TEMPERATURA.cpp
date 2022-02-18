//Realice un programa el cual calcule el numero de sonidos emitidos por un grillo para determinar una función de temperatura, esto es posible gracias a la formula TEMPERATURA ES IGUAL A EL NUMERO DE SONIDOS EMITIDOS POR MINUTO ENTRE 4 MAS 40

#include<iostream>
using namespace std; 

int main(){
	
	int sonido;
	float temperatura;
	
	
	cout<<"BIENVENIDO AL PROGRAMA PARA CALCULAR TEMPERATURA"<<endl; 
	system ("pause");
	system("cls");
	
	cout<<"INGRESA EL NUMERO DE SONIDOS EMITIDOS POR EL GRILLO: \t"<<endl; 
	cin>>sonido;
	
	if (sonido>0){
		
		temperatura=(sonido/4)+40;
		cout<<"LA TEMPERATURA ES IGUAL A:" <<temperatura<<endl;
	}else
	cout<<"TU VALOR ES INVALIDO, POR LO TANTO NO PUEDO EMITIR LA TEMPERATURA"<<endl;
	
}
