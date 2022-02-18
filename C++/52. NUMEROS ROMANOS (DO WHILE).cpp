//DIANA PADILLA ZAMORA

#include<iostream>
using namespace std;


int main(){

	int opc, res;
	
	cout<<"Bienvenido al programa de los numeros romanos"<<endl;
	do{
	system("cls");
	cout<<"\t Ingresa un numero del 1-10,20,30,40,50,60,70,80,90 o 100 y te dire su conversion a Romanos"<<endl;
	cin>>opc;
	switch(opc){
		case 1:
		    cout<<"I"<<endl;
		    break;
		case 2:
			cout<<"II"<<endl;
			break;
		case 3:
			cout<<"III"<<endl;
			break;
		case 4:
			cout<<"IV"<<endl;
			break;
		case 5:
			cout<<"V"<<endl;
			break;
		case 6:
			cout<<"VI"<<endl;
			break;
		case 7:
			cout<<"VII"<<endl;
			break;
		case 8:
		    cout<<"VIII"<<endl;
		    break;
		case 9:
			cout<<"IX"<<endl;
			break;
		case 10:
			cout<<"X"<<endl;
			break;
		case 20:
			cout<<"XX"<<endl;
			break;
		case 30:
			cout<<"XXX"<<endl;
			break;
		case 40:
			cout<<"XL"<<endl;
			break;
		case 50:
			cout<<"L"<<endl;
			break;	
		case 60:
			cout<<"LX"<<endl;
			break;
		case 70:
			cout<<"LXX"<<endl;
			break;
		case 80:
			cout<<"LXXX"<<endl;
			break;
		case 90:
			cout<<"XC"<<endl;
			break;
		case 100:
			cout<<"C"<<endl;
			break;				
	}
	
	
	cout<<"Desea ver otro numero? 1=SI 0=NO"<<endl;
		cin>>res;
	}while(res==1);

	return 0;
}
