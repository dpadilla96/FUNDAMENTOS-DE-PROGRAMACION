//Realice un programa tal que dado como dato la calificaci�n de un alumno en su examen escribira si es mayor que 8 puedes festejar el 14 de febrero en caso contrario dira ponte a estudiar 

#include<iostream>
using namespace std; 

int main(){

	float calificacion; 
	
	cout<<"T� 14 DE FEBRERO DEPENDE DE TU CALIFICACI�N "<<endl;
	system ("pause");
	
	cout<<"INGRESA TU CALIFICACI�N"<<endl;
	cin>>calificacion;
	
	if (calificacion>=8){
		cout <<"FELICIDADES PUEDES FESTEJAR EL 14 DE FEBRERO"<<endl;
	}
	
	if (calificacion <=8){
		cout<<"HIJOLE MANO PONTE A ESTUDIAR"<<endl;
	}
}
