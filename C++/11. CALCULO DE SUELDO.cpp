/* dado como dato el sueldo de un trabajador, se aplicara el 15% 
de aumento si el sueldo ingresado es menor a 1000, en caso contrario solo agradecera la visita*/

#include<iostream>
using namespace std;
int main(){
	float sueldo, aumento, sfinal;
	
	cout<<"bienvenido al programa del calculo de aumento"<<endl;
	system("pause");
	system("cls");
	
	cout<<"\t ingresa tu sueldo actual \t:$"<<endl;
	cin>>sueldo;
	system("pause");
	system("cls");
	
	if(sueldo<=1000){
		cout<<"felicidades ganaste un amento "<<endl;
		aumento= sueldo*0.15;
		sfinal=aumento+sueldo;
		cout<<"tu aumento fue de $"<<aumento<<endl;
		cout<<"tu sueldo final es de $"<<sfinal<<endl;
	}else{
		cout<<"\t\t Gracias por tu visita \t\t"<<endl;
	}
}
