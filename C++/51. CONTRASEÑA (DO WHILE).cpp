//DIANA PADILLA ZAMORA

#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
	int id, contra, res;
	id = 0;
	contra = 0;
	do{
	
	cout<<"Bienvenido, ingrese us id"<<endl;
	cin>>id;
	if (id==1024){
		cout<<"Correcto, continue por favor"<<endl;
		system("pause");
		system("cls");
		
			cout<<"Ahora ingrese su clave"<<endl;
	cin>>contra;
	if (contra==4567890){
		cout<<"A ingresado correctamente"<<endl;
		
	}
	else{
		cout<<"Incorrecto, desea intentarlo de nuevo? 1=SI 2=NO"<<endl;
		cin>>res;
	}


}
}while(res==1);
	
	return 0;
}
